#include<stdio.h>

void copy_arr(double *target1, double *source, int i);

int main()
{
    double source[3][3]=
        {
        {2.2, 3.3, 5.5},
        {2.5, 4.5, 24.3}, 
        {5.4, 3.9, 8.6}
        };
    double target1[3][3];
    int i = 3, m = 3;

    //copy and paste
    for (i = 0; i < 3; i++)
        copy_arr(target1[i], source[i], m);

    //check
    for (i = 0; i < 3; i++)
    {
        for (m = 0; m < 3; m++)
        {
            printf("%3.1lf ", target1[i][m]);
        }
        printf("\n");
    }

    return 0;
}

void copy_arr(double *target1, double *source, int n){
    int i;
    for (i = 0; i < n; i++)
        target1[i] = source[i];
}