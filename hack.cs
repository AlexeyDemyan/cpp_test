using System;
using System.Diagnostics;
using System.Runtime.InteropServices;

class Program
{
    const int PROCESS_VM_READ = 0x10;
    const int GAME_POINTER_OFFSET = 0x7030;
    const int PLAYER_HEALTH_OFFSET = 0x4;

    [DllImport("kernel32.dll")]
    public static extern IntPtr OpenProcess(
        int dwDesiredAccess,
        bool bInheritHandle,
        int dwProcessId);

    [DllImport("kernel32.dll")]
    public static extern bool ReadProcessMemory(
        int hProcess,
        int lpBaseAddress,
        byte[] lpBuffer,
        int dwSize,
        ref int lpNumberOfBytesRead);

    static void Main(string[] args)
    {
        var process = Process.GetProcessesByName("game-loop")[0];
        var processHandle = OpenProcess(PROCESS_VM_READ, false, process.Id);

        var bytesRead = 0;
        var buffer = new byte[4];

        var gamePointerAddress = process.MainModule.BaseAddress + GAME_POINTER_OFFSET;

        ReadProcessMemory((int)processHandle, (int)gamePointerAddress, buffer, buffer.Length, ref bytesRead);
        var playerPointerAddress = BitConverter.ToInt32(buffer, 0);

        ReadProcessMemory((int)processHandle, playerPointerAddress, buffer, buffer.Length, ref bytesRead);
        var playerAddress = BitConverter.ToInt32(buffer, 0);

        ReadProcessMemory((int)processHandle, playerAddress + 4, buffer, buffer.Length, ref bytesRead);
        var playerHealth = BitConverter.ToInt32(buffer, 0);

        Console.WriteLine($"Player Health: {playerHealth}");
        Console.ReadLine();
    }
}

Console.WriteLine("WOrking aw hee");