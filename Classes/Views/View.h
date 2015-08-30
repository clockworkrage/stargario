#pragma once

#include "cocos2d.h"

using namespace cocos2d;

class View
{
public:
    View();

    void SetPosition(Vec2 pos) { sprite->setPosition(pos); }

    void SetPositionX(float)
    {
        auto position = sprite->getPosition();
        position.x = x;
        sprite->setPosition(position);
    }
    void SetPositionY(float)
    {
        auto position = sprite->getPosition();
        position.y = y;
        sprite->setPosition(position);

    }

    Vec2 GetPosition() { return sprite->getPosition(); }

    Rect GetBound() { return sprite->getBoundingBox(); }

    virtual ~View();

protected:
    Node * sprite = nullptr;
};

