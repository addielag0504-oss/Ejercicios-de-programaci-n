#include <iostream>
using namespace std;
int main(){
long long n, sum_divisores = 0, divisor;
cout << "Introduzca un numero: ";
cin >> n;

for (int i = 1; i <= n / 2; i++) // Utilice el for para hallar los divisores del numero
{

if (n % i == 0)    // Para hallar los divisores
{
    cout << i << " ";
    sum_divisores+= i; //Para acumularlos y sumarlos
}

}

if (sum_divisores == n)
{
    cout << "Es perfecto";
}
else
{
    cout << "No es perfecto";
}


return 0;
}