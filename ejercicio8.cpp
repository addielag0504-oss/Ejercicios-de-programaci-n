#include <iostream>
using namespace std;
int main(){
int n, digitos, suma = 0, n_original = n;   //Use suma = 0 para acumular los digitos

cout << "Introduzca un numero de tres digitos: ";
cin >> n;

while (n > 0)
{
    digitos = n % 10;  //Nos da el ultimo digito

    suma += digitos*digitos;  //Suma los digitos


    n = n / 10;

}
 
if (suma == n_original)
{
    cout << "Es de Armstrong.";
}
else
{
    cout << "Es de Armstrong.";
}


return 0;
}