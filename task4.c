#include<stdio.h>
int main(){

float marks[100];    // taking a long lentgh for flexibilty
int choice;
int i = 0;
do
{
    printf("Enter Marks: ");
    scanf("%f",&marks[i]);
    i++;
    printf("Enter Other Student Marks? (Yes --1 / No -- 0): ");
    scanf("%d",&choice);
} while (choice==1);

for (int k = 0 ; k<(i); k++){
    printf("\nThe Marks Entered Are: %f",marks[k]);
    }
    printf("\nThe Total Number Of Students IS: %d",i);

    return 0;
}