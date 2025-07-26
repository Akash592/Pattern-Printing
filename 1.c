/*
           
           ****
           ****
           ****
           ****

*/

#include<stdio.h>

void Display(int iRows)
{
    int i = 0;
    int j = 0;
    for(i = 1; i <= iRows; i++)
    {
        for(j = 1; j <= iRows; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iRows = 0;

    printf("Enter the number of rows :\n");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}