#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    struct timespec ti, tf;
    double elapsed;

    int i;
    int N = 900;
    
    int *a = (int *)malloc(N*sizeof(int));
    int *b = (int *)malloc(N*sizeof(int));
    int c = 10;
    int *d = (int *)malloc(N*sizeof(int));
    int *e = (int *)malloc(N*sizeof(int));

    
    clock_gettime(CLOCK_REALTIME, &ti);
        
    for (i=0; i<N; i++)
        {a[i] = a[i]+b[i]*c;}

    clock_gettime(CLOCK_REALTIME, &tf);
    elapsed =  (tf.tv_nsec - ti.tv_nsec);
    printf("El tiempo en nanosegundos que toma la función en C es %.1lf\n", elapsed);

    clock_gettime(CLOCK_REALTIME, &ti);

    for (i=0; i<N; i+=3)
    {
        d[i] = d[i]+e[i]*c;
        d[i+1] = d[i+1]+e[i+1]*c;
        d[i+2] = d[i+2]+e[i+2]*c;

    }

    clock_gettime(CLOCK_REALTIME, &tf);
    elapsed =  (tf.tv_nsec - ti.tv_nsec);
    printf("El tiempo en nanosegundos que toma la función en C es %.1lf\n", elapsed);

return 0;
}
