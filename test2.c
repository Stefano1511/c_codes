#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    struct timespec ti, tf;
    double elapsed;

    int i;
    int N = 4096;
    int *a = (int *)malloc((N+1)*sizeof(int));
    int *b = (int *)malloc((N+1)*sizeof(int));

    clock_gettime(CLOCK_REALTIME, &ti);
    a[0]=0;
    b[0]=0;
    for (i=1; i<=N; i++)
    {
	    if (i==1)
	        {a[i]=0;}
	    else if (i==N)
	        {a[i]=N;}
	    else
	        {a[i]=a[i]+8;}
    }
    clock_gettime(CLOCK_REALTIME, &tf);
    elapsed =  (tf.tv_nsec - ti.tv_nsec);
    printf("El tiempo en nanosegundos que toma la función en C es %lf\n", elapsed);


    clock_gettime(CLOCK_REALTIME, &ti);

    b[1]=0;	
    for (i=2; i<N; i++)
        {b[i]=b[i]+8;}
    b[N]=N;

    clock_gettime(CLOCK_REALTIME, &tf);
    elapsed =  (tf.tv_nsec - ti.tv_nsec);
    printf("El tiempo en nanosegundos que toma la función en C es %lf\n", elapsed);
return 0;
}
