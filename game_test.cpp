#include <iostream>

struct Player
{
    int level;
    int health;
};

struct Game
{
    Player *player;
};

Game *pGame;

int main()
{
    pGame = new Game;
    pGame->player = new Player;
    pGame->player->level = 1;
    pGame->player->health = 100;

    int *pointerToLevel = &pGame->player->level;
    int *pointerToHealth = &pGame->player->health;

    std::cout << "\n here's a pointer to level: " << pointerToLevel << '\n';
    std::cout << "\n here's a pointer to health: " << pointerToHealth << '\n';
}