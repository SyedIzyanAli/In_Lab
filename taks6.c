#include<stdio.h>
int main(){

float amount;
float money;
int count = 0;
while (true)
{
    printf("Enter The Amount: ");
    scanf("%f",&amount);
    money += amount;
    if (amount<=0)
    {

        break;
    }
    if (amount>0)
    {
                    ++count;

    }
    
    

}
printf("\nThe Total Money Saved is: %f",money);
printf("\nThe Total Number Of Deposits is: %d",count);


    return 0;
}