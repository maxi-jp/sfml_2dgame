#pragma once

#include <SFML/Graphics.hpp>

using namespace sf;

class Background
{

private:
    Texture bgTexture;
    Sprite bgSprite;

public:
    Background(const char* texturePath);

    void Update(float deltaTime);
    void Draw(RenderWindow &window);

};
