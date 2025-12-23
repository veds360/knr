#include<stdio.h>

#define OUT 0
#define IN 1

int main(){
    int wc,state=0;

    FILE *fp=fopen("text.txt","r");
    wc=0;
    int c=0;
    while ((c=getc(fp))!=EOF)
    {
        /* code */
        if(c==' ' || c=='\n' || c=='\t') state=OUT;
        else{
            if(state==OUT){
                wc++;
                state=IN;
            }
        }
    }

    printf("Number of words are:%d",wc);
    
}