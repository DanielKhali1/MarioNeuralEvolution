#include "Platform.h"

Platform::Platform(sf::Vector2f size, sf::Vector2f position)
    : pos(position),
    size(size)
{

}

bool Platform::checkCollision(sf::Vector2f* position, sf::Vector2f* size)
{
    //TODO: AABB
    return false;
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
