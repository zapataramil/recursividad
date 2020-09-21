#include <iostream>

using namespace std;

int factorial(int numero);

int potencia(int base,int exponente);

int multiplicacionPorSuma(int a,int b);

int main(int argc, char** argv){
	int num,exp;
	cout <<"numero que va ser usado para calculo de factorial, base de potencia y multiplicando: "<<endl;
	cin >> num;
	cout <<"numero que va ser usado como exponente, y segundo multiplicando: "<<endl;
	cin >> exp;
	cout << "el factorial es: "<<factorial(num);
	cout << "la potencia es: "<<potencia(num,exp);
	cout << "la multiplicacion es: "<<multiplicacionPorSuma(num,exp);

	return 0;
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
