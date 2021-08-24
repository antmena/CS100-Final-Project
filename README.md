# COVID-19 Vaccine Distribution
Group members: [Arthur Gao](https://github.com/arthurgao09), [Anthony Mena](https://github.com/antmena), [Michael Lo](https://github.com/lomichael), [Adrian Carrillo](https://github.com/acarrillo889)

## Why is it important or interesting to you?
    
Arthur's COVID-19 lab involvement brings up the pressing concern of who warrants vaccination before others. We created this Distribution program to determine, based on three factors, who should receive the vaccination.

## What languages/tools/technologies do you plan to use?
* C/C++
* CMake
* googletest

## What will be the input/output of your project?

The input is people who will be vaccinated for COVID-19. The output is the person who's next in line for the vaccine. 

## What are the design patterns you will be using? For each design pattern you must:
* The Composite design pattern will be implemented as a DistributionList class, that aggregates People objects. The DistributionList class will maintain the list data structure that holds the People objects. 

* The Strategy design pattern will be implemented as a class that orders the DistributionList according to the desired characteristic. People will be moved around the list according to age, current condition, or number of vaccinations received. There will be Strategy classes that order the list for vaccination according to the age, current condition, or number of vaccinations received. Effectively, the top person of the list will be the next in line for the vaccine.

# Class Diagram
![Final Project CS100](https://user-images.githubusercontent.com/68964138/130569372-0558da3b-2d45-4e78-86cb-139c05855e8f.png)

Class Diagram Description:
* The composite design pattern in our final project...

* The strategy design pattern in our final project is the abstract class which we have as arrangePatients that has a virtual function called display(string type). The arrangePatients abstract class has two derived classes (strategy classes) that both display the patients in the order of their neccessity for the covid vaccine. Age is more important than health so it will take priority. For the arrangeByHealth class, it will display the health of each patient in line from most priority being the eldest, to the least priority being the youngest. The arrangeByAge class is similar in that it will display the age of each patient in line from the most priority being the most compromised in health to the least compromised in health.

# Kanban Board Link

Link:(https://trello.com/b/hT80aquy/kanban-template)


