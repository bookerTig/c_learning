#include<stdio.h>
int back_max_sub(double *n);
int main()
{
     //用于测试函数的数组
     double n[10] = {5.5, 6.3, 8.2, 6.4, 12.6, 1.1, 9.6, 18.2, 5.6, 7.3};
     int i;
    printf("The array is {");
    for (i = 0; i < 10; i++)
        printf("%3.1f,", n[i]);
    printf("\b}\n");

         //函数
         printf("%d", back_max_sub(n));
     return 0;
}

//The answer function is here
int back_max_sub(double *n){
    double max;
    int i;
    int max_sub;
    max = n[0];
    max_sub = 0;
    for (i = 1; i < 10; i++)
        if (max < n[i]){
            max = n[i];
            max_sub = i;
        }
    return max_sub;
}