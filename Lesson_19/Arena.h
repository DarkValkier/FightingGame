#pragma once
#include "Character.h"
#include <iostream>
#include <algorithm>

using namespace std;

class Arena
{
	Character* characters = nullptr;
	unsigned int characters_count = 0;

public:
	Arena();
	Arena(Arena&);
	~Arena();

	void print_characters();
	void add_character(const Character&);
	void fight();
	unsigned int characters_alive();
	void sort_by_speed();
};

