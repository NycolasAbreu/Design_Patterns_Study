#ifndef CREATURE_H
#define CREATURE_H

class Creature
{
	public:
		virtual ~Creature() {};

		int Health();
		int Speed();
		int Attack();

	protected:
		int health = 0;
		int speed = 0;
		int attack = 0;
};

//------------------------------------------------------------------------

class Goblin : public Creature
{
	public:
		Goblin();
		~Goblin() {};

		void Walk();
};

//------------------------------------------------------------------------

class Dragon : public Creature
{
	public:
		Dragon();
		~Dragon() {};

		void Fly();
};

#endif