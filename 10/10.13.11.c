#include<stdio.h>
void print_de2(int N, int M, int dou[N][M]);
void dou_arr(int N, int M, int source[N][M], int dou[N][M]);

int main()
{
    int source[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 3}, {4, 5, 6, 7, 8}};
    int dou[3][5];

    dou_arr(3, 5, source, dou);

    printf("The original array is:\n");
    print_de2(3, 5, source);
    printf("The doubled array is:\n");
    print_de2(3, 5, dou);

    return 0;
}

void print_de2(int N, int M,int dou[N][M])
{
    int i, m;
    for (i = 0; i < N; i++)
    {
        printf("{");
        for (m = 0; m < M; m++)
        {
            printf("%5.1d,", dou[i][m]);
        }
        printf("\b}\n");
    }
}

void dou_arr(int N, int M, int source[N][M], int dou[N][M])
{
    int i, m;
    for (i = 0; i < N; i++)
    {
        for ( m = 0; m < M; m++)
        {
            dou[i][m] = 2 * source[i][m];
        }
    }
    
}

