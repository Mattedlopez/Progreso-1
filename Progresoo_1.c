#include <stdio.h>

int es_primo(int a){// inicidio de funcion de verificacion si es par
    int i, j = 0;//declaracion de variables
    for (i = 0; i * i <= a; i++){ //lazo for que incrementa 
        if (a % i == 0) {//condicion para saber si es divisible
            j++;
        }
    }
    return (j == 0);// valor dque devuelve la funcion
}

int es_par(int a) {//inicio de funcion primo
    return (a % 2 == 0);//valor de retorno de funcion
}

int main() {//inicioo de main
    int a[20];//arreglo
    int n, i, x = 0, primos = 0, pares = 0;//variables tipo int
    float p_primos, p_pares;//pocentajes

    printf("\nIngresa la cantidad de numeros que vas a ingresar: ");//ingreso de n numeros 
    scanf("%d", &n);

    for (i = 0; i < n; i++) {//primer lazo for
        printf("\n%d: Ingresa un numero: ", i+1);//repeticion de ingreso de numeros a evaluar
        scanf("%d", &a[i]);

        x = es_primo(a[i]);//asignaciond de valor de funcion
        printf("\nx (primo)=%d", x);//conteo de numeros primos impreso
        primos += x;//acumulacion en variable

        if (es_par(a[i])) {//condicion if
            pares++;//aumento  en contador de pares
        }

        printf("\nTotal numeros primos hasta ahora: %d", primos);//llevar cuentas de primos
        printf("\nTotal numeros pares hasta ahora: %d", pares);//lleva cuentas de pares
    }

    p_primos = ((float)primos/(float)n)*(float)100; //asignacion de valor de porcentajes
    printf("\nTotal numeros primos: %d\n", primos);//impresion cantidad de numeros primos
    printf("\nPrimos: %f\%\n", p_primos);//porcentaje de primos

    p_pares = ((float)pares/(float)n)*(float)100;//valor de porcentajes
    printf("Total numeros pares: %d\n", pares);//impresion de cantidad de numeros pares
    printf("\nPares: %f\%\n", p_pares);//porcentaje de pares

    return 0;//fin de main
}