#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("greater is a = %d\n",a);
    }
    else if(b>a && b>c){
        printf(" greater is b = %d\n",b);
    }
    else{
        printf("greater is c = %d\n",c);
    }
    
}