#include "modulos.h"


int towerOfHanoi(int number){
	return 0;
}

int ackermanFunction(int m, int n){
	if (m==0)
		return n+1;
	if (n==0)
		return ackermanFunction(m-1,1);
	return ackermanFunction(m-1,ackermanFunction(m,n-1));
}

int fibo (int num){
	return adult(num)+baby(num);
}

int adult(int n){
	if (n==1)
		return 0;
	return baby(n)+baby(n-1);
}

int baby(int n){
	if (n==1)
		return 1;
	return adult(n-1);
}

int fibonacci(int num){
	if((num==1)||(num==2))
		return 1;
	return fibonacci(num-1)+fibonacci(num-2);
}

int factorial1(int num){
	return factorialRecursivoDeCola(num,1);
}

int factorialRecursivoDeCola(int num,int acum){
	if(num==0)
		return acum;
	return factorialRecursivoDeCola(num-1,acum*num);
}

int MCD(int a, int b){
	if((a==0)||(b==0))
		return 0;
	if (a<b)
		return MCD(b,a);
	else{
		if(a%b == 0)
			return b;
		return MCD(b,a%b);
	}
}

int multiplicacionPorSuma(int a,int b){
	if(b==0)
		return 0;
	return a+multiplicacionPorSuma(a,b-1);
}

int potencia(int base,int exponente){
	if (exponente ==0)
		return 1;
	return base*potencia(base,exponente-1);
}

int factorial(int numero){
	if ((numero==0)||(numero==1))
		return 1;
	return (numero)*factorial(numero-1);
}
