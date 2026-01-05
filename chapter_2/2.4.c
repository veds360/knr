#include<stdio.h>


void squezze(char s1[],char s2[]){
    
    
    int ptr=0;
    char flag=0;
    for(int i=0;s1[i]!='\0';i++){
      //  printf("%d\n",i);
        for(int j=0;s2[j]!='\0';j++){
           // printf("hi");
            if(s1[i]==s2[j]){
                flag=1;
                
                break;
            }
            
        }
       
        if(!flag){
            s1[ptr++]=s1[i];
            
        }
        flag=0;
        
    }
    s1[ptr]='\0';
}

int main(){
    char  str1[]="abcded";
    char str2[]="de";
    squezze(str1,str2);
    printf("%s",str1);
}


// string literals are immutable so char * s1 wont work so gotta use charachter arrays
