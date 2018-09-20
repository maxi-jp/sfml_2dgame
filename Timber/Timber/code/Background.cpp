
#include "stdafx.h"
#include "Background.h"

Background::Background(const char* texturePath)
{
    bgTexture.loadFromFile(texturePath);
    bgSprite.setTexture(bgTexture);
    bgSprite.setPosition(0.f, 0.f);
}

void Background::Update(float deltaTime)
{

}

void Background::Draw(RenderWindow &window)
{
    window.draw(bgSprite);
}
