#ifndef MODULOS_H_
#define MODULOS_H_

//SIMPLE OR MULTIPLE RECURSION:
//PRE:
//POST:
int factorial(int number);

//RECURSIVIDAD DE COLA:
//PRE:
//POST:
int factorial1(int number);

//PRE:
//POST:
int factorialRecursivoDeCola(int number, int accumulator);

//RECURSIVIDAD UNICA:
//PRE:
//POST:
int potencia(int base,int exponent);

//RECURSIVIDAD UNICA:
//PRE:
//POST:
int multiplicacionPorSuma(int numberA,int numberB);

//RECURSIVIDAD DE COLA:
//PRE:
//POST:
int MCD(int numberA, int numberB);

//RECURSIVIDAD MULTIPLE:
//PRE:
//POST:
int fibonacci(int number);

//RECURSIVIDAD MUTUA:
//PRE:
//POST:
int fibo (int number);

//PRE:
//POST:
int adult(int number);

//PRE:
//POST:
int baby(int number);

//RECURSIVIDAD ANIDADA: Dentro de los parametros llamo de nuevo a la funcion recursiva
//PRE:
//POST:
int ackermanFunction(int m, int n);

//RECURSIVIDAD MULTIPLE: Falta terminar...
//PRE:
//POST:
int towerOfHanoi(int numberOfDiscs);


#endif /* MODULOS_H_ */
