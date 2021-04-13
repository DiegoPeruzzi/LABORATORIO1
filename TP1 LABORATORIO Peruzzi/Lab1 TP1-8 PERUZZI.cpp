/*La municipalidad permite financiar una multa cobrando un determinado recargo.
Se debe informar el valor a pagar de la cuota una vez que el contribuyente 
haya elegido en cuantas cuotas desea abonar su deuda (total + recargo). 
Ademas, si la multa es del año anterior, se le cobra un adicional de 45$.
Si el beneficiario ya esta pagando otra financiacion, no se le permite acceder a esta facilidad de pago.
*/

#include <iostream>
using namespace std;
main(){

    float multa, cuota, recargo, total,total_a_pagar, monto_final, monto_final_cuota;
    int numero_1,numero_2;
    cout<<" Facturacion de multa "<<endl;
    cout<<"Primero debe responder: Usted esta financiando otra multa? :"<<endl<<endl;
    
    cout<<"Para decir que si ingrese 1 y para no ingrese 2 : ";
    cin>>numero_1;
    if (numero_1==1)
        cout<<" Usted no puede acceder a esta facilidad de pago."<<endl; 
	else if (numero_1==2){
        cout<<" Usted si puede acceder a este beneficio "<<endl;
        cout<<" Usted dispone de una forma de pago de 3, 6, 9 y 12 cuotas  "<<endl;
        cout<<" Ingrese el numero de cuotas en las que va a realizar la financiacion: "<<endl;
        cin>>cuota;
        cout<<" Ingrese el valor de la multa: "<<endl;
        cin>>multa;
        cout<<" Si la multa pertenece a un año anterior ingrese: 1 de no ser asi ingrese: 2 "<<endl;
        cin>>numero_2;
        recargo=(multa*30/100);
        total=(multa+recargo);
        total_a_pagar=total/cuota;
        if (numero_2==1)
            cout<<" Se le cobrara un adicional de $45 "<<endl;
        monto_final=total+45;
        monto_final_cuota=total_a_pagar+45;
        }    
     cout<<" Usted eligio: "<<cuota<<" cuotas "<<endl;
    cout<<" El monto total a pagar es de: $"<<monto_final<<endl;
    cout<<" El valor de cada cuota es: $"<<monto_final_cuota<<endl;
    
}
