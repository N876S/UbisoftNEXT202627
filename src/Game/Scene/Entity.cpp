#include "Scene/Entity.h"

Entity::Entity(char* filePath, int rows, int cols) {
	this->animRows = rows;
	this->animCols = cols;
	this->filePath = filePath;
	sprite = App::CreateSprite(filePath, cols, rows);
	CreateAnimations();
	sprite->SetPosition(x, y);
	sprite->SetScale(scale);
	sprite->SetAngle(rotation);
}

void Entity::update(float dt) {
	if (gravity == true) {
		updateGravity();
	}
	sprite->Update(dt);
	sprite->SetAnimation(animActive);
}

void Entity::draw() {
	sprite->Draw();
}

void Entity::CreateAnimations() {
	for (unsigned int i = 0; i < animRows; i++) {
		std::vector<int> frames;
		for (int j = 0; j < animCols; j++) {
			frames.push_back(i * animCols + j);
		}
		sprite->CreateAnimation(i, animSpeed, frames);
	}
}

void Entity::setPosition(float x, float y) {
	this->x = x;
	this->y = y;
	sprite->SetPosition(this->x, this->y);
}

void Entity::setScale(float s) {
	this->scale = s;
	sprite->SetScale(scale);
}

void Entity::setRotation(float a) {
	this->rotation = a;
	sprite->SetAngle(rotation);
}

void Entity::setAnimation(int id) {
	sprite->SetAnimation(id);
	if (id != -1) {
		animActive = id;
	}
}

void Entity::setFirstFrame() {
	sprite->SetFrame(animCols * animActive);
}

void Entity::updatePosition(float x, float y) {
	this->x += x;
	this->y += y;
	sprite->SetPosition(this->x, this->y);
}

float Entity::getX() {
	return x;
}

float Entity::getY() {
	return y;
}

float Entity::getScale() {
	return scale;
}

float Entity::getRotation() {
	return rotation;
}

float Entity::getSpeed() {
	return speed;
}

void Entity::freeEntity() {
	delete sprite;
	sprite = NULL;
}

void Entity::updateGravity() {
	updatePosition(0.0f, yV);
	yV += gravityStrength;
}