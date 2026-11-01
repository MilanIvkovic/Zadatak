#include "Engine.h"

void Engine::draw()
{
	window.clear(sf::Color::White);
	window.setView(mainView);

	if (state == State::MENU)
	{
		window.draw(backgroundSprite);
		window.draw(HUD.getMenuText());
		window.draw(HUD.getScoreText());
	}

	if (state == State::PAUSED)
	{
		window.draw(pausedSprite);
		window.draw(HUD.getPauseText());
		window.draw(HUD.getScoreText());
	}

	if (state == State::PLAYING)
	{
		window.draw(HUD.getTimerText());
		// Crtanje nivoa, lika i mehanike
	}

	window.display();
}