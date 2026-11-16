#include <stdio.h>
int main(void){
      int number;
      printf("Enter number:" );
      scanf (" %d", &number );
      if((number%2) != 0){
      printf ("This number is odd\n");
    } else {
    printf("This number is even\n" );
    }
    return 0;
}