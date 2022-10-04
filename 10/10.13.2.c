#include<stdio.h>
void print_array(double *n);
void copy_arr(double *target1, double *source, int i);
void copy_ptr(double *target2, double *source, int i);
void copy_prts(double *target3, double *source, double*source2);
int main()
{   

    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];


    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_prts(target3, source, source + 5);

    //check
    print_array(target1);
    print_array(target2);
    print_array(target3);

    return 0;
}

//print the array
void print_array(double *n){
    int i;
    printf("The array is {");
    for (i = 0; i < 5; i++)
        printf("%2.1f,", n[i]);
    printf("\b}\n");
}

void copy_arr(double *target1, double *source, int n){
    int i;
    for (i = 0; i < n; i++)
        target1[i] = source[i];
}

void copy_ptr(double *target2, double *source, int n){
    int i;
    for (i = 0; i < n; i++)
        *(target2 + i) = *(source + i);
}

void copy_prts(double *target3, double *source, double*source2){
    int i;
    for (i = 0; source + i < source2; i++)
        *(target3 + i) = *(source + i);
        
}
