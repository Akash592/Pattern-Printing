/*

           ******
           *    *
           *    *
           ******


*/

#include<stdio.h>

void Display(int iRows,int iColumns)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRows; i++)
    {
        for(j = 1; j <= iColumns; j++)
        {
            if(i == 1 || i == iRows || j == 1 || j == iColumns)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iRows = 0;
    int iCols = 0;

    printf("Enter the number of rows : \n");
    scanf("%d",&iRows);

    printf("Enter the number of Columns : \n");
    scanf("%d",&iCols);

    Display(iRows,iCols);

    return 0;
}