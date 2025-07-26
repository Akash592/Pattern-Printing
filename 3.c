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
    int iCnt = 0;

    for(i = 1; i <= iRows; i++)
    {
        for(j = 1; j <= iRows + iCnt; j++)
        {
            if(j >= i && j <= iRows + iCnt)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        iCnt++;
    }

}

int main()
{

    int iRows = 0;

    printf("Enter the number of rows:\n");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}