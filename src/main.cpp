#include <iostream>
#include "modulos.h"

using namespace std;

int main(int argc, char** argv){

	int num,exp;
	cout <<"numero que va ser usado para calculo de factorial, base de potencia, multiplicando: "<<endl;
	cin >> num;
	cout <<"numero que va ser usado como exponente, y segundo multiplicando: "<<endl;
	cin >> exp;

	cout << "el factorial es: "<<factorial(num)<<endl;
	cout << "el factorial(cola recursivo) es: "<<factorial1(num)<<endl;
	cout << "la potencia es: "<<potencia(num,exp)<<endl;
	cout << "la multiplicacion es: "<<multiplicacionPorSuma(num,exp)<<endl;
	cout << "eL MAXIMO COMUN DIVISOR ES: "<<MCD(num,exp)<<endl;
	cout << "fibonacci de num: "<<fibonacci(num)<<endl;
	cout << "fibonacci de num con recursividad mutua: "<<fibo(num)<<endl;
	cout << "funcion de ackerman con recursividad anidada: "<<ackermanFunction(num,exp)<<endl;
	return 0;
}

