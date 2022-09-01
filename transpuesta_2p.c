#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int N = 3;
    int **A, **At;
    
    A = (int **)malloc(N*sizeof(int*));
    At = (int **)malloc(N*sizeof(int*));
    for (i = 0; i<N; i++)
    {
        A[i]= (int*)malloc(N*sizeof(int));
        At[i]= (int*)malloc(N*sizeof(int));
    }

    int count =1;
    for (i = 0; i<N; i++)
        {for (j = 0; j<N;j++)
            {      
                A[i][j]=count++;
            }
        }

    for (i = 0; i<N; i++)
        {for (j = 0; j<N;j++)
            {      
                printf("%d %p \n",A[i][j],&A[i][j]);
                // printf("%d ", A[i][j]);
            }
            printf("\n");
        }
    printf("Transpuesta \n");
    //printf("%p, %p \n", &A[6][0],&At[0][0]);
    for (i = 0; i<N; i++)
        {for (j = 0; j<N;j++)
            {      
                //printf("%d %p \n",A[i][j],&A[i][j]);
                printf("%d ", At[i][j]);
            }
            printf("\n");
        }
    
    for (i = 0; i<N; i++)
        {for (j = 0; j<N;j++)
            {      
                // printf(" %d, %d, \n",i,j);
                At[j][i]=A[i][j];
            }
        }
    
    for (i = 0; i<N; i++)
        {for (j = 0; j<N;j++)
            {      
                //printf("%d %p \n",A[i][j],&A[i][j]);
                printf("%d ", At[i][j]);
            }
            printf("\n");
        }
    for (i=0;i<N;i++)
        {free(A[i]);}
    free(A);
    for (i=0;i<N;i++)
        {free(At[i]);}
    free(At);
return 0;
}