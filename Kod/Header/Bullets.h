#pragma once
#include <SFML/Graphics.hpp>

class Bullets
{
	private:

		sf::RectangleShape bulletShape;
		sf::Vector2f mPosition;
		sf::Vector2f mResolution;
		bool inFlight = false;
		int bulletSpeed = 100;

	public:

		Bullets();

		sf::FloatRect getPosition();
		sf::RectangleShape getShape();
		sf::Vector2f getResolution();
		void update(float elapsedTime);
		void shoot(int resolution);
};