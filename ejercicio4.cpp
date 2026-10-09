#include <iostream>
using namespace std;
int main(){
long long n, ninverso = 0;  //acumulador
cout << "Introduzca un numero: ";
cin >> n;


while (n > 0)
{
int ultimo_numero = n % 10;    

ninverso = (ninverso * 10) + ultimo_numero;

n = n / 10;

}
cout << ninverso;    

    return 0;
}