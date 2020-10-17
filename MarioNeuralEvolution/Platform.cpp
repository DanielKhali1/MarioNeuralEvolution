#include "Platform.h"

Platform::Platform()
{
    isground = false;
}

Platform::Platform(sf::Vector2f size, sf::Vector2f position)
    : pos(position),
    size(size)
{
    isground = false;

}

bool Platform::checkCollision(sf::Vector2f* position, sf::Vector2f* size)
{
    return (this->pos.x < (*position).x + (*size).x &&
        this->pos.x + this->size.x >(*position).x &&
        this->pos.y < (*position).y + (*size).y &&
        this->pos.y + this->size.y >(*position).y);
}

void Platform::Draw(sf::RenderWindow* window)
{
    sf::RectangleShape tempguy(sf::Vector2f(size.x, size.y));
    tempguy.move(pos);
    (*window).draw(tempguy);
}

void Platform::setPosition(sf::Vector2f position)
{
    this->pos = sf::Vector2f(position.x, position.y);
}

void Platform::setSize(sf::Vector2f size)
{
    this->size = sf::Vector2f(size.x, size.y);
}

sf::Vector2f* Platform::getPosition()
{
    return &pos;
}

sf::Vector2f* Platform::getSize()
{
    return &size;
}
