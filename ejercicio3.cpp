#include <iostream>
using namespace std;
int main(){
int a, b, c;
cout << "Introduzca dos numeros: ";
cin >> a >> b;
while (b!=0)
{
 c = a;
 a = b;
 a = c/b;
    
}
cout << "El maximo comun divisor es:" << a;


    return 0;
}