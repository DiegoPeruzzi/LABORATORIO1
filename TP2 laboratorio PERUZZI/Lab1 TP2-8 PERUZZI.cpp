//8.	Crear el programa asteriscos5 en el que se introduce un n�mero entero y se crea una pir�mide de asteriscos. Por ejemplo si se introduce el 6, el resultado ser�a:
/*   *
    ***
   *****
  *******
 *********
************
*/

# include <iostream>
# include <string.h>

using namespace  std ;

main () {

    int filas, a, i; // i = contador a = columnas
    string asteriscos = " * " , vacios = "  " ;

    cout << " Ingrese la cantidad de 'pisos' que va a tener la pir�mide de asteriscos " << endl;
    cin >> filas;
    cout << endl;

    for (i = 0 ; i <= filas; i ++) {
    cout << endl;
        for(a = 0 ; a<= filas-i; a ++) {
            cout << vacios;
        }
        for (a = 0 ; a <= 2 * i-1; a ++) {
            cout << asteriscos;
        }
        cout << endl;

    }


    system ("pause");

}
