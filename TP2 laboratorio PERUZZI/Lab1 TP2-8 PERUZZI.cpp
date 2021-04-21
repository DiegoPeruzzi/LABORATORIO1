//8.	Crear el programa asteriscos5 en el que se introduce un número entero y se crea una pirámide de asteriscos. Por ejemplo si se introduce el 6, el resultado sería:
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

    cout << " Ingrese la cantidad de 'pisos' que va a tener la pirámide de asteriscos " << endl;
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
