#include "OpenProcess.h"

HANDLE OpenProcessByID(const DWORD id)
{
    return OpenProcess(PROCESS_ALL_ACCESS, FALSE, id);
}

    

// int main()
// {
//     const int PROCESS_VM_READ = 0x10;
//     int GAME_POINTER_OFFSET = 0x7030;
//     int PLAYER_HEALTH_OFFSET = 0x4;

//     __declspec(dllimport) int i;

//     [DllImport("kernel32.dll")] {

//     };

//     auto myDLL = LoadLibrary("mydll.dll");

// }