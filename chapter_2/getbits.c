#include<stdio.h>

unsigned int getbits(unsigned x,int p,int n){
    return (x>>(p+1-n))&~(~0<<n);
}

int main(){
    int x=18;
    unsigned int ans=getbits(x,3,3);
    printf("%d",ans);
}


// get n bits from number x starting from position p to the right
// so if number is 10010 in binary ,p is 3 and n is 3 then we get bits 001 