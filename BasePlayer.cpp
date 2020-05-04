#include "BasePlayer.h"

BasePlayer::BasePlayer(float custom_life) {
	life = custom_life;
}
BasePlayer::~BasePlayer() {

}

void BasePlayer::ApplyDamage(BasePlayer* ptr_player ,float custom_damage) {
	ptr_player->RecieveDamage(custom_damage);
}

void BasePlayer::RecieveDamage(float custom_damage) {
	life = life - custom_damage;
}

float BasePlayer::getLife() {
	return life;
}

/*
void BaseEnemy::TakeDamage(float damage) {
	life -= damage;
}

float BaseEnemy::getLife() {
	return life;
}
*/