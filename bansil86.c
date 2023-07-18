/*Q.1 Write a Program to convert the given string in uppercase without using any string function.
For example,
Input:
Enter any string: hello world

Output:
Uppercase string: HELLO WORLD
*/
#include<stdio.h>

void main (){

int n,i;

printf("Enter the string length =  ");
scanf("%d",&n);

char a[n];

printf("enter your senteces(without any space  ) : ");
scanf("%s",&a);

for(i=0;i<n;i++){
    if(a[i]>=97 && a[i]<=122){

    a[i]=a[i] - 32;
    }
}
     printf("\nThe converted text in upper case is :  %s",a);
}
