/*
* ENTITY CLASS CAN DRAW AND UPDATE PLAYERS, ENEMIES, ETC
*/

#pragma once

class Entity {
private:
	float x;
	float y;

public:
	Entity();
	void update();
	void draw();
};