#include "valorant_agents.hpp"
#include "valorant_weapons.hpp"

#include "gtest/gtest.h"



TEST(ValorantAgent, AgentRazeValidHp)
{
	Agent Test(new Raze());


	EXPECT_EQ(100, Test.hp());

}




TEST(ValorantAgent, AgentSageValidHp)
{
Agent Test(new Raze());

EXPECT_EQ(100, Test.hp());

}




TEST(ValorantAgent, AgentRazeInvalidHp)

{

Agent Test(new Raze());

EXPECT_EQ(true,Test.hp()==100);

}


TEST(ValorantAgent, AgentSageInvalidHp)

{

Agent Test(new Sage());

EXPECT_EQ(true,Test.hp()==100);

}

//TEST(ValorantAgent, AgentSageInvalidHp)

//{

//Agent Test(new Sage());

//EXPECT_EQ(10, Test.hp());
//}

TEST(ValorantAgent, AgentRazeValidDamage)
{
        Agent Test(new Raze());
	Test.hp(20);

        EXPECT_EQ(80, Test.hp());

}



TEST(ValorantAgent, AgentRazeValidZeroDamage)
{
        Agent Test(new Raze());
        Test.hp(0);

        EXPECT_EQ(100, Test.hp());

}

TEST(ValorantAgent, AgentRazeValidFullHpDamage)
{
        Agent Test(new Raze());
        Test.hp(100);

        EXPECT_EQ(0, Test.hp());

}







TEST(ValorantAgent, AgentSageValidDamage)
{
        Agent Test(new Raze());
        Test.hp(10);

        EXPECT_EQ(90, Test.hp());

}

TEST(ValorantAgent, AgentSageValidZeroDamage)
{
        Agent Test(new Raze());
        Test.hp(0);

        EXPECT_EQ(100, Test.hp());

}


TEST(ValorantAgent, AgentSageValidFullHpDamage)
{
        Agent Test(new Raze());
        Test.hp(100);

        EXPECT_EQ(0, Test.hp());

}

TEST(ValorantWeapon, SentinelPrimaryWeapon)
{

SentinelPrimaryWeapon Test;


	EXPECT_EQ(9, Test.getDamage());


}

TEST(ValorantWeapon, SentinelSecondaryWeapon)
{

SentinelSecondaryWeapon Test;


        EXPECT_EQ(5, Test.getDamage());


}

TEST(ValorantWeapon, DuelistPrimaryWeapon)
{
DuelistPrimaryWeapon Test;


        EXPECT_EQ(7, Test.getDamage());


}

TEST(ValorantWeapon, DuelistSecondaryWeapon)
{
DuelistSecondaryWeapon Test;


        EXPECT_EQ(4, Test.getDamage());


}












//TEST(ValorantAgent, AgentRazeAbility)
//{

//Raze Test;

//EXPECT_EQ("Boom!",Test.keyPress());
//}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
