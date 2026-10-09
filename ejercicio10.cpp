#include <iostream>
using namespace std;
int main(){
long long numero;
cout << "Introduzca un numero mayor o igual que 2: ";
cin >> numero;

for (long long i = 2; i < numero; i++)
{
    if (numero % i == 0)
    {
        cout << "No es primo.";
        break;
    }
    else
    {
        cout << "Es primo.";
        break;
    }
    
}


    return 0;
}