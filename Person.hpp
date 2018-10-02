/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        5/16/2018
** Description: This header file includes the creation of class "Person"
*               which includes a name and age for each object it creates.
*               Additionally, a prototype for the stdDev function
*               is included separately outside the class. 
*********************************************************************/
#ifndef PERSON_HPP
// Add a guard
#define PERSON_HPP
#include <string> // Required to add "name" variable to each object

class Person
{
private:
    
    std::string name;
    int age;
    
public:
    
    Person(); // Default constructor
    Person(std::string, int); // User input constructor
    std::string getName();
    int getAge();
    
    ~Person(); // Destructor
    
};

    double stdDev(Person personArray[], int arrayLength);

#endif