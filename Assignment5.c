#include<stdio.h>
  int main(){
    float principal, rate, time, simple_interest;
       
    printf("Enter principal amount:\n");
      scanf("%f", &principal);
             
         printf ("Enter rate of interest(in %% per annum):\n");
           scanf("%f", &rate);
                 
                 printf("Enter time (in years):\n");
                   scanf("%f", &time);
                       
                   simple_interest = (principal * rate * time) / 100;
    
         printf("\nSimple Interest is: %2f\n", simple_interest);
            
             
                       return 0;  
                    
                    }