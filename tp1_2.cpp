#include <stdio.h>


int Cuadrado (int numero);
void Cuadrado2(int numero);
int mostrarPuntero(int *cantidad);
void Invertir(int a,int b); //deberá devolver en el valor de a en la variable b, y en el valor de b el valor de a
void orden(int a,int b); //deberá devolver en el valor de a el valor más chico, y en el valor de b el valor más grande
int main() {
    
 return 0;
}

int Cuadrado(int numero){
    return numero * numero;
}
void Cuadrado2(int numero){
    printf("%d",numero * numero);
}

int mostrarPuntero(int *cantidad) {
  printf("%d",&cantidad);
  printf("%d",*cantidad);
}

void Invertir(int a,int b){
    int aux = a;
    a = b;
    b = aux;
    printf("los valores invertidos son: %d - %d",a,b);
}

void orden(int a,int b){
    if (a<b)
    {
        printf("a = %d - b= %d",a, b);
    }
    else
    {
         printf("a = %d - b= %d",b, a);
    }
    
    
}