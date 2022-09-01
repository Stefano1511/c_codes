#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    struct timespec ti, tf;
    double elapsed;
    
    int N = 4*4096;
    int *a = (int *)malloc(N*sizeof(int));
    int *b = (int *)malloc(N*sizeof(int));
    int *c = (int *)malloc(N*sizeof(int));
    int *d = (int *)malloc(N*sizeof(int));
    short i;
        
    clock_gettime(CLOCK_REALTIME, &ti);
    a[0]=0;
	b[0]=0;
    for (i=1;i<N;i++)
	{a[i]=a[i]+3;}

	for (i=1;i<N;i++)
	{b[i]=b[i]+4;}
    clock_gettime(CLOCK_REALTIME, &tf);
    
    elapsed =  (tf.tv_nsec - ti.tv_nsec);
    printf("El tiempo en nanosegundos que toma la función en C es %lf\n", elapsed);

    clock_gettime(CLOCK_REALTIME, &ti);

    c[0]=0;
	d[0]=0;
	for (i=1;i<N;i++)
	{c[i]=c[i]+3;
	 d[i]=d[i]+4;}
    
    clock_gettime(CLOCK_REALTIME, &tf);
    elapsed =  (tf.tv_nsec - ti.tv_nsec);
    printf("El tiempo en nanosegundos que toma la función en C es %lf\n", elapsed);

}