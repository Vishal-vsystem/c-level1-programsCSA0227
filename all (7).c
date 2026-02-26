#include <stdio.h>
int main(){
    int a=14892;
    int rem;
    int sum=0;
    while(a!=0){
        rem=a%10;
        rem=rem+1;
        sum=sum+rem;
        a=a/10;
    }
    
    printf("sum is = %d",sum);
}