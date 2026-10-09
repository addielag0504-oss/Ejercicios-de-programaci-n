#include <iostream>
using namespace std;
int main(){
long long n;
int pasos = 0;

cout << "Introduce un numero: ";
cin >> n;

while (n != 1)
{
    if (n % 2 == 0)
    {
        n = n / 2;
    }
    else
    {
        n = 3 * n + 1;
    }
        

pasos++;

}

cout << "Cantidad de pasos: " << pasos;
    return 0;
} 