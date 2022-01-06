#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float totalpay=0.0;
    float taxes=0.0;
    float hours=0.0;
    float ctc=0.0;
    float overtime=0.0;
    printf("Enter the number of hours:\n");
    scanf("%f",&hours);
    if(hours<=40){
        totalpay = hours*12;
        if(totalpay<=300){
            taxes=totalpay*0.15;
            ctc = totalpay-taxes;
        }else if(totalpay>=300 && totalpay<=450){
            taxes= (300*0.15)+((totalpay-300)*0.20);
            ctc = totalpay - taxes;}
         else{
            taxes = (300*0.15)+(150*0.20)+((totalpay-450)*0.25);
            ctc = totalpay - taxes;

        }}
    else if(hours>=40){
        overtime = hours-40;
        totalpay= (40*12)+(overtime*18);
        taxes = (300*0.15)+(150*0.20)+((totalpay-450)*0.25);
        ctc = totalpay-taxes;
        }
    else{
        printf("invalid input");
    }
    printf("You worked for %.2f hours\n",hours);
    printf("Your Total pay is %.2f $\n",totalpay);
    printf("Your overtime hours are %.2f hours\n",overtime);
    printf("Your Taxes are %.2f $\n",taxes);
    printf("Your CTC is %.2f$\n",ctc);









    return 0;
}
