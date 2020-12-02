// to add 1 to each digit of a number entered by the user.
// Author Majid Mujahid Hussain dated 1 December 2020
#include <stdio.h>
#include <stdlib.h>

int main()
{
        printf("Hello world!\n");

    int number, remainder,qoutient,sum = 0;//declaring a variable to store a number.
    //printf("he number is equal to %d\n",number); // to check whether their is a garbage value in the number.
    number = 0; // removing all the garbage value in the variable number.
    printf("Please enter the number\n");
    scanf("%d",&number);// taking a user input of a number

     // going from left to right.

    // running for the last digit
    remainder = number % 10;//getting the last digit of the number.
    sum = sum +(remainder + 1);// adding one to the digit.
    number = number / 10; //new number without the last digit.

    //printf("printing the number in variable remainder %d\n",remainder);//printing out the digit.
    //printf("printing the number in variable remainder %d\n",remainder);//printing out the digit.
    //printf("printing the number in variable number %d\n",number);//printing put the number
    //printf("printing the number in variable new number %d\n",sum);//printing put the number

    // running for the second last digit
    remainder = number % 10;//getting the second last digit of the number.
    sum = sum +((remainder + 1) *10);// adding one to the digit.
    number = number / 10; // new number without the second last digit.

    //printf("printing the number in variable remainder %d\n",remainder);//printing out the digit.
    //printf("printing the number in variable remainder %d\n",remainder);//printing out the digit.
    //printf("printing the number in variable number %d\n",number);//printing put the number
    //printf("printing the number in variable new number %d\n",sum);//printing put the number

    // running for the third last digit.
    remainder = number % 10;//getting the last digit of the number.
    sum = sum +((remainder +1 ) * 100);// adding one to the digit.
    number = number / 10;
    //printf("printing the number in variable remainder %d\n",remainder);//printing out the digit.
    //printf("printing the number in variable remainder %d\n",remainder);//printing out the digit.
    //printf("printing the number in variable number %d\n",number);//printing put the number
    //printf("printing the number in variable new number %d\n",sum);//printing put the number

    // running for the fourth last digit
    remainder = number % 10;//getting the last digit of the number.
    sum = sum + ((remainder +1) * 1000 );// adding one to the digit.
    number = number / 10;
    //printf("printing the number in variable remainder %d\n",remainder);//printing out the digit.
    //printf("printing the number in variable remainder %d\n",remainder);//printing out the digit.
    //printf("printing the number in variable number %d\n",number);//printing put the number
    //printf("printing the number in variable new number %d\n",sum);//printing put the number

    //running for the fifth last digit.
    remainder = number % 10;//getting the last digit of the number.
    sum = sum +((remainder +1) * 10000);// adding one to the digit.
    number = number / 10;
    //printf("printing the number in variable remainder %d\n",remainder);//printing out the digit.
    //printf("printing the number in variable remainder %d\n",remainder);//printing out the digit.
    //printf("printing the number in variable number %d\n",number);//printing put the number
    printf("printing the number in variable new number %d\n",sum);//printing put the number

     //number = number%10000;//new number after removing the last digit
     //new_number = digit*10000;
     // printf("printing the number in variable remainder %d\n",remainder);//printing out the digit.
     //printf("printing the number in variable remainder %d\n",remainder);//printing out the digit.
     //printf("printing the number in variable number %d\n",number);//printing put the number
     //printf("printing the number in variable new number %d\n",sum);//printing put the number

    return 0;
}
