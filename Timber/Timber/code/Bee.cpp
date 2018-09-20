
#include "stdafx.h"
#include "Bee.h"

Bee::Bee(Vector2f position, const char* texturePath)
:
    GameObject (position, texturePath)
{
    
}

void Bee::Update(float deltaTime)
{
    GameObject::Update(deltaTime);

}
