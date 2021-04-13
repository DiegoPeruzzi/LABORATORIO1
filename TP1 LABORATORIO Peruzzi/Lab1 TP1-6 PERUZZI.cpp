//6-	Dados los datos de una persona (nombre, sueldo, inasistencias) y la cantidad de días laborables del mes;
// mostrar el sueldo que le corresponde cobrar (los días no trabajados se le descuentan). 


#include <iostream>
using namespace std;

 main (){
 	int faltas, dias_lab, inasistencias;
 	float sueldo_neto, sueldo_bruto, valor_dia, dias_trab, dto;
 	char name [50];
 	cout<< "************************************************************"<<endl;
 	cout<< "# Nombre (no deje este campo vacio): ";
 	cin>>name;
 	cout<< "# -Ingrese el importe de los haberes: $";
 	cin>> sueldo_bruto;
 	cout<< "# -Ingrese la cantidad de dias laborables del mes en curso: ";
 	cin>> dias_lab;
 	
 	if (dias_lab>31 or dias_lab<1)
 	{
	 cout<<"**********************"<<endl<<"REVISE LOS DATOS INGRESADOS: Dias del mes fuera de rango."<<endl;
	return 0;
}
	 cout<< "# -Ingrese la cantidad de inasistencias del mes en curso: ";
 	cin>> inasistencias;
 	
 	if (inasistencias>dias_lab)
 	{
	cout<<"*******************************************" <<endl<< "NO PUEDE TENER MAS FALTAS QUE LA CANTIDAD DE DIAS LABORABLES DEL MES EN CURSO";
	return 0;
}
cout <<endl<<endl;
cout<<name<<":"<<endl;
 	valor_dia=sueldo_bruto / dias_lab;
 	dias_trab= dias_lab - inasistencias;
	sueldo_neto=(dias_trab - inasistencias)*valor_dia;
	dto=inasistencias*valor_dia;
	
	cout<<"El importe a cobrar es: $" <<sueldo_neto<<endl <<"La cantidad de dias trabajados es: " << dias_trab <<endl <<"Falto " <<inasistencias <<" dias." <<" y se le descontaran $" <<dto;
	return 0;
 	

 	
 }
