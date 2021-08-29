#ifndef __VALORANT_AGENTS__
#define __VALORANT_AGENTS__

#include <iostream>

class EBehavior //Strategy
{
public:
	virtual ~EBehavior() {}
	virtual void keyPress() = 0;
};

class Raze : public EBehavior //Concrete Strategy
{
public:
	~Raze() {}

	void keyPress()
	{
		std::cout << "5 damage" << std::endl;
	}
};

class Sage : public EBehavior
{
public:
	~Sage() {}

	void keyPress()
	{
		std::cout << "2 damage" << std::endl;
	}
};

class Agent
{
public:
	Agent(EBehavior *const s)
	{
		this->strategy = s;
		this->health = 100;
	}

	~Agent() { delete strategy; }

	void EAbility()
	{
		strategy->keyPress();
	}

	int hp()
	{
		return health;
	}

	int hp(int damage)
	{
		health = health - damage;
		return health;
	}

private:
	EBehavior *strategy;
	int health;
};

#endif
