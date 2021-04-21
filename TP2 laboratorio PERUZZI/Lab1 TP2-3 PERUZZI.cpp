//3.	Desarrolle un programa que le informe al farmacéutico el porcentaje de descuento a aplicar a los afiliados a una Obra Social. 
//Sabiendo que si el afiliado tiene Plan A, todas las recetas que presente tendrán un descuento del 100%.
// En el caso que se trate de un Plan B o C, el afiliado tendrá un descuento del 90%; y si es Plan D un 50%. Para el resto de los planes, 
//sólo tendrá el 25%. Si el afiliado paga en efectivo, la farmacia lo beneficia con el descuento del 5% más el descuento antes citado.
# include <iostream>
# include <string.h>

using namespace  std ;

main () {

    int plan, opcion;

    cout << " Ingrese la opcion de acuerdo al plan : " << endl;
    cout << " Plan A: (1) " << endl << " Plan B: (2) " << endl << " Plan C: (3) " << endl << " Plan D: (4) " << endl << " Otros : (5) " << endl;
    cin >> plan;

    switch(plan) {
        case  1 : cout << " PLAN A: TODAS LAS RECETAS CON 100% DE DESCUENTO " << endl;
        break;
        case  2 : cout << " PLAN B: DESCUENTO DEL 90% DEL TOTAL PARA TODAS LAS RECETAS " << endl;
        break;
        case  3 : cout << " PLAN C: DESCUENTO DEL 90% DEL TOTAL PARA TODAS LAS RECETAS " << endl;
        break;
        case  4 : cout << " PLAN D: DESCUENTO DEL 50% DEL TOTAL PARA TODAS LAS RECETAS " << endl;
        break;
        case  5 : cout << " DESCUENTO DEL 25% PARA TODAS LAS RECETAS " << endl;
        break;
        predeterminado : cout << " REVISE LOS DATOS INGRESADOS " << endl;
        system ("pause");
        return  0 ;
    }
        cout << " La forma de pago es efectivo? " << endl << " SI: (1) " << endl << " NO: (2) " << endl;
    cin >> opcion;
    cout<< "Beneficio del 5%";
    return 0 ; 
}

