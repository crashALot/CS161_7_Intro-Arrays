/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        5/16/2018
** Description: This program takes two parameters - an array of int 
*               and the int size of the array. The function will return 
*               the median of the array, which will require sorting 
*               the array. This will change the original array for the
*               purposes of this program. 
*********************************************************************/
#include <iostream>
#include <algorithm> // Allows call for: sort

double findMedian(int listArray[], int); // Preprocessor directive

/********************************************************************* 
** Description: double findMedian(int listArray[], int arrayLength)
*               This function takes two inputs: One list of unordered
*               integers and the integer array length. The function 
*               will sort the array from lowest to highest and find
*               the median value. The median value will be returned to
*               main.               
*********************************************************************/
double findMedian(int listArray[], int arrayLength)
{
    int lowerBound, upperBound; // The bound variables are specifically for 
                                // even numbered array lengths
    double median;
    // Algorithm sort to order array
    std::sort(listArray,listArray+arrayLength);
    // The below if statement determines if the array has an even length, and
    // if it does, solves for the median of the two most central values
    if (arrayLength%2==0)
    {
        lowerBound=(arrayLength/2)-1;
        upperBound=(arrayLength/2);
        median=static_cast<double>(listArray[lowerBound]+listArray[upperBound])/2;
    }
    // Else statement considers scenario where array length is not even
    else 
    {
        median=listArray[((arrayLength-1)/2)];
    }
        
    return (median);
}
/*
int main()
{
    int listArray[]={1,2,3,5,4}, arrayLength=5;
    double foundMedian;
    foundMedian=findMedian(listArray,arrayLength);
    std::cout << "Median is: " << foundMedian << std::endl;
	return 0;
}
*/