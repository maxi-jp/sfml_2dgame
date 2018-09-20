
#include "stdafx.h"
#include "BgLayer.h"


BgLayer::BgLayer(Vector2f position)
:
    position (position)
{

}

BgLayer::BgLayer(Vector2f position, std::vector<GameObject> objects)
:
    position (position),
    objects  (objects)
{
    
}


BgLayer::BgLayer(Vector2f position, std::vector<GameObject> objects, Texture &texture)
:
    BgLayer(position, objects)
{
    this->texture = texture;
}

void BgLayer::Update(float deltaTime)
{
    for (auto it = objects.begin(); it < objects.end(); ++it)
    {
        (*it).Update(deltaTime);
    }
}

void BgLayer::Draw(RenderWindow &window)
{
    for (auto it = objects.begin(); it < objects.end(); ++it)
    {
        (*it).Draw(window);
    }
}
