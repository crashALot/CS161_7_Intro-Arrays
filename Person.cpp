/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        5/16/2018
** Description: This program encompasses the required functions to 
*               create a Person object and simple methods to call the 
*               Person class member variables. The Person.hpp file
*               is linked with this program. 
*********************************************************************/
#include "Person.hpp"
#include <string>

/********************************************************************* 
** Description: Person::Person()
*               Default constructor for Person class. Sets default
*               person to blank name and age of -100 years.
*********************************************************************/
Person::Person()
{
    name=" ";
    age=-100;
}

/********************************************************************* 
** Description: Person::Person(std::string newName, int newAge)
*               User input constructor. Sets name and age of person
*               object to user defined input.
*********************************************************************/
Person::Person(std::string newName, int newAge)
{
    name=newName;
    age=newAge;
}

/********************************************************************* 
** Description: get functions
*               The following get functions allow users to retrieve
*               the name and age of specific person objects.
*********************************************************************/
std::string Person::getName()
{
    return (name);
}

int Person::getAge()
{
    return (age);
}
/********************************************************************* 
** Description: Person::~Person()
*               Class Person destructor
*********************************************************************/
Person::~Person()
{
}