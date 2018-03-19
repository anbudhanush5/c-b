#include<stdio.h>
#include<conio.h>
void  main()
{
    int l;
    int i,j;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
    
    
}
