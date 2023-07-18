/*Q.3 Write a Program to convert the given string in toggle case without using any string function.
For example,
Input:
Enter any string: HelLo worLD

Output:
Toggle case string: hELlO WORld
*/
#include<stdio.h>

void main (){

int n,i;

printf("Enter the string length =  ");
scanf("%d",&n);

char a[n];

printf("enter your senteces (without any space) : ");
scanf("%s",&a);

for(i=0;i<n;i++){
    if(a[i]>=65 && a[i]<=90){

    a[i]=a[i] + 32;
    }else{

      a[i]=a[i] - 32;

    }
}
    
    
    printf("The converted text toggle case is :%s",a);

}
