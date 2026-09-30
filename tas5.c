#include<stdio.h>
int main(){

float temp[7];
float tot_temp = 0.0;

for (int i = 0; i < 7; i++)
{
    printf("Enter Tempreture: ");
    scanf("%f",&temp[i]);
    tot_temp += temp[i];
}
printf("The Tempretures entered are: ");
for (int k = 0; k < 7; k++)
{
    printf("\n%f",temp[k]);
}

printf("\nThe Total Temp is: %f",tot_temp);
    printf("\nThe Tempretures Greater Than 100 are: ");

for (int j = 0; j < 7; j++)
{
    if (temp[j]>100)
    {
        printf("\n%f",temp[j]);
    }
    
}
    return 0;
}