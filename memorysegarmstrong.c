#include <stdio.h>
#include <math.h>
int glo = 10;   // initialized global
int unglo;      // uninitialized global
int main(){
int r,i;        // stack variables
printf("Enter the range: ");
scanf("%d",&r);
printf("\nArmstrong numbers between 1 and %d are:\n",r);
for(i=1;i<=r;i++){
int num=i;
int sum=0,digits=0;
int temp=num;
while(temp!=0){
digits++;
temp/=10;
}
temp=num;
while(temp!=0){
int rem=temp%10;
sum+=pow(rem,digits);
temp/=10;
}
if(sum==num)
printf("%d\n",num);
}
printf("\nStack variable r value: %d",r);
printf("\nStack variable r address: %p",&r);
printf("\nInitialized global value: %d",glo);
printf("\nInitialized global address: %p",&glo);
printf("\nUninitialized global value: %d",unglo);
printf("\nUninitialized global address: %p",&unglo);
printf("\nCode segment address (main): %p",&main);
return 0;
}

