#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 10; i++)
    {
        for (int a = 1; a <= 10; a++)
        {
            printf("%d x %d = %d\t", i, a, a * i);
        }
        printf("\n");
    }
    fflush(stdin);
    getchar();
    return 0;
}
