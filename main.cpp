#include <iostream>
#include "valorant_agents.hpp"
#include "valorant_weapons.hpp"

int main()
{	
	std::string choice = "";
	
	Agent Raze_AI(new Raze());

	while(choice != "Raze" && choice != "Sage")
	{
	std::cout << "Please choose your agent. Enter: Raze or Sage" << std::endl;
	std::cin >> choice;

	if(choice == "Raze")
	{	
	Agent Raze_(new Raze());
	std::cout << "Yes, I'm pumped!" << std::endl;
	Raze_.EAbility();
	std::cout << Raze_.hp() << std::endl;
	}
	else if(choice == "Sage") 
	{
	Agent Sage_(new Sage());
	std::cout << "I am both shield and sword" << std::endl;
	Sage_.EAbility();
	std::cout << Sage_.hp() << std::endl;
	}
	else
	{
	std::cout << "Please choose a valid agent" << std::endl;
	}	
}
	std::cout << "Round 1 has now begun!" << std::endl;
	
	Factory *DuelistFactory = new DuelistWeaponFactory; //Creating Dueliost Weapons
	Factory *SentinelFactory = new SentinelWeaponFactory; //Creating Sentinel Weapons
	Client *s = new Client(SentinelFactory);
	s->build();

	//if(choice == Raze) 
	//{
	
	//}


return 0;
}
