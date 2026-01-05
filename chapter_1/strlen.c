#include<stdio.h>

int strrlen(char s[]){
    int i=0;
    while (s[i]!='\0')
    {
        i++;
    }
    return i;
    
}

int main(){
    char * name="ved";
    int len=strrlen(name);
    printf("%d",len);

    enum months {JAN=1,FEB,MARCH,APRIL,MAY,JUNE,JULY ,AUG};
    enum months curr=FEB;

    printf("%d",curr);//2;
}


// string is an array of charachters 
// \" " to use double quotes

// global and global static variables and structures like arrays initialized to 0 by defalt
//local static var like in functions only once initialized to 0, other local things have garbage as they reside on stack heap also has garbage values