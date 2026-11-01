#pragma once
#include <SFML/Graphics.hpp>

class Hud
{
	private:

		sf::Text menuText;
		sf::Text pauseText;
		sf::Text scoreText;
		sf::Text timerText;

		sf::Font Font;

	public:

		Hud();

		sf::Text getTimerText();
		sf::Text getMenuText();
		sf::Text getPauseText();
		sf::Text getScoreText();

		void setTimer(sf::String text);
};