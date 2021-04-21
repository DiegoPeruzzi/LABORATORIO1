// 5. Ingresar un número natural ne indicar si es primo.

# include <iostream>
# include <string.h>
using namespace std ;

main () {


    int num;

    cout << " Ingrese un numero entero para saber si es primo " << endl;
    cin >> num;

    if (num> 0 ) {
        if ((num% 2 )!= 0 ) {
        cout << " El numero " << num << " *ES* primo " << endl;
        } else {
        cout << " El numero " << num << " *NO* es primo " << endl;
        }
    } else {
        cout << " Los numeros primos son solos positivos " << endl;
    }

    system ( "pause" );
    return  0 ;
}
