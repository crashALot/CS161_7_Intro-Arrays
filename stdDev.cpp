/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        5/16/2018
** Description: This program takes two parameters - an array of Person
*               objects and the size of the array - and returns the 
*               standard deviation of all the ages (the population 
*               standard deviation that uses a denominator of N, not 
*               the sample standard deviation).
*********************************************************************/
#include <iostream>
#include "Person.hpp"
#include <cmath> // Required for pow and sqrt functions

/********************************************************************* 
** Description: double stdDev(Person personArray[],int arrayLength)
*               This function will determine the standard deviation
*               of several ages from an array of persons and return
*               the answer to main. 
*********************************************************************/
double stdDev(Person personArray[],int arrayLength)
{
    double totalAge=0, averageAge, squaredAge[arrayLength], totalSquaredAge=0, averageSquaredAge, deviation;
    // Step 1: Solve for the summation of ages by adding each person's age in the array
    for (int count=0; count<arrayLength; count++)
    {
        totalAge=personArray[count].getAge()+totalAge;
    }
    // Step 2: Solve for average age using the total summation of ages and number of persons in the array
    averageAge=(totalAge/arrayLength);
    // Step 3: Subtract the average age from each person's age, and square the result
    for (int count=0; count<arrayLength; count++)
    {
        squaredAge[count]=pow(personArray[count].getAge()-averageAge,2);
    }
    // Step 4: Add the squared result from each person into one summation
    for (int count=0; count<arrayLength; count++)
    {
        totalSquaredAge=squaredAge[count]+totalSquaredAge;
    }
    // Step 5: Determine the average of the total squared values
    averageSquaredAge=(totalSquaredAge/arrayLength);
    // Step 6: Find the square root of the averaged squared ages 
    deviation=sqrt(averageSquaredAge);
    // Return answer to main
    return(deviation);
}