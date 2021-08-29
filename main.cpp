#include <iostream>
#include <stdlib.h>
#include "valorant_agents.hpp"
#include "valorant_weapons.hpp"

using namespace std;

int main()
{
	std::string choice = "";
	
	Raze* razePtr = new Raze();

	Raze *razePtr = new Raze();
	Agent enemyRaze = Agent(razePtr);
  Agent *Raze_AI = &enemyRaze;
  
	Agent *UserAgent;

	while (choice != "Raze" && choice != "Sage")
	{
		std::cout << "Please choose your agent. Enter: Raze or Sage" << std::endl;
		std::cin >> choice;
	}

	if (choice == "Raze")
	{

		Raze *userRaze = new Raze();
		Agent agentTemp = Agent(userRaze);
		UserAgent = &agentTemp;

		std::cout << "Yes, I'm pumped!" << std::endl;
	}
	else if (choice == "Sage")
	{

		Sage *userSage = new Sage();
		Agent agentTemp = Agent(userSage);
		UserAgent = &agentTemp;

		std::cout << "I am both shield and sword" << std::endl;
	}

	int roundNumber = 1;
	string agentName = choice;

	Factory *DuelistFactory = new DuelistWeaponFactory;	  //Creating Duelist Weapons
	Factory *SentinelFactory = new SentinelWeaponFactory; //Creating Sentinel Weapons

	DuelistPrimaryWeapon phantom;
	DuelistSecondaryWeapon ghost;
	SentinelPrimaryWeapon vandal;
	SentinelSecondaryWeapon sheriff;

	while (Raze_AI->hp() > 0 && UserAgent->hp() > 0)
	{
		std::cout << "Round " << roundNumber << " has now begun!" << std::endl;

		int enemyDamage = 0;
		int razeActionDamages[3] = {4, 5, 7};
		int actionIndex = rand() % 3;
		enemyDamage = razeActionDamages[actionIndex];

		cout << "Enemy Raze HP: " << Raze_AI->hp() << endl;
		cout << "Your HP: " << UserAgent->hp() << endl;

		if (agentName == "Raze")
		{
			cout << "Press P - Use primary, deals " << phantom.getDamage() << " damage." << endl;
			cout << "Press S - Use secondary, deals " << ghost.getDamage() << " damage." << endl;
			cout << "Press A - Use ability, deals 5 damage." << endl;
			cin >> choice;

			if (choice == "p" || choice == "P")
			{
				Raze_AI->hp(phantom.getDamage());
				cout << "Dealt " << phantom.getDamage() << " damage." << endl;
			}
			if (choice == "s" || choice == "S")
			{
				Raze_AI->hp(ghost.getDamage());
				cout << "Dealt " << ghost.getDamage() << " damage." << endl;
			}
			if (choice == "a" || choice == "A")
			{
				Raze_AI->hp(5);
				cout << "Dealt 5 damage." << endl;
			}
			UserAgent->hp(enemyDamage);
			cout << "Enemy dealt " << enemyDamage << " damage to you." << endl;
		}
		if (agentName == "Sage")
		{
			cout << "Press P - Use primary, deals " << vandal.getDamage() << " damage." << endl;
			cout << "Press S - Use secondary, deals " << sheriff.getDamage() << " damage." << endl;
			cout << "Press A - Use ability, blocks 2 damage." << endl;
			cin >> choice;

			if (choice == "p" || choice == "P")
			{
				Raze_AI->hp(vandal.getDamage());
				cout << "Dealt " << vandal.getDamage() << " damage." << endl;
			}
			else if (choice == "s" || choice == "S")
			{
				Raze_AI->hp(sheriff.getDamage());
				cout << "Dealt " << sheriff.getDamage() << " damage." << endl;
			}
			else if (choice == "a" || choice == "A")
			{
				enemyDamage = enemyDamage - 2;
				cout << "Blocked 2 damage." << endl;
				cout << "Took " << enemyDamage - 2 << " damage." << endl;
			}
			UserAgent->hp(enemyDamage);
			cout << "Enemy dealt " << enemyDamage << " damage to you." << endl;
		}
		roundNumber++;
	}


	cout << (Raze_AI->hp() > 0 ? "Enemy wins!" : "You win!") << endl;

	delete SentinelFactory;
	delete DuelistFactory;

	return 0;
}
