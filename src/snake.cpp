#include "snake.h"

std::vector<sf::Vector2f> snake::getSnake() const
{
    return _snake;
}

void snake::updateSnake()
{
    for (auto &element : _snake)
    {
        element.x += _velocity.first;
        element.y += _velocity.second;
    }
}