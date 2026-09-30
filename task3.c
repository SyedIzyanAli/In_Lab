#include<stdio.h>
int main(){

    int i;
while (true)
{
    printf("Enter Number: ");
    scanf("%d",&i);
    if (i==0)
    {
        break;
    }
    
    int cube = i*i*i;
    printf("The Cube Of the Entered Number is: %d\n",cube);
    
}


    return 0;
}