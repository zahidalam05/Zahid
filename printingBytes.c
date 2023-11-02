#include<stdio.h>
int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    char*p=(char*)&n;
    for(int i=0;i<sizeof(int);i++)
    {
        printf(" \n %u --> %d ",p,*p);
        p++;
    }

    return 0;
}