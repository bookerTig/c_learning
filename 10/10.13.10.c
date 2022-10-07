#include<stdio.h>
void add_copy(double *source1, double *source2, double *target, int n);

int main()
{
    double source1[4] = {3.3, 4.5, 6.1, 9.2};
    double source2[4] = {3.1, 9.3, 12.3, 0.2};
    double target[4];
    int n = 4;
    int i;
    add_copy(source1, source2, target, n);

//show the result
    printf("Here is the result:\n");
    printf("{");
    for (i = 0; i < n; i++)
    {
        printf("%3.1lf,", target[i]);
    }
    printf("\b}");
}


void add_copy(double *source1, double *source2, double *target, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        target[i] = source1[i] + source2[i];
    }
}
