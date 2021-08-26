#include <iostream>

#define __VALORANT_WEAPONS__
#ifndef __VALORANT_WEAPONS__

class Weapon
{
public:
	virtual void build() = 0;
};

class Factory
{
public:
	virtual Weapon *create_primary() = 0;
	virtual Weapon *create_secondary() = 0;
};

class SentinelWeaponFactory : public Factory
{
public:
	Weapon *create_primary() { return new SentinelPrimaryWeapon; }
	Weapon *create_secondary() { return new SentinelSecondaryWeapon; }
};

class DuelistWeaponFactory : public Factory
{
public:
	Weapon *create_primary() { return new DuelistPrimaryWeapon; }
	Weapon *create_secondary() { return new DuelistSecondaryWeapon; }
};

class SentinelPrimaryWeapon : public Weapon
{
public:
	void build() { std::cout << "Vandal\n"; }
};
class SentinelSecondaryWeapon : public Weapon
{
public:
	void build() { std::cout << "Sheriff\n"; }
};

class DuelistPrimaryWeapon : public Weapon
{
public:
	void build() { std::cout << "Phantom\n"; }
};
class DuelistSecondaryWeapon : public Weapon
{
public:
	void build() { std::out << "Phantom\n"; }
};

class Client
{
private:
	Factory *factory;

public:
	Client(Factory *f) { this->factory = f; }

	void build()
	{
		Weapon *w = factory->create_primary();
		w->build();
		display_agentType_one();
		display_agentType_two();
	}

	void display_agentType_one()
	{
		Weapon *w[] = {
			factory->create_primary(),
			factory->create_secondary()};
		w[0]->build();
		w[1]->build();
	}

	void display_agentType_one()
	{
		Weapon *w[] = {
			factory->create_primary(),
			factory->create_secondary()};
		w[0]->build();
		w[1]->build();
	}
};

#endif
