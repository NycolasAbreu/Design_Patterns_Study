#ifndef FACTORY_H
#define FACTORY_H

class Creature;

class IFactory
{
public:
	IFactory() {};
	virtual ~IFactory() {};

	virtual Creature* Spawn() = 0;
};

//------------------------------------------------------------------------

class GoblinFactory : public IFactory
{
	public:
		GoblinFactory() {};
		Creature* Spawn();
};

//------------------------------------------------------------------------

class DragonFactory : public IFactory
{
	public:
		DragonFactory() {};
		Creature* Spawn();
};

#endif // 