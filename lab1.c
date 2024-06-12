#include<stdio.h>

int main(){

    char *str = "sitaram";
    int a = sizeof(*str);

  

    printf("%c", str[0]);
    printf("%c", str[1]);
    printf("%c", str[2]);
    printf("%c", str[3]);
    printf("%c", str[4]); 
    printf("%c", str[5]);
    printf("%c \n",str[6]);

    
    printf("%c", str[0] - 32);
    printf("%c", str[1] - 32);
    printf("%c", str[2] - 32);
    printf("%c", str[3] - 32);
    printf("%c", str[4] - 32); 
    printf("%c", str[5] - 32);
    printf("%c", str[6] - 32);


     

      
   

    return 0;
}