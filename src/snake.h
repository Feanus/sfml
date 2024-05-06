#include <SFML/Graphics.hpp>
#include <vector>

using Snake = std::vector<sf::Vector2f>;
class snake
{
public:
    snake()
    {
        _snake.push_back(sf::Vector2f(750.f, 600.f));
        _length = 1;
        _velocity = {1.f, 1.f};
    }
    std::vector<sf::Vector2f> getSnake() const;
    void updateSnake();

private:
    Snake _snake;
    int _length;
    std::pair<float, float> _velocity;
};
