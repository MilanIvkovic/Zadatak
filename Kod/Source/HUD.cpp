#include "HUD.h"

Hud::Hud()
{
	sf::Vector2f resolution;
	resolution.x = sf::VideoMode::getDesktopMode().width;
	resolution.y = sf::VideoMode::getDesktopMode().height;

	Font.loadFromFile("fonts/mFont.ttf");

	menuText.setFont(Font);
	menuText.setCharacterSize(75);
	menuText.setColor(sf::Color::Black);
	menuText.setString("Press Enter to Start");

	sf::FloatRect textRect = menuText.getLocalBounds();

	menuText.setOrigin(textRect.left + textRect.width / 2.0f, textRect.top + textRect.height / 2.0f);
	menuText.setPosition(resolution.x / 2.0f, resolution.y / 2.0f);

	pauseText.setFont(Font);
	pauseText.setCharacterSize(75);
	pauseText.setColor(sf::Color::Black);
	pauseText.setString("Press Tab To Unpause");

	textRect = pauseText.getLocalBounds();

	pauseText.setOrigin(textRect.left + textRect.width / 2.0f, textRect.top + textRect.height / 2.0f);
	pauseText.setPosition(resolution.x / 2.0f, resolution.y / 2.5f);

	scoreText.setFont(Font);
	scoreText.setCharacterSize(50);
	scoreText.setColor(sf::Color::Black);
	scoreText.setString("Score: 0");

	textRect = scoreText.getLocalBounds();

	scoreText.setOrigin(textRect.left + textRect.width / 2.0f, textRect.top + textRect.height / 2.0f);
	scoreText.setPosition(resolution.x / 2.0f, resolution.y / 1.7f);

	timerText.setFont(Font);
	timerText.setCharacterSize(30);
	timerText.setColor(sf::Color::Black);
	timerText.setString("-----");

	textRect = timerText.getLocalBounds();

	timerText.setOrigin(textRect.left + textRect.width / 2.0f, textRect.top + textRect.height / 2.0f);
	timerText.setPosition(resolution.x - 50, resolution.y - 1050);
}

sf::Text Hud::getMenuText()
{
	return menuText;
}

sf::Text Hud::getPauseText()
{
	return pauseText;
}

sf::Text Hud::getScoreText()
{
	return scoreText;
}

sf::Text Hud::getTimerText()
{
	return timerText;
}