/* 

Assignment 2: FuzzBizzNezz

Write a program that takes three integer inputs: "Fuzz", "Bizz", and "Nezz".

- Print numbers from 1 to the user's input for "Nezz".
- For the multiples of "Fuzz", print "Fuzz" instead of the number
- For the multiples of "Bizz", print "Bizz" instead of the number.
- For numbers which are multiples of both "Fuzz" and "Bizz" print "FuzzBizz"

*/

#include <stdio.h>

int main(){
	
   int x = 1;
   int  Fuzz, Bizz, Nezz;
   int HiNo, LoNo;
   char FuzzChar[5] = "Fizz";
   char BizzChar[5] = "Buzz";
   char FuzzBizzChar[9] = "FizzBuzz";

	// Promt user to inpur values for "Fuzz", "Bizz", and "Nezz".

   printf("Enter Fuzz:\n");
   scanf("%d",&Fuzz);
   
   printf("Enter Bizz:\n");
   scanf("%d",&Bizz);
   
   printf("Enter Nezz:\n");
   scanf("%d",&Nezz);
   
	// Determine which one is a higher number
   
   HiNo = Fuzz >= Bizz ? Fuzz : Bizz;
   LoNo = Fuzz < Bizz ? Fuzz : Bizz;
   
   //printf("The HiNo is: %d\nThe LoNo is %d\n", HiNo, LoNo);
   
   while (x < Nezz)
   {
    
       if ((x % HiNo == 0) && (x % LoNo == 0)){
           printf("%d : %s\n", x, FuzzBizzChar);
       }
       else if (x % HiNo == 0){
           printf("%d : %s\n", x, BizzChar);
       }
       else if(x % LoNo == 0)
       {
           printf("%d : %s\n", x, FuzzChar);
       }
       else{
           printf("%d : %d\n", x, x);
       }
    
       x++;
    
   }

   return 0;
	
}

