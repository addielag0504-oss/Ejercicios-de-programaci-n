#include <iostream>
using namespace std;
int main(){
int n, i;
int factorial = 1;
cout << "Introduzca un numero: ";
cin >> n;

for (int i = 1; i <= n; i++)
{
    factorial = factorial * i;
}

cout << "El factorial de " << n << " es: " << factorial;

    return 0;
}