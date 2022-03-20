#include<stdio.h>

int main(){
int num1=10,num2=20,z;
z=(num1>num2);
z?printf("display num1"):printf("display num2");
printf("\n sum=%d",num1+num2);
printf("\n sub=%d",num1-num2);
printf("\n mul=%d",num1*num2);
printf("\n div=%d",num1/num2);
printf("\n avg=%d",(num1+num2)/2);
return 0;
}