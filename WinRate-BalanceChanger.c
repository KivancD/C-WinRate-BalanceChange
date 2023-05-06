#include <stdio.h>

int main(void)
{
    float start_balance;
    float balance;
    float percent;
    int trade_count=0;
    int i;
    int win=0;
    
    printf("\nHow much is your start balance >> ");
    scanf("%f",&start_balance);
    balance=start_balance;
    
    while(1){
        printf("\n1- Win\n2- Lose\n0- Show My Results \n\nEnter the number>> ");
        scanf("%2d",&i);
        if(i==1){
            printf("\nHow much percent win>> ");
            scanf("%10f",&percent);
            win++;
            trade_count++;
            balance = ((balance*percent)/100)+balance;
            printf("\nNew Balance >> %.2f\n\n", balance);
        }
        else if(i==2){
            printf("\nHow much percent lose >> ");
            scanf("%10f",&percent);
            trade_count++;
            balance = balance-((balance*percent)/100);
            printf("\nNew Balance >> %.2f\n\n", balance);
        }
        else if(i==0){
            break;
        }
        else{
            printf("\nWrong selection.\n\n");
        }
    }
    
    
    printf("\n\n-----Results-----");
    printf("\nStart Balance >> %.2f", start_balance);
    printf("\nNew Balance >> %.2f", balance);
    printf("\nTotal Trades >> %d", trade_count);
    printf("\nWin Number >> %d",win);
    printf("\n----------------------");
    

    return 0;
}
