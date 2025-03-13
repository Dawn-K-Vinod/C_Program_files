#include <stdio.h>
//A C program to print numbers from 1 to 10, but stop printing when the number is 5.
int main()
{
    int i;
    for(i=1; i<=10; i++)
    {
        if(i==5)
        {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}
