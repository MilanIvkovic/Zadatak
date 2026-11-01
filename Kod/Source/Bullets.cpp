#include "Bullets.h"

Bullets::Bullets()
{
	bulletShape.setSize(sf::Vector2f(2, 2));

	sf::Vector2f resolution;
	resolution.x = sf::VideoMode::getDesktopMode().width;
	resolution.y = sf::VideoMode::getDesktopMode().height;

	mResolution = resolution;
}

sf::FloatRect Bullets::getPosition()
{
	return bulletShape.getGlobalBounds();
}

sf::RectangleShape Bullets::getShape()
{
	return bulletShape;
}

sf::Vector2f Bullets::getResolution()
{
	return mResolution;
}

void Bullets::shoot(int resolution)
{
	srand(time(NULL));

	int xRange = rand() % resolution;
	int yRange = (rand() % 100);

	mPosition.x = xRange;
	mPosition.y = yRange;

	bulletShape.setPosition(mPosition);
}

void Bullets::update(float elapsedTime)
{
	
}