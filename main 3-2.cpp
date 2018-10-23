#include <conio.h>
#include <stdio.h>
 
int main()
{ 
    int n,x=0,i,j;
    printf("vvedite chislo:\n");
    scanf("%d",&n);
    for (int i=1; i<n; i++)
    {
        for (int j=i; j<n; j++)
             if (i*i*i+j*j*j==n) 
                  x++;
    }
    printf("%d\n", x);
 
    getch();
    return 0;
}
