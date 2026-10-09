#include <iostream>
using namespace std;
int main(){
int numero_secreto = 69,n, intentos = 1;
cout << "Introduzca un numero e intente adivinar el numero secreto: ";

 do
 {
    cin >> n;

    if (n < numero_secreto)
    {
        cout << "El numero " << n << " es menor que el numero secreto. " << "Introduzca otro: ";
    }
    if (n > numero_secreto)
    {
        cout << "El numero " << n << " es mayor que el numero secreto. " << "Introduzca otro: ";
    }
    if (n == numero_secreto)
    {
        cout << "Encontraste el numero secreto." ;
        cout << "Te tomo un total de " << intentos << " intentos";
        
    }
    
intentos++;

 } while (n = numero_secreto);

cout << intentos;


    return 0;
}