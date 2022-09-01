#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void suma_compleja(float *real, float *imag, float *suma_real, float *suma_imag, int N);
void multiplicacion_compleja(float *real, float *imag, float *mul_real, float *mul_imag, int N);

void ini_vector(float *vec, int N);

int main()
{

    int N = 4;
    float *real = (float *)malloc(N*sizeof(float));
    float *imag = (float *)malloc(N*sizeof(float));

    ini_vector(real,N);
    ini_vector(imag,N);

    float suma_real = 0;
    float suma_imag = 0;
    float mul_real = 0;
    float mul_imag = 0;

    suma_compleja(real, imag, &suma_real, &suma_imag, N);
    multiplicacion_compleja(real, imag, &mul_real, &mul_imag, N);

    printf("El resultado es %.2f + %.2fi \n",suma_real,suma_imag);
    printf("El resultado es %.2f + %.2fi \n",mul_real,mul_imag);
return 0;
}

void suma_compleja(float *real, float *imag, float *suma_real, float *suma_imag, int N)
{
    for (int i=0; i<N; i++)
    {
        suma_real[0] = suma_real[0]+ real[i];
        suma_imag[0] = suma_imag[0]+ imag[i];

    }
}

void multiplicacion_compleja(float *real, float *imag, float *mul_real, float *mul_imag, int N)
{
    float dummy_real = real[0];
    float dummy_imag = imag[0];
    for (int i=0; i<(N-1); i++)
    {
        printf("%f * %f - %f %f \n", dummy_real,real[i+1],dummy_imag,imag[i+1]);
        mul_real[0] =  dummy_real*real[i+1]-dummy_imag*imag[i+1];
        printf("%f * %f + %f %f \n", dummy_real,imag[i+1],dummy_imag,real[i+1]);
        mul_imag[0] = dummy_real*imag[i+1]+dummy_imag*real[i+1];
        dummy_real = mul_real[0];
        dummy_imag = mul_imag[0];
    }
}


void ini_vector (float *vec, int N)
{
    for (int i = 0; i<N; i++)
    {
        vec[i] = i+1;
    }
}
