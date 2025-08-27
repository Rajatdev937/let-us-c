// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include<stdio.h>
int main ()
{
char ch;//defines a variable ch 

printf("enter an english alphabet: ");//ask user to input an alphabet
scanf("%c",&ch);
 
//make the condition if the entered alphabet is either an vowel or an consonant
if (ch=='a'|| ch=='e' || ch=='i' ||ch=='o' ||ch=='u' || ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U'){
    printf("this alphabet is a vowel");
}
else{
    printf("this is a consonant");
}
return 0; 
}