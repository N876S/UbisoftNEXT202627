/*
* DEALS WITH INPUT
*/

#pragma once
#include <app.h>
#include <Scene/Entity.h>

class InputManager {
public:
	static void controller(Entity& e, App::Key up, App::Key down, App::Key left, App::Key right);
};