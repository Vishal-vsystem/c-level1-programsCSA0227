#include <stdio.h>
#include <string.h>
int main(){
    char s1[50];
    char s2[50];
    int i,j,len1,len2,found,flag=0;
    scanf("%s %s",s1,s2);
    len1=strlen(s1);
    len2=strlen(s2);
    if(len1!=len2){
        printf("not anagram\n");
    }
    for(i=0;i<len1;i++){
        found=0;
        for(j=0;j<len2;j++){
            if(s1[i]==s2[j]){
                found=1;
                s2[j]='*';
                break;
            }
        }
        if(found==0){
            flag=1;
            break;
        }
    }
    if (flag==0){
        printf("not anagram");
        
    }
    else{
        printf("anagram");
    }
}