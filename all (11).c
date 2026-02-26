#include <stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter the number:\n ");
    scanf("%d",&n);
    int on=n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==on){
        printf("the number %d is perfect number\n",n);
    }
    else{
        printf("the number %d is not perfect\n",n);
    }
}