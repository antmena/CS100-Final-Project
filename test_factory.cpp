#include <iostream>
#include "valorant_weapons.hpp"

using namespace std;

int main()
{
	Factory *SentinelFactory;
	Factory *DuelistFactory;
//#ifdef SENTINEL
	SentinelFactory = new SentinelWeaponFactory;
//#else //Duelist
	DuelistFactory = new DuelistWeaponFactory;
//#endif

	Client *s = new Client(SentinelFactory);
	s->build();

	Client *d = new Client(DuelistFactory);
	d->build();
}
