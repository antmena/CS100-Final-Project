#include <iostream>
#include "valorant_weapons.hpp"

//using namespace std;

int main()
{
	Factory *factory;
#ifdef SENTINEL
	factory = new SentinelWeaponFactory;
#else //Duelist
	factory = new DuelistWeaponFactory;
#endif

	Client *c = new Client(factory);
	c->build();
}
