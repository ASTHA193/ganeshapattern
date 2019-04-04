#include<stdio.h>
int i;
int j;
int main()
{
    for(i=0;i<=8;i++)
    {
        for(j=0;j<=8;j++)
        {
            if(i==4 || j==4)
            {
                printf("*");
            }
             else if(( i<4 && j==0)||(i==0 && j>4))
            {
                printf("*");
            }
             else if((i==8 && j<4 )||( i>4 && j==8))
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
