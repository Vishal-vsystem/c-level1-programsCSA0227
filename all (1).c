#include <stdio.h>
int main(){
    int sum=0,n;
    int sum1=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        if(i%2==0){
            sum+=i;
        }
        else{
            sum1+=i;
            
        }
        
    }
    printf("sum of even numbers:%d\n",sum);
    printf("sum of odd numbers:%d\n",sum1);
}