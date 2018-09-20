#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "GameObject.h"

using namespace sf;

class BgLayer
{

private:
    Vector2f position;
    std::vector<GameObject> objects;

    // optional Texture, if set all the objects in the layer share the same texture
    Texture texture;

public:
    BgLayer(Vector2f position);
    BgLayer(Vector2f position, std::vector<GameObject> objects);
    BgLayer(Vector2f position, std::vector<GameObject> objects, Texture &texture);

    void Update(float deltaTime);

    void Draw(RenderWindow &window);

    inline void AddObject(GameObject &object)
    {
        objects.push_back(object);
    }

};
