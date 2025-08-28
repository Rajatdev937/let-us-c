// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include<stdio.h>
int main ()
{
char charac; 

//take a character from user
printf("enter any character: ");
scanf("%c",&charac);

//check if the character lie between A to Z
if(charac>='A' && charac<='Z')
{
    printf("it a an uppercase Alphabet");
}
//check if the character lies between a to z
else if (charac>='a' && charac<='z')
{
    printf("its an lowercase Alphabet");
}
//checks it the character lies between 0 to 9
else if ( charac>='0' && charac<='9')
{
    printf("its a digit");
}
else{
    printf("its a special character");//or else it could be a special character
}
return 0;
}