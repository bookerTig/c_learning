#include<stdio.h>
double back_max_min(double *n);
int main()
{

    double n[10] = {5.5, 6.3, 8.2, 6.4, 12.6, 1.1, 9.6, 18.2, 5.6, 7.3};
    int i;
    printf("The array is {");
    for (i = 0; i < 10; i++)
        printf("%3.1f,", n[i]);
    printf("\b}\n");


    printf("%3.1lf", back_max_min(n));

    return 0;
}

//The answer function is here
double back_max_min(double *n){
    double max, min;
    int i;
    max = n[0];
    min = n[0];
    for (i = 1; i < 10; i++)
        {
            if (max < n[i])
                {
                    max = n[i];
                    //printf(" max:%3.1lf", max);       //test
                }
            if (min > n[i])
                {
                    min = n[i];
                    //printf(" min:%3.1lf", min);       //test
                }
        }
    return max-min;
}