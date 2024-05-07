#include <SFML/Graphics.hpp>
#include "snake.h"

namespace Gameboard
{
    void game_start();
    // void game_end(){};
    // void detect_events(sf::RenderWindow const &board){};
    void displaySnake(sf::RenderWindow &board, snake const &snakeObject);
    // void displayFood(){};
} // namespace Gameboard
