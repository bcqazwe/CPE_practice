#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input,total,get,left;
    while(scanf("%d",&input) != EOF)
    {
        total = input;
        get = input / 3;
        left = input % 3;
        total = total + get;
        while(get + left >= 3)
        {
            int add = get + left;
            get = add / 3;
            total = total + get;
            left = add % 3;
        }
        if(get + left == 2)
        {
            total = total + 1;
        }
        printf("%d\n",total);
    }
}