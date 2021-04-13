/* Una empresa de transporte cobra sus honorarios según los km recorridos y la cantidad de bultos
 que lleva a un cliente. Indicar el total a cobrarle al cliente, agregándole el importe de IVA (21%). 
Por cada bulto cobra un canon de 40 pesos,  y por km recorrido 20 pesos.
*/

#include <iostream>
using namespace std;


main () {
	int cantidad_bultos;
	float km_recorridos, valor_bultos, iva=.21, total_neto, total_honorarios, valor_km;
	cout<<" Ingrese la cantidad de bultos: ";
	cin>> cantidad_bultos;
	cout<<" Ingrese Km recorridos: ";
	cin>>km_recorridos;
    valor_bultos= cantidad_bultos * 40;
    valor_km= km_recorridos * 20;
    total_neto= valor_bultos+valor_km;
    total_honorarios= total_neto *iva + total_neto;
    cout<<" El precio de honorarios es:$" <<total_honorarios <<endl;
    system ("pause");
}
