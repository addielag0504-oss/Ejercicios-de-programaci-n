#include <iostream>
using namespace std;
int main(){
long long n, digito, suma = 0; // suma es el acumulador
cout << "Introduzca un numero: ";
cin >> n;

cout << "La suma de los digitos de " << n << " es: ";
while (n > 0)
{
    long long ultimo_digito;
    ultimo_digito = n % 10; // me da el ultimo digito

    suma += ultimo_digito;

    n = n / 10;
    
}

cout << suma;

    return 0;
}