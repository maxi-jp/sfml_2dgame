#pragma once

#include <SFML/Graphics.hpp>

using namespace sf;

class GameObject
{

protected:
    const char* texturePath;
    Texture texture;
    Sprite sprite;
    Vector2f position;

    bool isActive = true;

public:
    GameObject(Vector2f position = {0.f, 0.f}, const char* texturePath = "");
    GameObject(Vector2f position, Texture texture);

    virtual void Update(float deltaTime);
    void Draw(RenderWindow &window);

    bool IsActive() { return isActive; }
    void SetActive(bool active = true) { this->isActive = active; }

};
