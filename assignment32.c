#include <stdio.h>
int main (){
  int n , i, sum=0;
  printf ("Enter an integer to find the sum of natural numbers up to that integer\n");
    scanf ("%d", &n);
        for (i=1; i<=n; i++){
                sum=sum+i;
            }
    printf ("Sum of natural numbers up to %d is: %d\n", n, sum);
    
    return 0;
}
