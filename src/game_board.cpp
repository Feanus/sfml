#include "game_board.h"

void Gameboard::game_start()
{
    auto board = sf::RenderWindow(sf::VideoMode(1500, 1200), "gameboard");
    snake snakeObject;

    while (board.isOpen())
    {
        // Gameboard::detect_events(board);
        sf::Event event;
        while (board.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                board.close();
        }

        sf::sleep(sf::milliseconds(10));

        snakeObject.updateSnake();
        board.clear();
        Gameboard::displaySnake(board, snakeObject);
        // Gameboard::displayFood();
        board.display();
    }
}

void Gameboard::displaySnake(sf::RenderWindow &board, snake const &snakeObject)
{
    auto all_position = snakeObject.getSnake();
    for (auto const &element : all_position)
    {
        sf::RectangleShape single(sf::Vector2f(30.f, 30.f));
        single.setPosition(element.x, element.y);
        board.draw(single);
    }
}