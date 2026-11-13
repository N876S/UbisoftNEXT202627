/*
* ENTITY CLASS CAN DRAW AND UPDATE PLAYERS, ENEMIES, ETC
*/

#pragma once
#include <app.h>

class Entity {
private:
	CSimpleSprite* sprite;

	char* filePath;
	int animRows;
	int animCols;
	const float animSpeed = 1.0f / 15.0f;
	int animActive = 0;

	bool gravity = false;
	float gravityStrength = 0.1f;
	float yV = 0.0f;

	float x = 0.0f;
	float y = 0.0f;
	float rotation = 0.0f;
	float scale = 1.0f;
	float speed = 3.0f;

public:
	Entity(char* filePath, int rows, int cols);
	
	void CreateAnimations();

	void update(float dt);
	void draw();

	void setPosition(float x, float y);
	void setScale(float s);
	void setRotation(float a);
	void setAnimation(int id);
	void setFirstFrame();

	void updatePosition(float x, float y);
	void updateGravity();

	float getX();
	float getY();
	float getScale();
	float getRotation();
	float getSpeed();

	void freeEntity();
};