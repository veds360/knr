#include<stdio.h>
#define OUT 0
#define IN 1

int main(){
    FILE *fp=fopen("text.txt","r");
    int c=0;
    int curr=OUT;
    while ((c=getc(fp))!=EOF)
    {
        /* code */
        if(c=='\n' || c=='\t' || c==' '){
            if(curr==IN)
            putchar('\n');
            curr=OUT;
        }
        else{
            curr=IN;
            putchar(c);
        }
    }
    
}