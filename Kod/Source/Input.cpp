#include "Engine.h"

void Engine::input()
{
	Event event;

	while (window.pollEvent(event))
	{
		if (event.type == Event::KeyPressed)
		{
			if (Keyboard::isKeyPressed(Keyboard::Escape))
			{
				window.close();
			}

			if (Keyboard::isKeyPressed(Keyboard::Return) && state == State::MENU)
			{
					state = State::PLAYING;
			}

			if(Keyboard::isKeyPressed(Keyboard::Tab))
			{
				if (state == State::PLAYING)
				{
					state = State::PAUSED;
				}

				else if (state == State::PAUSED)
				{
					state = State::PLAYING;
				}
			}
		}
	}
}