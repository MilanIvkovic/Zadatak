#pragma once
#include <SFML/Graphics.hpp>
#include "HUD.h"
#include "State.h"
#include "Bullets.h"

using namespace sf;

class Engine
{
	private:

		RenderWindow window;
		View mainView;
		Hud HUD;
		Bullets bullets[100];

		State state = State::MENU;

		Texture backgroundTexture;
		Texture pausedTexture;

		Sprite backgroundSprite;
		Sprite pausedSprite;

		void input();
		void draw();
		void update(float elapsedTime);

	public:

		Engine();
		void run();
};