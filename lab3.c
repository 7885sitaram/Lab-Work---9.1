#include<stdio.h>

int main(){

    char *str = "sItaRaM";

   for (int i = 0; i <= 7; i++)
   {
  

    if (str[i] < 90)
    {
        // printf("%c ", str[i]);

        
         printf("%c ", str[i] + 32);

    }

    else{

        printf("%c ", str[i] - 32);
    }
    
   }
   



    


    
}