// HelloSFML.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <SFML/Graphics.hpp>

using namespace sf;

static size_t window_width = 1280;
static size_t window_height = 720;

int main()
{
    VideoMode vm(window_width, window_height);
    sf::Window window(vm, "Title", sf::Style::Titlebar | sf::Style::Close);

    return 0;
}

