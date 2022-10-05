#include<stdio.h>

void reverse_order(double *n);

int main()
{

    double n[10] = {5.5, 6.3, 8.2, 6.4, 12.6, 1.1, 9.6, 18.2, 5.6, 7.3};
    int i;

    //print the example array
    printf("The example array is \n{");
    for (i = 0; i < 10; i++)
        printf("%3.1f,", n[i]);
    printf("\b}\n");

    //using the answer function
    reverse_order(n);

    //check the result
    printf("The reverse-order array is \n{");
    for (i = 0; i < 10; i++)
        printf("%3.1f,", n[i]);
    printf("\b}\n");

    return 0;
}

//The answer function is here
void reverse_order(double *n){
    double answer[10];
    int i;
    for (i = 0; i < 10; i++)
        answer[i] = n[9 - i];

    for (i = 0; i < 10; i ++)
        n[i] = answer[i];
}
