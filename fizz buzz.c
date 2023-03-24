#include <stdio.h>
 
int main() {
  // Code here
  int i;
  for(i=1; i<=10; ++i){
        if (i % 3 == 0) {
            printf("Fizz");
        }
        if (i % 5 == 0) {
            printf("Buzz");
        }
        if ((i % 3 != 0) && (i % 5 != 0)) {

        
            printf("number=%d", i);
        }
        printf("\n");
    }
}
