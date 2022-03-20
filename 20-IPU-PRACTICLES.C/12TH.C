#include<math.h>
#include<stdio.h>

int checkprimenumber(int n);
int checkarmstrongnumber(int n);
int main(){
    int n,flag;
    printf("nisha\n");
    printf("enter a positive integer:\n");
    scanf("%d",&n);
    flag=checkprimenumber(n);
    if(flag==1)
    printf("%dis prime number\n,n");
    else
    printf("%d  is not a prime number");
    flag=checkarmstrongnumber(n);
    if(flag==1)
    printf("%d is armstrongnumber",n);
    else
    printf("%d, is not aarmstring number",n);
    
return 0;
}
int checkprimenumber(int n){
    int i,flag=1, squareroot;
    squareroot=sqrt(n);
    for(i=2;i<=squareroot;++i){
if(n%i==0){
    flag=0;
    break;

}
    }
   
    return flag=0;

}
int checkarmstrongnumber(int num){
    int originalNum,remainder,n=0,flag;
    double result=0.0;
    for(originalNum=num;originalNum!=0;++n){
    originalNum/= 10;

}
for(originalNum=num;originalNum!=0;originalNum /=10){
    remainder = originalNum%10;
    result+=pow(remainder,n);

}
if(round(result)==num)
flag= 1;
else flag =0;

return flag;
}