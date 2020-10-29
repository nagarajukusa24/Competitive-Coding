#include<stdio.h>


int main ()

{

     int n;

     scanf("%d", &n);


     if(((n % 4) == 0) || ((n % 7) == 0) || ((n % 44) == 0) || ((n % 47) == 0) | ((n % 74) == 0) || ((n %

     444) == 0) || ((n % 447) == 0) || ((n % 474) == 0) || ((n % 477) == 0))

     {

           printf("YES\n");

     }


     else

     {

           printf("NO\n");

      }


      return 0;

}