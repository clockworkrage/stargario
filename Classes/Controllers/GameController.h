#include "cocos2d.h"

using namespace cocos2d;

class GameController
{
public:
    GameController();

    void update(float delta);

    void updateGame(float delta);

    void updateUserInput(float delta);

    void checkCollisions(float delta);

    void updatePhysics(float delta);

    void setButtons(Vec2 dir, bool eat, bool start)
    {
        eatButton = eat;
        startButton = start;
        direction.set(dir);
    }

protected:
    Layer * scene;
    Layer * background;

    bool eatButton;
    bool startButton;
    Vec2 direction;

    bool pause = false;
};
