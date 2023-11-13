#pragma once
#include "Character.h"

class Berserk: public Character
{
	int max_health = 100;
public:
	Berserk();
	using Character::Character;
	~Berserk();

	Berserk* set_health(int) override;
	int get_damage() override;
	int attack(Character&) override;
};

