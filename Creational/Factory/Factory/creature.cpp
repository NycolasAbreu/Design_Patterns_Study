#include "creature.h"

#include <iostream>

int Creature::Health()
{
	return health;
}

int Creature::Speed()
{
	return speed;
}

int Creature::Attack()
{
	return attack;
}

//------------------------------------------------------------------------

Goblin::Goblin()
{
	health = 5;
	speed = 5;
	attack = 2;
}

void Goblin::Walk()
{
	std::cout << "Goblin Is Walking\n";
}

//------------------------------------------------------------------------

Dragon::Dragon()
{
	health = 20;
	speed = 10;
	attack = 15;
}

void Dragon::Fly()
{
	std::cout << "Dragon Is Flying\n";
}
