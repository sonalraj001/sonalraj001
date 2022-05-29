#include<stdio.h>
int main()
{
    int a1[2][2], a2[2][2],a3[2][2];
    
    int i,j;
    int sum;
    printf("enter the 1 st matirc");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("[%d] [%d]",i,j);
            scanf("%d",&a1[i][j]);

        }
    }
    printf("second martix\n");

      for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("[%d] [%d]",i,j);
            scanf("%d",&a2[i][j]);
        }
        printf("\n");
    }
       return 0;
       

    
    
    
}