#include <iostream>
#include "Person.hpp"

int main()
{
    double deviation;
    int arrayLength=3;
    Person personArray[arrayLength]={Person("Tom", 30), Person("Dick", 35), Person("Harry", 25)};
    Person Jim;
    std::cout << Jim.getName() << std::endl;
    std::cout << Jim.getAge() << std::endl;
    std::cout << personArray[0].getName() << std::endl;
    std::cout << personArray[0].getAge() << std::endl;
    std::cout << personArray[1].getName() << std::endl;
    std::cout << personArray[1].getAge() << std::endl;
    std::cout << personArray[2].getName() << std::endl;
    std::cout << personArray[2].getAge() << std::endl;
    deviation=stdDev(personArray,arrayLength);
    std::cout << deviation << std::endl;
	return 0;
}