/******************************************************************************

Realizar un programa que me calcule el area de un circulo

*******************************************************************************/
#include <stdio.h>
#include <math.h>
float areaCirculo(float);//Definicion de prototipo de funciones 
//float areaCirculo(float radio);
int factorial(int);
int tablaMult(int,int);

void main(){
    float radio;
    int num;
    int tabla,lim;
    printf("Area del circulo\n");
    printf("Ingrese el radio: ");
    scanf("%f",&radio);
    printf("El area del circulo es: %.2f\n",areaCirculo(radio));//Invocar o llamar a la funcion
    printf("Ingrese el numero: ");
    scanf("%i",&num);
    printf("El factorial es: %i\n",factorial(num));
    printf("Tabla de Multiplicar\n");
    printf("Ingrese la tabla: ");
    scanf("%i",&tabla);
    printf("Ingrese el limite: ");
    scanf("%i",&lim);
    tablaMult(tabla,lim);
    
}
float areaCirculo(float radio){
    float area=0,pi=3.1416;
    area=pi*pow(radio,2);
    return area;
}
int factorial(int num){
    int fact=1,cont=1;
    while(cont<=num){
        fact*=cont;
        cont++;
    }
    return fact;
}
int tablaMult(int tabla,int lim){
    int mult=1,cont=1;
    while(cont<=lim){
        mult=tabla*cont;
        printf("%iX%i=%i\n",tabla,cont,mult);
        cont++;
    }
    return mult;
}