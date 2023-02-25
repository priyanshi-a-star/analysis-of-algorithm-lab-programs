#include<stdio.h>
#include<conio.h>
#include<string.h>

int max(int x,int y)
{
    return (x>y) ? x: y ;
}
int lps(char* str)
{
    int n=strlen(str);
    int i,j, cl;
    int L[n][n];

    for (i=0;i < n;i++)
    L[i][i] = 1;
    for (cl = 2;cl <=n; cl++)
    {
        for (i=0;i < n- cl + 1;i++)
        {
            
        }
    }
}