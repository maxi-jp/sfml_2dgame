// HelloSFML.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <SFML/Graphics.hpp>

#include "Background.h"
#include "BgLayer.h"
#include "GameObject.h"
#include "Bee.h"

using namespace sf;

//static size_t window_width = 1280;
//static size_t window_height = 720;
static size_t window_width = 1920;
static size_t window_height = 1080;

int main()
{
    // Initialize random generator
    srand((int)time(0));

    // Prepare the window
    VideoMode vm(window_width, window_height);
    RenderWindow window(vm, "Title", sf::Style::Titlebar | sf::Style::Close);

    // Game clock
    Clock clock;

    // Background
    Background background("graphics/background.png");

    // Clouds
    Texture textureCloud;
    textureCloud.loadFromFile("graphics/cloud.png");
    GameObject cloud1({ 0.f,   0.f }, textureCloud);
    GameObject cloud2({ 0.f, 250.f }, textureCloud);
    GameObject cloud3({ 0.f, 500.f }, textureCloud);
    BgLayer bgLayer({ 0.f, 0.f });
    bgLayer.AddObject(cloud1);
    bgLayer.AddObject(cloud2);
    bgLayer.AddObject(cloud3);

    // a tree
    GameObject tree({ 810.f, 0.f }, "graphics/tree.png");

    // a bee
    Bee bee({ 0.f, 800.f }, "graphics/bee.png");
    bee.SetActive(false);

    while (window.isOpen())
    {
        // Players input
        if (Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }

        // Update
        float deltaTime = 0.f;
        background.Update(deltaTime);
        bgLayer.Update(deltaTime);
        tree.Update(deltaTime);
        bee.Update(deltaTime);

        // Draw
        window.clear();

        background.Draw(window);
        bgLayer.Draw(window);
        tree.Draw(window);
        bee.Draw(window);

        window.display();
    }

    return 0;
}

