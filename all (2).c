#include <stdio.h>
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if(n<0){
        printf("negative : %d\n",n);
    }
    else if (n>0) {
        printf("positive : %d\n",n);
    }
    else{
        printf("special character or 0");
    }
}