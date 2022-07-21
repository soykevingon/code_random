#pragma once
#include "User.h"
class Player :
	public user
{
public:
	Player();
	~Player();
	int getHealth();
	int getDistance();
	int Player_Skills();
	void setHealth(int healthX);
	void setDistance(int DistanceX);
	void Player_Skills(int skillX);
};

