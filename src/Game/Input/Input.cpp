#include "Input/Input.h"

void InputManager::controller(Entity& e, App::Key up, App::Key down, App::Key left, App::Key right) {
	float speed = e.getSpeed();
	bool moved = false;
	if (App::IsKeyPressed(App::KEY_W)) {
		e.updatePosition(0.0f, speed);
		e.setAnimation(3);
		moved = true;
	}
	if (App::IsKeyPressed(App::KEY_S)) {
		e.updatePosition(0.0f, -speed);
		e.setAnimation(0);
		moved = true;
	}
	if (App::IsKeyPressed(App::KEY_A)) {
		e.updatePosition(-speed, 0.0f);
		e.setAnimation(1);
		moved = true;
	}
	if (App::IsKeyPressed(App::KEY_D)) {
		e.updatePosition(speed, 0.0f);
		e.setAnimation(2);
		moved = true;
	}
	if (moved == false) {
		e.setFirstFrame();
		e.setAnimation(-1);
	}
}