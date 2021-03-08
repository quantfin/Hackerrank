//Author : Akash Ranjan
//https://www.linkedin.com/in/ranjan-akash/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int a , b;      //declare a and b integer.
    float c, d;     //declare c and d float.
  
    scanf("%d %d",&a,&b); // for reading user input for value of a and b.
    printf("%d %d\n", a+b , a-b); // value of sum and substraction will be calculaed as well as printed.

    scanf("%f %f",&c ,&d); // read c and d value from user
    printf("%0.1f %0.1f",c+d ,c-d); // we use 0.1 before f to show only one digit after decimal point and print the computed value as ans.


    return 0;

}

