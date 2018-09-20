#pragma once

#include <SFML/Graphics.hpp>
#include "GameObject.h"

using namespace sf;

class Bee : public GameObject
{

private:
    float speed = 0.f;

public:
    Bee(Vector2f position, const char* texturePath);

    void Update(float deltaTime);

};
