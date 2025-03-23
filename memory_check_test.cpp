#include <iostream>

class Player
{
public:
    int level, health;

public:
    Player(int lvl, int hlth)
    {
        level = lvl;
        health = hlth;
    }
};

class Game
{
public:
    Player *player;
};

int main()
{
    // Game pGame(Player player(4, 69));
    Player player(5, 6);
    int *pointerToHealth = &player.health;
    int *pointerToLevel = &player.level;

    std::cout << "Here's pointer to health: " << pointerToHealth << '\n';
    std::cout << "And here's pointer to leve: " << pointerToLevel << '\n';

    // Game game(Player *player);

    // std::cout << "Here's what game is: " << game << '\n';

    // Game game(Player *player);

    // std::cout << "\n Here's new player with his level and health: " << player.level << ", " << player.health << '\n';
    
    // std::cout << "\n Here's an instance of Game with params: " << game << '\n';
}