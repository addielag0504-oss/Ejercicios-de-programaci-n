#include <iostream>
using namespace std;
int main(){

long long n, n_original = n;
long long ninverso = 0;    //acumulador
cout << "Introduzca un numero: ";
cin >> n;


while (n > 0)
{
int ultimo_numero = n % 10;    //Entriega el ultimo digito del numero recibido

ninverso = (ninverso * 10) + ultimo_numero;   //A traves del acumulador se van acumulando los digitos

n = n / 10;  // Esto descarta ese digito y se reinicia el ciclo, asi obteniendo los demas digitos

}

if (ninverso != n_original)
{
    cout << "Es capicua";
}
else
{
    cout << "No es capicua";
}

    return 0;
}