#include <iostream>

using namespace std;

int factorial(int numero);

int main(int argc, char** argv){
	int num;
	cout <<"numero: "<<endl;
	cin >> num;
	cout << "el factorial es: "<<factorial(num);

	return 0;
}


int factorial(int numero){
	if ((numero==0)||(numero==1))
		return 1;
	return (numero)*factorial(numero-1);

}
