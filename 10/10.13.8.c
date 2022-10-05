#include<stdio.h>

void copy_arr(double *target1, double *source, int i);

int main()
{
    double source[7] = {3.2, 6.7, 4.3, 17.5, 23.4, 2.0, 8.9};
    double target1[3];
    int i;

    copy_arr(target1, &source[2], 3);

    //check
    printf("{");
    for (i = 0; i < 3; i++)
        printf("%3.1lf,", target1[i]);
    printf("\b}");
}

void copy_arr(double *target1, double *source, int n){
    int i;
    for (i = 0; i < n; i++)
        target1[i] = source[i];
}