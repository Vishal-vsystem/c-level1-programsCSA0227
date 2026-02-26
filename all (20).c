#include <stdio.h>
int main(){
    int a=121,rem=0,temp;
    a=temp;
    while(a!=0){
        rem=rem*10+a%10;
        a=a/10;
    }
    if(temp==rem){
        printf("pal");
    }
    else{
        printf("not");
    }
}