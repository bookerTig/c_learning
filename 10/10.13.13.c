#include<stdio.h>

void input(double source[][5]);
void print_de2(double source[][5]);//this function is to check numbers are correctly entering the array
void group_ave(double source[][5]);
void ave(double source[][5]);
void find_max(double source[][5]);

int main()
{
    double source[3][5];

    //input
    printf("Please enter three groups of float numbers.\n");
    printf("Every group contains five numbers.");
    printf("(divided by space):\n");
    input(source);

    //calculate the average
    group_ave(source);
    ave(source);

    //show the biggest number in the array
    find_max(source);

    //print_de2(source);
}


void input(double source[][5]){
    int i, m;
    for (i = 0; i < 3; i++)
        scanf("%lf %lf %lf %lf %lf", &source[i][0], &source[i][1], &source[i][2], &source[i][3], &source[i][4]);
}

void print_de2(double source[][5]){  //this function is to check numbers are correctly entering the array
    int i, m;
    for (i = 0; i < 3; i++){
        printf("{");
        for (m = 0; m < 5; m++)
            printf("%5.1lf,", source[i][m]);
        printf("\b}\n");
    }
}

void group_ave(double source[][5]){
    int i, m;
    double subtot;
    for (i = 0; i < 3; i++){
        for ( m = 0; m < 5; m++)
            subtot += source[i][m];
        printf("The average of the group%d is : %5.1lf\n", i, subtot / 5);
    }
}

void ave(double source[][5])
{
    int i, m;
    double total;
    for ( i = 0; i < 3; i++)
        for ( m = 0; m < 5; m++)
            total += source[i][m];
    printf("The average of all the numbers is: %3.1lf\n",total/15);
}

void find_max(double source[][5])
{
    int i, m;
    double max = 0;
    for (i = 0; i < 3; i++)
        for (m = 0; m < 5;m++)
            if (max < source[i][m])
                max = source[i][m];
    printf("The biggest numbers in the array is: %3.1lf\n", max);
}


