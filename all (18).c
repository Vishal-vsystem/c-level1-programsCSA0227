#include<stdio.h>
int main(){
    int a,b;
    int x,y,temp,gcd,lcm;
    printf("Enter the numbers: \n");
    scanf("%d %d",&a,&b);
    while(y!=0){
      temp=y;
      y=x%y;
      x=temp;
    }
    gcd=x;
    lcm=(a*b)/gcd
    printf("the hcf is = %d\n",gcd);
    printf("the lcm is = %d\n",lcm);
    
}