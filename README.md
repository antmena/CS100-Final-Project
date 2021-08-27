# Valorant Text-Based Game
Group members: [Anthony Mena](https://github.com/antmena), [Michael Lo](https://github.com/lomichael), [Adrian Carrillo](https://github.com/acarrillo889)

## Why is it important or interesting to you?
    
This text-based implementation of Valorant is interesting to us because it is one of our favorite games to play currently and we wanted to offer a different way to play a first person shooter to people who may prefer a less demanding player experience.

## What languages/tools/technologies do you plan to use?
* C/C++
* CMake
* googletest

## What will be the input/output of your project?

The input of the game will be the agent that you choose to play as and the output will be the game being played through text showing the damage being done and health taken. The final output will be what team/agent was the winner.

## What are the design patterns you will be using? For each design pattern you must:
* The Abstract Factory design pattern will be implemented as a WeaponFactory class. This WeaponFactory class is the abstract base class for building a final concrete weapon depending on the agent type. When a weapon is built, it will go through the first factory concrete factories which are agent weapon factories which inherit from the abstract base class WeaponFactory. After the agent is known then it will go through the primary and secondary weapon factories which build the final weapon for the type of agent chosen.

* The Strategy design pattern will be implemented as a class that builds the agent and depending on which agent you want it will choose the class for the agent that determines the E-ability, which is the special attack of the agent.

# Class Diagram
![Final Project CS100](https://user-images.githubusercontent.com/24843819/130893585-1c9c18f0-72a8-4817-9f29-91c48c154482.png)

Class Diagram Description:
* The abstract factory design pattern in our final project will be used to create a weapon factory. The abstract base class will be used to build the primary and secondary weapons. Nothing will be done in that base factory but after it goes to 2 different factories which determine the agent type of the agent you selected. After this a concrete product is made for your agent type with pre-selected weapons depending on the agent type; Sentinel or Duelist.

* The strategy design pattern in our final project builds the agents themselves and the E ability of the agents. These E abilities don't help in combat in terms of damage but offer voice lines from the game Valorant itself to give more life to the text.

# Kanban Board Link

Link:(https://trello.com/b/hT80aquy/kanban-template)!



