#include<stdio.h>

int main(){

long int num;

printf("Enter the number to check:");

scanf("%ld",&num);

int count = 0;

while(num != 0){

int val = num % 10;

if((val != 1) && (val != 0)){

count++;

break;

}

num = num / 10;

}

if(count > 0)

printf("Given number is not a binary\n");

else

printf("Given number is a binary\n");

return 0;

}