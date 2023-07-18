//Q2.convert into lower case.


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
    }
}
    
    
    printf("The converted text in lower case is :  %s",a);

}
