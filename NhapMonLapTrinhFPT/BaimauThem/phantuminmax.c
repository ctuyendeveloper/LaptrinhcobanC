#include <stdio.h>
 
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
}
 
int min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}
int main()
{
    int a[1000];
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
    nhap(a, n);
    printf("\nMax = %d", max(a, n));
    printf("\nMin = %d", min(a, n));
    fflush(stdin);
    getchar();
    return 0;
}