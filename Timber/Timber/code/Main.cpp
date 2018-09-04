// HelloSFML.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <SFML/Graphics.hpp>

using namespace sf;

//static size_t window_width = 1280;
//static size_t window_height = 720;
static size_t window_width = 1920;
static size_t window_height = 1080;

int main()
{
    VideoMode vm(window_width, window_height);
    RenderWindow window(vm, "Title", sf::Style::Titlebar | sf::Style::Close);

    Texture bgTexture;
    bgTexture.loadFromFile("graphics/background.png");
    Sprite bgSprite;
    bgSprite.setTexture(bgTexture);
    bgSprite.setPosition(0.f, 0.f);

    while (window.isOpen())
    {
        // Players input
        if (Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }

        // Update


        // Draw
        window.clear();

        window.draw(bgSprite);

        window.display();
    }

    return 0;
}

