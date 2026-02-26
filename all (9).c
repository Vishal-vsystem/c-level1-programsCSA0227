#include <stdio.h>
int main(){
    int vowels=0,con=0;
    int i,j;
    char a[5]={'a','e','i','o','u'};
    char s[45];
    printf("Enter string: ");
    scanf("%s",s);
    for(i=0;s[i]!='\0'; i++){
        int isvowel=0;
        for(j=0;j<5;j++){
            if(s[i]==a[j]){
                isvowel=1;
                break;
            }
        }
        if(isvowel==1){
            vowels++;
        }
        else{
            con++;
        }
    }
    printf("The vowels are =%d\n",vowels);
    printf("the cons are = %d\n",con);
    
   
}