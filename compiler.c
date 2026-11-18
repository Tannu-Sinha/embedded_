#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int main() {
    int guess;
    printf("guess the number btwn 1-100 \t");
    int num, n;
    char a, p;  
    const char *c; 
    srand(time(NULL));
    int i;
    n = 7;
    do {
        num = rand() % 100 + 1;
         for (i = 1 ; i <= n; i++) {
             scanf("%d", &guess);  
             if (guess > num || guess < num) {
                c = guess > num ? "too high" : "too low";
                if (i < n) {
                  printf(" %s ! remaining attemps are %d \t try again! \n",c , n-i);
                } else {
                    printf("you ran out of chances. \n");
                    printf("the secret num is %d", num);
                } 
              } else if (guess == num) {
                   printf("you got it!\n");
                   break; 
              } else {
                  printf("no input received");
                  printf("please try again! \n");
              }
 
            }
         printf("do you want to play again? Y/N");
         scanf("  %c", &a);
         if (a == 'Y' || a == 'y') {
              printf("do you want to change the no. of tries ? Y/N  ");
              scanf(" %c", &p);  // remember putting space before %c
              if (p == 'Y' || p== 'y') {
                  printf("enter no. of tries");
                  scanf("%d", &n);
                } else {
                  printf("lets keep it 7 then");
                }
              printf("enter your guess");
          
           }
    }  while(a == 'Y' || a == 'y');
    return 0;
    
}
