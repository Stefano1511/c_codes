#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 3;
    int *A, *At;

    A = (int *)malloc(N*N*sizeof(int));
    At = (int *)malloc(N*N*sizeof(int));

    int i;
    for (i = 0;i < N*N;  i++)
    {A[i]=i+1;}
    for (i = 0;i <N*N; i++)
    {printf("%d, %p, \n",A[i],&A[i]);}

    printf("Transpuesta \n");
    int j;
    for (i = 0; i<N; i++)
        {for(j = 0; j<N;j++)
        {
            At[j*N+i]= A[i*N+j];
        }
    }
    for (i = 0;i <N*N; i++)
    {printf("%d, %p, \n",At[i],&At[i]);}
    free(A);
    free(At);
    return 0;
}