#ifndef __VALORANT_WEAPONS__
#define __VALORANT_WEAPONS__

#include <iostream>

class Weapon
{
protected:
	int damage;
public:
	virtual void build() = 0; 
	int getDamage();
};

class SentinelPrimaryWeapon : public Weapon
{
public:
	SentinelPrimaryWeapon() {this->damage = 9; }	
	void build() 
	{
	std::cout << "Vandal: " << this->damage << "\n"; 
	}
	int getDamage()
	{
	return this->damage;
	}
};
class SentinelSecondaryWeapon : public Weapon
{
public:
	SentinelSecondaryWeapon() {this->damage = 5;}
	void build() 
	{
	std::cout << "Sheriff: " << this->damage << "\n"; 
	}
	int getDamage() { return this->damage; }
};

class DuelistPrimaryWeapon : public Weapon
{
public:
	DuelistPrimaryWeapon() { this->damage = 7; }
	void build() 
	{
	std::cout << "Phantom: " << this->damage << "\n"; 
	}
	int getDamage() { return this->damage; }
};
class DuelistSecondaryWeapon : public Weapon
{
public:
	DuelistSecondaryWeapon() { this->damage = 4; }
	void build() 
	{ 
	this->damage = 4;
	std::cout << "Ghost: " << this->damage << "\n"; 
	}
	int getDamage() { return this->damage; }
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

class Client
{
private:
	Factory *factory;

public:
	Client(Factory *f) { this->factory = f; }

	void build()
	{
		Weapon *w = factory->create_primary();
		//w->build();
		display_agentType_one();
		//display_agentType_two();
	}

	void display_agentType_one()
	{
		Weapon *w[] = {
			factory->create_primary(),
			factory->create_secondary()};
		w[0]->build();
		w[1]->build();
	}
	
	/*void display_agentType_two()
	{
		Weapon *w[] = {
			factory->create_primary(),
			factory->create_secondary()};
		w[0]->build();
		w[1]->build();
	}
	*/
};

#endif
