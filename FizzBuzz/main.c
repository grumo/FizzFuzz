/*
 
 Assignment 1: FizzBuzz
 
 Write a program that prints the numbers from 1 to 100. For the multiples of 3, print "Fizz" instead of the number and for the multiples of 5, print "Buzz" instead of the number. For numbers which are multiples of both 3 and 5 print "FizzBuzz"
 
 Notes:
 
 - Create this as a new project in Xcode.
 - Push your code to GitHub
 
 */

#include <stdio.h>

int main()
{
    int x = 1;
    char FizzVal[5] = "Fizz";
    char BuzzVal[5] = "Buzz";
    char FizzBuzzVal[9] = "FizzBuzz";
    
    while (x < 101)
    {
        
        if ((x % 5 == 0) && (x % 3 == 0)){
            printf("%d : %s\n", x, FizzBuzzVal);
        }
        else if (x % 5 == 0){
            printf("%d : %s\n", x, BuzzVal);
        }
        else if(x % 3 == 0)
        {
            printf("%d : %s\n", x, FizzVal);
        }
        else{
            printf("%d : %d\n", x, x);
        }
        
        
        
        x++;
        
    }
    
    return 0;
}