#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float calories;
    for (i=0;i<=30;i++){
            if(i==10){
                printf("%d minutes\n",i);
                calories = 3.9*i;
                printf("%.2f calories burnt\n",calories);
            }else if(i==15){
                printf("%d minutes\n",i);
                calories = 3.9*i;
                printf("%.2f calories burnt\n",calories);
            }else if(i==20){
                printf("%d minutes\n",i);
                calories = 3.9*i;
                printf("%.2f calories burnt\n",calories);
            }else if(i==25){
                printf("%d minutes\n",i);
                calories = 3.9*i;
                printf("%.2f calories burnt\n",calories);
            }else if(i==30){
                printf("%d minutes\n",i);
                calories = 3.9*i;
                printf("%.2f calories burnt\n",calories);

            }else{
                 printf("%d minutes\n",i);

            }
    }


    return 0;


}
