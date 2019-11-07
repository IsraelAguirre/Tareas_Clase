/******************************************************************************

Realizar un programa que me calcule el area de un circulo

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float areaCirculo(float);//Definicion de prototipo de funciones 
//float areaCirculo(float radio);
int factorial(int);
int tablaMult(int,int);
void parImpar(int);
int Numposinegacero(int);

void main(){
    float radio;
    int num;
    int tabla,lim;
    int op;
    int cantNum,cont=1,contN=0,contP=0,contcero=0;
    
    do{
     printf("1.Area del circulo\n2.Factorial\n3.Tabla Multiplicar\n4.Par Impar\n5.Numeros positivo,negativos o ceros\n6.Salir\n");
     printf("Escoja la opcion: ");
     scanf("%i",&op);
    
     switch(op){
        case 1:
         printf("Area del circulo\n");
         printf("Ingrese el radio: ");
         scanf("%f",&radio);
         printf("El area del circulo es: %.2f\n",areaCirculo(radio));//Invocar o llamar a la funcion
         getchar();
         getchar();
         system("clear");
         break;
        case 2:
         printf("Factorial\n");
         printf("Ingrese el numero: ");
         scanf("%i",&num);
         printf("El factorial es: %i\n",factorial(num));
         getchar();
         getchar();
         system("clear");
         break;
         
         case 3:
         printf("Tabla de Multiplicar\n");
         printf("Ingrese la tabla: ");
         scanf("%i",&tabla);
         printf("Ingrese el limite: ");
         scanf("%i",&lim);
         tablaMult(tabla,lim);
         getchar();
         getchar();
         system("clear");
         break;
         
         case 4:
         printf("Par o Impar\n");
         printf("Ingrese el numero: ");
         scanf("%i",&num);
         parImpar(num);
         getchar();
         getchar();
         system("clear");
         break;
         
         case 5:
         printf("Numeros positivo,negativos o ceros\n");
         printf("Ingrese la cantidad de numeros:");
         scanf("%i",&cantNum);
         Numposinegacero(cantNum);
         getchar();
         getchar();
         system("clear");
         break;
        
         case 6:
         printf("Fin del programa\n");
         exit(0);
         break;
         
         default:
         printf("Opcion Invalida");
         break;
         }
     }while(op<=5);
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
void parImpar(int num){
    if(num%2==0 && num!=0)
    printf("Par\n");
    else if(num!=0)
    printf("Impar\n");
}

int Numposinegacero(int cantNum){
    int cont=1,num,contN=0,contP=0,contcero=0;
    while(cont<=cantNum)
    {
        printf("Ingrese el numero: ");
        scanf("%i",&num);
        
        if(num>0)
        contP++;
        else if(num<0)
        contN++;
        else
        contcero++;
        
        cont++;
    }
     printf("\nNumeros positivos: %i\n",contP);
     printf("Numeros negativos: %i\n",contN);
     printf("Numeros ceros: %i\n",contcero);
    return contN,contP,contcero;
}