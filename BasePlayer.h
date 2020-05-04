#pragma once
class BasePlayer
{
protected:
	float life;

public:

	BasePlayer(float custom_life);
	~BasePlayer();
	//virtual void TakeDamage(float damage); //Metode virtual
	//float getLife();

	virtual void ApplyDamage(BasePlayer* ptr_player, float custom_damage);
	virtual void RecieveDamage(float custom_damage);
	float getLife();

};

