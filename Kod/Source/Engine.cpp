#include "Engine.h"

Engine::Engine()
{
	Vector2f resolution;

	resolution.x = VideoMode::getDesktopMode().width;
	resolution.y = VideoMode::getDesktopMode().height;

	window.create(VideoMode(resolution.x, resolution.y), "Game", Style::Fullscreen);
	mainView.reset(FloatRect(0, 0, resolution.x, resolution.y));

	backgroundTexture.loadFromFile("textures/background.png");
	pausedTexture.loadFromFile("textures/paused.png");

	backgroundSprite.setTexture(backgroundTexture);
	backgroundSprite.setScale(resolution);

	pausedSprite.setTexture(pausedTexture);
	pausedSprite.setScale(resolution);
}

void Engine::run()
{
	Clock clock;
	float dtAsSeconds;
	
	while (window.isOpen())
	{
		Time dt = clock.restart();

		dtAsSeconds = dt.asSeconds();

		input();
		update(dtAsSeconds);
		draw();
	}
}