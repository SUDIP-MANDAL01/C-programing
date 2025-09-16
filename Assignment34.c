#include <stdio.h>
int main (){
 int n , i , sum=0;
 printf ("Enter an integer to find the sum of fibonacci series up to that integer\n");
    scanf ("%d", &n);
        int t1=0, t2=1, nextTerm;
        for (i=1; i<=n; ++i){
            sum=sum+t1;
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        
    printf ("Sum of fibonacci series up to %d is: %d\n", n, sum );
}
