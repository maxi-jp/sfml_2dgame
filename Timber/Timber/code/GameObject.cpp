
#include "stdafx.h"
#include "GameObject.h"

GameObject::GameObject(Vector2f position, const char* texturePath)
:
    position    (position),
    texturePath (texturePath)
{
    texture.loadFromFile(texturePath);
    sprite.setTexture(texture);
    sprite.setPosition(0.f, 0.f);
}

GameObject::GameObject(Vector2f position, Texture texture)
:
    position (position),
    texture  (texture)
{
    sprite.setTexture(this->texture);
    sprite.setPosition(0.f, 0.f);
}

void GameObject::Update(float deltaTime)
{
    sprite.setPosition(position);
}

void GameObject::Draw(RenderWindow &window)
{
    window.draw(sprite);
}
