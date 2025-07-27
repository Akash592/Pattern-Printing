#include<stdio.h>

void Display(int iRow,int iCols)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    
    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = 1; iCnt2 <= iCols; iCnt2++)
        {
            printf("* ");
        }
        printf("\n");
    }

}

int main()
{
    int iRows = 0;
    int iCols = 0;

    printf("Enter the number of rows :\n");
    scanf("%d",&iRows);

    printf("Enter the number of columns :\n");
    scanf("%d",&iCols);

    Display(iRows,iCols);

    return 0;
}