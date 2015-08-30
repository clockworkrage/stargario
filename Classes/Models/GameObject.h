#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include "cocos2d.h"

using namespace cocos2d;

class GameObject
{
public:
    GameObject();

	Vec2 getPosition() { return position; }
	void setPosition(Vec2 pos) { position.set(pos); }

	Vec2 getVelocity() { return velocity; }
	void setVelocity(Vec2 vel) { velocity.set(vel); }

	Vec2 getAcceleration() { return acceleration; }
	void setAcceleration(Vec2 acc) { acceleration.set(acc); }

	Vec2 getViewField() { return view_field; }
	void setViewField(Vec2 vf) { view_field.set(vf); }

	float getRadius() { return radius; }
	void setRadius(float r) { radius = r; }

	float getMass() { return mass; }
	void setMass(float m) { mass = m; }

	void friction(float friction_factor) { acceleration.scale(friction_factor); }

	virtual void update(float delta) = 0;

protected:
    Vec2 position;
    Vec2 velocity;
    Vec2 acceleration;
    Vec2 view_field;

    float radius;
    float mass;
};

#endif // GAMEOBJECT_H
