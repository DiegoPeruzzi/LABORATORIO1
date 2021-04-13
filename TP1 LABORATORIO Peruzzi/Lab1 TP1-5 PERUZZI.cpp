//5-	Determinar dados tres números cual es el mayor y cual el menor.

#include <iostream>
using namespace std;
 main (){
 	 float num1, num2, num3;
	cout<<"Ingrese el primer numero: " <<endl;
	cin>>num1;
	
	cout<<"Ingrese el segundo número: " <<endl;
	cin>>num2;
	
	cout<<"Ingrese el tercer número: " <<endl;
	cin>>num3; 	
	
	cout<<"Los números ingresados son: " <<num1<< ", " <<num2<< " y " <<num3<<endl;
	
	if (num1>num2 && num1>num3)
	{
	cout<<"El número mayor es: " <<num1<<endl;
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
 
