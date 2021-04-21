/* 2.	Una Agencia de viajes ha implementado un nuevo sistema de regalos a los clientes que contraten sus servicios. 
Se desea un programa que indique, dado el pedido del cliente, cuál es regalo asignado por la empresa.  
 Si se trata de un viaje a algún lugar dentro de la provincia; para 1 o 2 personas, se le regalará entradas a un espectáculo;
si fueran 3 o más personas, 2 días más de estadía. Si en cambio fuera un viaje fuera de la provincia (pero dentro de Argentina);
 para 1 o 2 personas; menos de 7 días, 1 día más de estadía; caso contrario, excursiones gratis. Si fueran 3 o más personas, y menos de 7 días,
descuentos a espectáculos, para más días, serán excursiones gratis.  Si el viaje fuera al exterior; para 1 o 2 personas,
hasta 7 días se le dará 1 un juego completo de valijas; para más días, excursiones gratis. Para el resto de los viajes al extranjero; 
7 o más días se les darán cupones de descuento; menos de 7 días se les entregará un juego completo de valijas.
*/
# include <iostream>
# include <string.h>
using namespace  std ;
main() {
    int canPers, estadia, destino;

    cout << " INDIQUE EL DESTINO DE SU VIAJE: " << endl << endl << " Provincia (1) " << endl << " Interior (2) " << endl << " Exterior (3) " << endl;
    cin >> destino;
    cout << endl;
    cout << " Cuantas canPers viajan? " << endl;
    cin >> canPers;
    cout << endl;
    cout << " Cuantos dias se hospeda?" << endl;
    cin >> estadia;


    if (destino == 1 && canPers < 3 ) {
        cout << " Su regalo es : ENTRADAS PARA ESPECTACULO!!! " << endl;
    } else  if (destino == 1 && canPers>= 3 ) {
        cout << " Su regalo es : 2 DIAS DE ESTADIA GRATIS " << endl;
    } else  if (destino == 2 && canPers < 3 && estadia < 7 ) {
        cout << " Su regalo es : 1 DIA DE ESTADIA GRATIS " << endl;
    } else  if (destino == 2 && canPers < 3 && estadia>= 7 ) {
        cout << " Su regalo es : EXCURSIONES GRATIS!!! " << endl;
    } else  if (destino == 2 && canPers>= 3 && estadia < 7 ) {
        cout << " Su regalo es : DESCUENTOS EN ESPECTACULOS!!! " << endl;
    } else  if (destino == 2 && canPers>= 3 && estadia>= 7 ) {
        cout << " Su regalo es : EXCURSION GRATIS " << endl;
    } else  if (destino == 3 && canPers < 3 && estadia <= 7 ) {
        cout << " Su regalo es : 1 JUEGO COMPLETO DE VALIJAS!!!! " << endl;
    } else  if (destino == 3 && canPers < 3 && estadia> 7 ) {
        cout << " Su regalo es : 1 EXCURSIONES GRATIS!!!! " << endl;
    } else  if (destino == 3 && canPers>= 3 && estadia < 7 ) {
        cout << " Su regalo es : 1 JUEGO COMPLETO DE VALIJAS!!!! " << endl;
    } else  if (destino == 3 && canPers>= 3 && estadia>= 7 ) {
        cout << " Su regalo es : CUPÓN DE DESCUENTO " << endl;
    }
    else {
        cout << "REVISE LOS DATOS INGRESADOS " << endl;
    }

system ("pause");
}
