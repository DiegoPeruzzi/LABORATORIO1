/*2-	Calcular cuánto dinero (en pesos) tiene un Banco, en una sucursal específica, conociendo las cantidades que posee de cada valor 
posible de las monedas en vigencia:2$, 1$, 50 centavos, 25 centavos, 10 centavos y 5 centavos. Por ejemplo: la sucursal de Guaymallén, 
tiene 257 monedas de 2$, 5300 monedas de 1$, 2400 monedas de 50 centavos, 6108 monedas de 10 centavos, 2357 monedas de 5 centavos y no tiene 
monedas de 25 centavos. Se informará: "TOTAL DISPONIBLE SUCURSAL Guaymallén $ X.XXX,XX. 
*/	
#include <iostream>
using namespace std;

main (){
	int moneda5, moneda10,moneda25,moneda50, peso1, peso2 , cantidad, total_disponible_sucursal_Guaymallen; 
	cout<< "****CALCULADORA DE VALORES SUCURSAL GLLEN****"<<endl<<endl;
 	cout<<"Ingrese la cantidad de monedas de 5 centavos: " ;
    cin>> moneda5;
	cout<< "Ingrese la cantidad de monedas de 10 centavos: ";
    cin>> moneda10;
    cout<< "Ingrese la cantidad de monedas de 25 centavos: ";
    cin>> moneda25;
    cout<< "Ingrese la cantidad de monedas de 50 centavos: ";
    cin>> moneda50;
    cout<< "Ingrese la cantidad de monedas de 1 peso: "	;
    cin>> peso1;
    cout<< "Ingrese la cantidad de monedas de 2 pesos:" ;
    cin>> peso2;
    total_disponible_sucursal_Guaymallen= moneda5*.05+moneda10*.1+moneda25*.25+moneda50*.5+peso1+peso2*2 ;
    cout<<"El total disponible en sucursal de Guaymallen es: $" <<total_disponible_sucursal_Guaymallen	<<endl<<endl; 
	cout<< "********************************************"<<endl<<endl;
    system ("pause");
		
	
}
