#include<stdio.h>

#include<string.h>

 

int digit(char);

 

int main(){

 

    char roman_Number[100000];

    int d=0;

    long int number =0;

 

    printf("Enter any roman number (Valid digits are I, V, X, L, C, D, M):  \n");

    scanf("%s",roman_Number);

 

    while(roman_Number[d]){

 

         if(dig(roman_Number[d]) < 0){

             printf("Invalid roman digit : %c",roman_Number[d]);

             return 0;

         }

 

         if((strlen(roman_Number) -i) > 2){

             if(dig(roman_Number[d]) < dig(roman_Number[d+2])){

                 printf("Invalid roman number");

                 return 0;

             }

         }
