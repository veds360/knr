#include<stdio.h>

int main(){
    FILE * fp=fopen("text.txt","r");
    int blanks=0;
    int tabs=0;
    int newlines=0;
    int c=0;
    while ((c=getc(fp))!=EOF)
    {
        /* code */
        if(c==' ') blanks++;

        else if(c=='\t') tabs++;

        else if(c=='\n') newlines++;
    }

    // in vscode apparently tab doesnt work ...bein counted as blanks

    printf("blanks:%d tabs:%d newlines:%d",blanks,tabs,newlines);
    
}