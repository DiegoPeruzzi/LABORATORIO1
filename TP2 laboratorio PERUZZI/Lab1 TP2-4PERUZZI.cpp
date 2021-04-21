//4- Escribir un programa que escriba todos los múltiplos de 3 del número 1 al 3000

#include <iostream>
using namespace std;
int main() {

    int num, cont, prod;
    num = 3;
    prod = 1;
    cont = 0;
    cout<<"                                ********* Muestratodos los multiplos de 3 desde el 1 al 3000 ********"<<endl;

    while (prod < 3000) {
        cont++;
        prod = num * cont;  
        cout << prod << " - ";     
    }
    
    return 0;
}
