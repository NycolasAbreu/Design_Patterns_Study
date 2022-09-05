#include "factory.h"
#include "creature.h"

Creature* GoblinFactory::Spawn()
{
	return new Goblin();
}

//------------------------------------------------------------------------

Creature* DragonFactory::Spawn()
{
	return new Dragon();
}
