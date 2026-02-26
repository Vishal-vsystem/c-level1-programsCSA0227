#include <stdio.h>
#include <string.h>
int main(){
    char s[50];
    int i,len,flag=0;
    printf("enter the string: \n");
    scanf("%s",s);
    len=strlen(s);
    for(i=1;i<len/2;i++){
        if (s[i]!=s[len-i-1]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
}