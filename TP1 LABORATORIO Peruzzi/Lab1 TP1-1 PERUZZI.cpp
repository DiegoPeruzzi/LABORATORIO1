/* 1- El due�o de un hostel necesita cobrar la estad�a a un grupo de j�venes que se han alojado considerando 
la cantidad de d�as que se han quedado y el valor por d�a. 
Debe cobrar el neto m�s el IVA (21% del neto), inform�ndoles estos importes por separado. 
Adem�s, han consumido del frigobar, por un importe igual a un tercio del total sin iva. Imprimir por pantalla una factura*/


#include <iostream>
using namespace std; 

main () {
    float cantidad_dias, valor_dia, iva=0.21 ,precio_neto , precio_total , precio_frigobar , total_a_pagar ;
    cout<< "************** CALCULADOR HOSTEL ****************" <<endl <<endl;
	cout<< "Indique cantidad de dias que el cliente se hospedo: ";
    cin>> cantidad_dias ;
    cout<<"Indique el precio por dia: ";
    cin>> valor_dia; 
    precio_neto= cantidad_dias*valor_dia;
    cout <<"El precio neto es: " << precio_neto << "\n" ; 
    precio_total = precio_neto * iva + precio_neto; 
    cout<<"El precio total es: " << precio_total << "\n"; 
    precio_frigobar=precio_neto/3;  
    cout<<"El precio del frigobar es: " << precio_frigobar << "\n"; 
    total_a_pagar= precio_total+precio_frigobar;  
    cout<<"El precio total a pagar es: " << total_a_pagar << "\n"; 
    system ("pause");
}
