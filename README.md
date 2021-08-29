# Valorant Text-Based Game
Group members: [Anthony Mena](https://github.com/antmena), [Michael Lo](https://github.com/lomichael), [Adrian Carrillo](https://github.com/acarrillo889)

## Why is it important or interesting to you?
    
This text-based implementation of Valorant is interesting to us because it is one of our favorite games to play currently so we wanted to offer another perspective on the game. We wanted to offer a different way to play a first person shooter to people who may prefer a less demanding player experience. This project is not only interesting to us but will help us as students and software developers to become more organized and utilize the new strategies and skills taught to us in CS100.

## What languages/tools/technologies do you plan to use?
* C/C++ - Using this language because of its OOP(Object-Oriented Programming) capabilties, we will create a command line executable which will take client commands from the keyboard in order to utilize the text-based game that we are building while also displaying the inputs on the screen.
* CMake - CMake will be used primarily for testing purposes and compiling our program.
* googletest - Googletest will be used as our unit testing framework. 
* Git - Git will be used as the version control tool to organize our work and keep it up to date.
* Valgrind - We will use the Valgrind framework in order to help us keep free of memory leaks and assist in debugging.

## What will be the input/output of your project?

The input of the game will start as the agent that you choose to play as. From here you will then be able to choose an input, from displayed inputs you are able to choose from, in order to either use your primary weapon, secondary weapon, or E ability of the character you have chosen. The output will be the game being played through text showing the damage being done and health displayed each round as you are taking damage each round. The final output will be what agent was the winner of the game, which is whoever still has health left.

## What are the design patterns you will be using? For each design pattern you must:
* The two design patterns we chose to fit our game implementation the best was the abstract factory design pattern and the strategy deign pattern.

* The Abstract Factory design pattern will be implemented as a WeaponFactory class. This WeaponFactory class is the abstract base class for building a final concrete weapon depending on the agent type. When a weapon is built, it will go through the first concrete factories which are agent weapon factories which inherit from the abstract base class WeaponFactory. After the agent is known, then it will go through the primary and secondary weapon factories which build the final weapon for the type of agent chosen.

* The Strategy design pattern will be implemented as a class that builds the agent and depending on which agent you want it will choose the class for the agent that determines the E-ability, which is the special attack of the agent. This class determines the characterisitcs of the agent which acts separately from the actual damage being done by weapons, which the abstract factories handle.

# Class Diagram
![Final Project CS100](https://user-images.githubusercontent.com/24843819/130893585-1c9c18f0-72a8-4817-9f29-91c48c154482.png)

Class Diagram Description:
* The abstract factory design pattern in our final project will be used to create a weapon factory. The abstract base class will be used to build the primary and secondary weapons. Nothing will be done in that base factory but after it goes to 2 different factories which determine the agent type of the agent you selected. After this a concrete product is made for your agent type with pre-selected weapons depending on the agent type; Sentinel or Duelist. The characterisitc of the weapons, the damage, is also done here.

* The strategy design pattern in our final project builds the agents themselves and the E ability of the agents. Depending on the agent themselves the E abiliy may either help in combat or not. Each agent has an E ability which is unique to them. There is also a voice line which is built inside these agent classes which are from the game of Valorant itself if you just want to give more life to the text of the game. 

# Kanban Board Link

Link:(https://trello.com/b/hT80aquy/kanban-template)!

# Screenshots
* This image is a picture of the choose agent prompt that prompts the user when first starting to choose one of two agents available to play as in the game.

![First Screenshot CS100 Final Project](https://user-images.githubusercontent.com/68964138/131264558-e8445cd7-0b07-42ab-96ed-9aee45c79217.png)

* This second image is a voice line depending on the agent you have chosen to play as in the game. After you have chosen your agent and the voice line has displayed as output, you will see the health each player starts with and the game will begin. There will be a menu of options that can be done by the agent during their turn in the game. This is basically the way the game will play out until the AI or the users health reaches 0.
![Second Screenshot CS100 Final Project](https://user-images.githubusercontent.com/68964138/131264570-fd6f5f94-8df7-45d7-ad78-45cc33a992aa.png)

* This third image is showing an example of how each action the character chooses to input acts.
![Screenshot 3 CS100 Final Proeject](https://user-images.githubusercontent.com/68964138/131264576-3137d718-3a6c-4ff8-8480-27daaad482bf.png)

* This final image will show what happens once one of the players health reaches 0 and the game has ended.
![Screenshot 4 CS100 Final Project](https://user-images.githubusercontent.com/68964138/131264578-6582edf2-9ef0-4f39-830f-1b034625d20b.png)

# Installation/Usage
* To be able to use and run our program, you first would need to clone our CS100 final project repository (git clone https://github.com/antmena/CS100-Final-Project.git) into your local machine and cd in its directory.

* Next you would simply compile the application by running "g++ -g main.cpp -o valorantGame" in your terminal to generate the executable for the game. This would be followed by running the executable in your terminal by running "./valorantGame", which would now begin the game.

# Testing
*



