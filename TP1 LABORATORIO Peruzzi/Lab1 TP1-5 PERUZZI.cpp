//5-	Determinar dados tres n�meros cual es el mayor y cual el menor.

#include <iostream>
using namespace std;
 main (){
 	 float num1, num2, num3;
	cout<<"Ingrese el primer numero: " <<endl;
	cin>>num1;
	
	cout<<"Ingrese el segundo n�mero: " <<endl;
	cin>>num2;
	
	cout<<"Ingrese el tercer n�mero: " <<endl;
	cin>>num3; 	
	
	cout<<"Los n�meros ingresados son: " <<num1<< ", " <<num2<< " y " <<num3<<endl;
	
	if (num1>num2 && num1>num3)
	{
	cout<<"El n�mero mayor es: " <<num1<<endl;
}
		else if (num2>num1 && num2>num3) 
		{
		cout<<"El numero mayor es: " <<num2<<endl;
	}
			else
			{cout<<"El numero mayor es: " <<num3<<endl;
		}
		
	if (num1<num2 && num1<num3)
	{
	cout<<"El numero menor es: " <<num1<<endl;
}
		else if (num2<num1 && num2<num3) 
		{
		cout<<"El numero menor es: " <<num2<<endl;
	}
			else
			{cout<<"El numero menor es: " <<num3<<endl;
		}
 system ("pause");
 }
 
