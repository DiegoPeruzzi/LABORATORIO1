
/* En un boliche se desea saber las ganancias de una noche, sabiendo que se vendieron 
una cierta cantidad de entradas a un determinado precio y hubo gastos que se deben descontar. 
Como ejemplo tomemos el caso de 1000 entradas vendidas, x% a un valor de $50 y el resto a un valor de $25.
 Por casa entrada de $50, corresponde un gasto de $12 y por cada entrada de $25 un gasto de $9. 
 Realizar un informe que muestre la recaudación, gastos por tipo de entrada y la ganancia final.
 */
 #include <iostream>
using namespace std;
 main (){
 	int cant_entrada1, cant_entrada2;
	float costo_entrada1, costo_entrada2,recaudacion, ganancia_total;
	cout<<"************************************************** "<<endl;
 	cout<<" Ingrese la cantidad de entradas vendidas de $50: ";
 	cin>> cant_entrada1;
 	cout<<" Indique la cantidad de entradas vendidas de $25: ";
 	cin>> cant_entrada2;
 	cant_entrada1= cant_entrada1*50;
 	cant_entrada2= cant_entrada2*25;
 	costo_entrada1= cant_entrada1*0.24;
	costo_entrada2= cant_entrada2*0.36;
	recaudacion= cant_entrada1+cant_entrada2;
	ganancia_total= cant_entrada1-costo_entrada1 + cant_entrada2-costo_entrada2; 
	cout<<"La recaudacion es: $" <<recaudacion  <<endl;
    cout<<"La ganancia total es: $" <<ganancia_total <<endl;
    cout<<"************************************************** "<<endl;
        system ("pause");
 }
