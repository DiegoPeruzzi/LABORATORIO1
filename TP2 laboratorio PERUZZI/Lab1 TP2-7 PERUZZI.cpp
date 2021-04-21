//7.	Crear un programa que lea un número y calcule la sucesión Fibonacci hasta el valor anterior más cercano al mismo y el valor posterior más próximo. 
//Realice este ejercicio utilizando primero un bucle for y posteriormente repita el ejercicio utilizando un bucle while
# include  <iostream>
# include  <string.h>
# include  <locale.h>
using namespace  std ;

main () {
 int n_while;
 int n_for;
 int x=0;
 int y=1;
 int aux=0;
 cout << "DIGITE UN NUMERO:";
 cin >> n_while;
 cout << "0";
 cout << "1";
 while (y<n_while){
 	aux=x+y;
 	cout<<aux<<" ";
 	x=y;
 	cout<<"El numero " <<n_while<<" esta entre "<<x<<" y "<<y<< " de la sucesion de Fibonacci "<<endl;
 	
 	 cout<<"ESTRUCTURA REPETITIVA WHILE"<<endl;
 	    if (n_while>=8){
 	        cout<<"El numero"<<n_while<<"esta entre "<<x<<"y"<<y<< "de la sucesion de Fibonacci"<<endl;
 	        }
 	    else if (n_while>=9){
 	        cout<<" El numero "<<n_while<<" esta entre "<<x<<"y"<<y<< "de la sucesion de Fibonacci"<<endl;
 	        }
     system ("pause");
     
 for (int i=1; y<n_for;i++)
 {
 	aux=x+y;
 	cout<<aux<<" ";
 	x=y;
 	cout<<"El numero " <<n_for<<" esta entre "<<x<<" y "<<y<< " de la sucesion de Fibonacci "<<endl;
 	 cout<<"ESTRUCTURA REPETITIVA FOR"<<endl;
 	    if (n_for>=8){
 	        cout<<"El numero "<<n_for<<" esta entre "<<x<<" y "<<y<< " de la sucesion de Fibonacci "<<endl;
 	        }
 	    else if (n_for>=9){
 	        cout<<"El numero "<<n_for<<" esta entre "<<x<<" y "<<y<< " de la sucesion de Fibonacci "<<endl;
 	        }
     system ("pause");
 } 
  }
}
    
 
