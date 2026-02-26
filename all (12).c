#include <stdio.h>
#include <math.h>
int main(){
    int n,i,j,on,rem,sum=0,c=0;
    printf("enter the number: \n");
    scanf("%d",&n);
    on=n;
    while(n!=0){
        c+=1;
        n=n/10;
    }
    n=on;
    while(n!=0){
        rem=n%10;
        n=n/10;
        sum+=pow(rem,c);

    }
    printf("\n%d\n",sum);
    if(sum==on){
        printf("it is arm");
    }
    else{
        printf("it is not arm");
    }
}