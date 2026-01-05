#include<stdio.h>
#define max 100

int main(){
    char array[max];
    int i,c;

    for(int i=0;(i<max-1)*((c=getchar())!='\n')*(c!=EOF);i++){
        array[i]=c;
    }
    array[i]='\0';
    printf("%s",array);
}


// the trick is that relational expressons evaluated to 0 or 1 so use that to avoid logical operators
// in assignment expressions the expression evaluated to value assigned
//precedence is
// postfix ,unary
// unary
//multiplicative
//additive
//shift
//relational
//equality
//logical
//assignment