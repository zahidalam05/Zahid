#include<stdio.h>
#include<string.h>
int main()
{
    struct s{
        char a;
        int s;
        char p;
    };
    printf("size of character a=%d",sizeof(int));
    printf("\n size of integer s=%d",sizeof(char));
    printf("\n size of character p= %d",sizeof(char));
    printf("\n total size of struct =%d",sizeof(struct s));
    return 0;
}