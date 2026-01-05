#include<stdio.h>

int htoi(char s[]){
    int ans=0;
    int i=0;
    while(s[i]!='\0'){
        if(s[i]>='0' && s[i]<='9'){
            ans=ans*16 +(s[i]-'0');
        }
        else if(s[i]>='a' && s[i]<='f'){
            ans=ans*16 +(s[i]-'a'+10);
        }
        else if(s[i]>='A' && s[i]<='F'){
            ans=ans*16 +(s[i]-'A'+10);
        }
        i++;
    }
    return ans;
}

int main(){
    char* str="0x16";
    int x=htoi(str);
    printf("%d",x);
}