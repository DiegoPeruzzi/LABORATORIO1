/*1.	Desarrolle un programa para que una inmobiliaria decida si invertir en una propiedad (o no) según: la ubicación, el precio, si es casa o departamento y si tiene cochera.
  Si está en Godoy Cruz, y el precio es de hasta 70000$, invierte sin dudar (no importa nada más). En cambio, si el precio es mayor, sólo invierte si tiene cochera y es casa, 
caso contrario, no invierte. Si el precio es menor, debe ir a visitarla y averiguar más datos. Si está en Ciudad, y el precio es mayor a 100000$ no invierte.  
Si es menor y  es casa, invierte. Si es departamento, solo con cochera invierte, caso contrario, debe averiguar si hay cocheras próximas.
  Si está en Las Heras, sólo en departamentos con cochera invierte, caso contrario, no invierte
  */
# include <iostream>
# include <string.h>
using namespace  std ;

main() {

    float precio ;
    int zona, casa_depto, cochera;
	cout<< "Inmobiliaria: "<<endl;
    cout << " Zona: " << endl << " Godoy Cruz (1) " << endl << " Ciudad (2) " << endl << " Las Heras (3) " << endl << endl;
    cout << " Zona elegida: " ;
    cin >> zona;

    if (zona == 1 ) {
        cout << " Ingrese el precio " << endl;
        cin >> precio;
        if (precio <= 70000 ) {
            cout << " INVERTIR!" << endl;
        } else {
            cout << " Ingrese una opcion: " << endl << endl;
            cout << " Es casa o departamento: " << endl << " CASA (1) " << endl << " DEPARTAMENTO (2) " << endl << endl;
            cin >> casa_depto;
            if (casa_depto == 1 ) {
                cout << " Ingrese una opcion " << endl << endl;
                cout << " Tiene cochera: " << endl << " SI (1) " << endl << " NO (2) " << endl << endl;
                cin >> cochera;
                if (cochera == 1 ) {
                    cout << " INVERTIR! " << endl;
                } else {
                    cout << " NO INVERTIR " << endl;
                }  
            } else {
                cout << " NO INVERTIR " << endl;
            }
        }
    } else  if (zona == 2 ) {
        cout << "  Ingrese el precio " << endl;
        cin >> precio;
        if (precio <= 100000 ) {
            cout << "  Ingrese una opcion: " << endl << endl;
            cout << " Es casa o departamento: " << endl << " CASA (1) " << endl << " DEPARTAMENTO (2) " << endl << endl;
            cin >> casa_depto;
            if (casa_depto == 1 ) {
                cout << " INVERTIR! " << endl;
            } else {
                cout << "Ingrese una opcion: " << endl << endl;
                cout << " Tiene Cochera: " << endl << " SI (1) " << endl << " NO (2) " << endl << endl;
                cin >> cochera;
                if (cochera == 1 ) {
                cout << " INVERTIR! " << endl;
                } else {
                    cout << " Averiguar si hay cocheras proximas para decidir si se invierte " << endl;
                }
            }
        } else {
            cout << " NO INVERTIR! " << endl;
        }
    } else  if (zona == 3 ) {
        cout << " Ingrese una opcion: " << endl << endl;
        cout << " Es casa o departamento: " << endl << " CASA (1) " << endl << " DEPARTAMENTO (2) " << endl << endl;
        cin >> casa_depto;
        if (casa_depto == 1 ) {
            cout << " NO INVERTIR! " << endl;
        }else {
            cout << " Ingrese una opcion:  " << endl << endl;
            cout << " Tiene Cochera: " << endl << " SI (1) " << endl << " NO (2) " << endl << endl;
            cin >> cochera;
            if (cochera == 1 ) {
                cout << " INVERTIR! " << endl;
            } else {
                cout << "NO INVERTIR! " << endl;
            }
        }
    } else {
        cout << " REVISE LOS VALORES INGRESADOS" << endl;
    }

    system ("pause");





}
