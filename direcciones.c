#include <stdio.h>
#include <stdlib.h>
int suma(int x, int y);
int main(int argc, char **argv)
{
    int x = 10;
    int y = 20;
    int z;
    z = suma(x,y);
    printf("Programa de prueba de direcciones de memoria\n");
    
    printf("------------------------------\n");
    printf("argc está en %p\n",&argc);
    printf("argv está en %p\n", &argv);
    printf("------------------------------\n");
    printf("argv apunta a: %p\n",argv);
    printf("argv[0] contiene a: %s\n",argv[0]);
    printf("------------------------------\n");

    printf("x está en %p\n", &x);
    printf("y está en %p\n", &y);
    printf("z está en %p\n", &z);

    exit(0);
}

int suma(int x, int y)
{
    int z;
    z=x+y;
    return z;
}