#include<stdio.h>

int main(){
    FILE * fp=fopen("text.txt","r");
    int c=0;
    int cnt=0;
    while ((c=getc(fp))!=EOF)
    {
        if(cnt==0){
            putchar(c);
            if(c==' '){
                cnt=1;
            }
        }
        else{
            if(c!=' '){
                putchar(c);
                cnt=0;
            }
        }
    }
    
}