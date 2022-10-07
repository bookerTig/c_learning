#include<stdio.h>
#define ROWS 3
#define COLS 5

void copy_de2(int N, int M, double source[N][M],double target[N][M]);
void print_de2(int N, int M, double target[N][M]);

int main()
{
    double source[ROWS][COLS] =
        {
            {3.4, 2.3, 6.8, 12.4, 5.2},
            {5.6, 7.8, 12.4, 2.1, 1.9},
            {3.8, 4.5, 2.7, 2.3, 9.1}};
    double target[ROWS][COLS];

    copy_de2(ROWS, COLS, source, target);
    printf("Here is the result of copying:\n");
    printf("The source array is:\n");
    print_de2(ROWS, COLS, source);
    printf("The target array is :\n");
    print_de2(ROWS, COLS, target);

    return 0;
}

void print_de2(int N, int M,double target1[N][M])
{
    int i, m;
    for (i = 0; i < N; i++)
    {
        printf("{");
        for (m = 0; m < M; m++)
        {
            printf("%5.1lf,", target1[i][m]);
        }
        printf("\b}\n");
    }
}

void copy_de2(int N, int M, double source[N][M],double target[N][M])
{
    int i, m;
    for ( i = 0; i < N; i++){
        for ( m = 0; m < M; m++)
        {
            target[i][m] = source[i][m];
        }
    }

}