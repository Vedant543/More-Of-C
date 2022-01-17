#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    int i=5;
    time_t t;
    srand((unsigned)time(&t));
    num = rand()%21;
    int yg;
    printf("You have 5 tries to guess the number between 1 and 20\n");
    for(i=5;i>=0;i--){
        printf("You have %d tries left\n",i);
        printf("Enter your guess\n");
        scanf("%d",&yg);
        if(num == yg){
            printf("You guessed it!!\n");
            break;
        }else if(num>yg){
            printf("guess higher\n");
        }else{
            printf("guess lower\n");
        }if(i==0){
            printf("out of guesses");
        }else{
            printf(".");
        }


        }





    return 0;
}
