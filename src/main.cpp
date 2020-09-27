#include <iostream>

using namespace std;

int factorial(int numero);

int potencia(int base,int exponente);

int multiplicacionPorSuma(int a,int b);

int MCD(int a, int b);

int factorial1(int num);

int factorialRecursivoDeCola(int num, int acum);

int fibonacci(int num);


int fibo (int num);

int adulto(int n);

int bebe(int n);


int funcionAckerman(int n, int m);

int torreHanoi(int cantidadDiscos);

int main(int argc, char** argv){
	int num,exp;
	cout <<"numero que va ser usado para calculo de factorial, base de potencia, multiplicando: "<<endl;
	cin >> num;
	cout <<"numero que va ser usado como exponente, y segundo multiplicando: "<<endl;
	cin >> exp;
	/*
	cout << "el factorial es: "<<factorial(num)<<endl;
	cout << "el factorial(cola recursivo) es: "<<factorial1(num)<<endl;
	cout << "la potencia es: "<<potencia(num,exp)<<endl;
	cout << "la multiplicacion es: "<<multiplicacionPorSuma(num,exp)<<endl;
	cout << "eL MAXIMO COMUN DIVISOR ES: "<<MCD(num,exp)<<endl;
	cout << "fibonacci de num: "<<fibonacci(num)<<endl;
	cout << "fibonacci de num con recursividad mutua: "<<fibo(num)<<endl; */
	cout << "funcion de ackerman con recursividad anidada: "<<funcionAckerman(num,exp)<<endl;
	return 0;
}



//RECURSIVIDAD MULTIPLE: Dentro de la funcion se lo llama a la funcion recursiva
int torreHanoi(int num){
	return 0;
}



//RECURSIVIDAD ANIDADA: funcion de ackerman (tarda un montonasooo, crece muy rapido)

int funcionAckerman(int m, int n){
	if (m==0)
		return n+1;
	if (n==0)
		return funcionAckerman(m-1,1);
	return funcionAckerman(m-1,funcionAckerman(m,n-1));
}





//fibonacci(A y B - fibo) implementados con recursividad mutua

int fibo (int num){
	return adulto(num)+bebe(num);
}

int adulto(int n){
	if (n==1)
		return 0;
	return bebe(n)+bebe(n-1);
}

int bebe(int n){
	if (n==1)
		return 1;
	return adulto(n-1);
}


//fibonacci implementado con recurisvidad  multiple, return de 2 veces el llamado de recursion
int fibonacci(int num){
	if((num==1)||(num==2))
		return 1;
	return fibonacci(num-1)+fibonacci(num-2);
}


//factorial1 y factorialRecursivoDeCola ambos juntos funcionan como un factorial recursivo pero de cola, no simple(que usa una pila para almacenar valores en varios niveles e ir multiplicando los resultados)
//es recursividad de cola, parecieria mutua pero no lo es(porque no hacen ping pong con los parametros, solo una vez al principio)
int factorial1(int num){
	return factorialRecursivoDeCola(num,1);
}

int factorialRecursivoDeCola(int num,int acum){
	if(num==0)
		return acum;
	return factorialRecursivoDeCola(num-1,acum*num);
}


//SIEMPRE DEVUELVO (RETURN) LA FUNCION SIN NINGUNA CUENTA ENCIMA...ES RECURSION DE COLA, SIEMPRE TRABAJO SOBRE EL MISMO NIVEL(ES MEJOR)
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

//AL IGUAL QUE POTENCIA Y FACTORIAL, VOY ACUMULANDO DATOS EN LA PILA...EL RETURN HACE SUMAS ENTRE LA LLAMADA A LA FUNCION Y LOS VALORES DE a ALMACENADOS. ES RECURSION SIMPLE
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
