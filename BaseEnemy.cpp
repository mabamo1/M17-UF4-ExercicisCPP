#include "BaseEnemy.h"

BaseEnemy::BaseEnemy() {
	life = 100.0f;
	attack = 10;
}

BaseEnemy::BaseEnemy(float custom_life, float custom_attack) {
	life = custom_life;
	attack = custom_attack;
}
BaseEnemy::~BaseEnemy() {

}

void BaseEnemy::TakeDamage(float damage) {
	life -= damage;
}

float BaseEnemy::getLife() {
	return life;
}