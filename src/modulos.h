#ifndef MODULOS_H_
#define MODULOS_H_

//SIMPLE OR MULTIPLE RECURSION:
//PRE: Recibe un number mayor o igual a cero
//POST: Devuelve el factorial
int factorial(int number);

//factorial1 y factorialRecursivoDeCola ambos juntos funcionan como un factorial recursivo pero de cola, no simple(que usa una pila para almacenar valores en varios niveles e ir multiplicando los resultados)
//es recursividad de cola, parecieria mutua pero no lo es(porque no hacen ping pong con los parametros, solo una vez al principio)
//RECURSIVIDAD DE COLA:
//PRE: Recibe un number mayor o igual a cero
//POST: Devuelve el factorial previamente calculado con factorialRecursivoDeCola
int factorial1(int number);

//PRE: Recibe number y un acumulador
//POST: Devuelve el resultado a factorial1
int factorialRecursivoDeCola(int number, int accumulator);

//RECURSIVIDAD UNICA:
//PRE: Recibe una base and a exponent validos (exponent >= 0)
//POST: Devuelve la potencia
int potencia(int base,int exponent);

//AL IGUAL QUE POTENCIA Y FACTORIAL, VOY ACUMULANDO DATOS EN LA PILA...EL RETURN HACE SUMAS ENTRE LA LLAMADA A LA FUNCION Y LOS VALORES DE a ALMACENADOS. ES RECURSION SIMPLE
//RECURSIVIDAD UNICA:
//PRE: Recibe dos numeros
//POST: Devuelve su multiplicacion
int multiplicacionPorSuma(int numberA,int numberB);

//SIEMPRE DEVUELVO (RETURN) LA FUNCION SIN NINGUNA CUENTA ENCIMA...ES RECURSION DE COLA, SIEMPRE TRABAJO SOBRE EL MISMO NIVEL(ES MEJOR)
//RECURSIVIDAD DE COLA:
//PRE: Recibe dos numeros enteros
//POST: Devuelve el maximo comun divisor de ambos numeros
int MCD(int numberA, int numberB);

//fibonacci implementado con recurisvidad  multiple, return de 2 veces el llamado de recursion
//RECURSIVIDAD MULTIPLE:
//PRE: Recibe a number natural (el n correspondiente a Fn)
//POST: Devuelve fibonacci de el number n ingresado
int fibonacci(int number);

//RECURSIVIDAD MUTUA:
//PRE: Recibe un number
//POST: Devuelve fibo de number
int fibo (int number);

//PRE: Recibe un number
//POST: Devuelve los adultos de ese number
int adult(int number);

//PRE: Recibe un number
//POST: Devuelve los babys de ese number
int baby(int number);

//RECURSIVIDAD ANIDADA: funcion de ackerman (tarda un montonasooo, crece muy rapido)
//RECURSIVIDAD ANIDADA: Dentro de los parametros llamo de nuevo a la funcion recursiva
//PRE: Recibe two numbers m,n
//POST: Devuelve el calculo de ackerman de ambos numbers
int ackermanFunction(int m, int n);

//RECURSIVIDAD MULTIPLE: Dentro de la funcion se lo llama a la funcion recursiva
//RECURSIVIDAD MULTIPLE: Falta terminar...
//PRE:-
//POST:-
int towerOfHanoi(int numberOfDiscs);


#endif /* MODULOS_H_ */
