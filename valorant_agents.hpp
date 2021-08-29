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
	~Raze(){ std::cout << "Destroying Raze" << std::endl ;}

	void keyPress()
	{
		std::cout << "5 damage" << std::endl;
	}
};

class Sage : public EBehavior
{
public:
	~Sage() {std::cout << "Destroying Sage" << std::endl;}

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

	//~Agent() { std::cout << "Destroyed Agent" << std::endl; delete strategy; }

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
	EBehavior *strategy = nullptr;
	int health;
};

#endif
