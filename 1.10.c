#include<stdio.h>

int main(){
    FILE *fp=fopen("text.txt","r");
    FILE *f=fopen("output.txt","w");

    int c=0;
    while ((c=getc(fp))!=EOF)
    {
        /* code */
        if(c=='\t'){
            putc('\\',f);
            putc('t',f);
        }
        else if(c=='\b'){
            putc('\\',f);
            putc('b',f);
        }
        else if(c=='\\'){
            putc('\\',f);
            putc('\\',f);
            }
        else{
            putc(c,f);
        }
    }
    
}
// as we start wit start=OUT even works for strin of spaces