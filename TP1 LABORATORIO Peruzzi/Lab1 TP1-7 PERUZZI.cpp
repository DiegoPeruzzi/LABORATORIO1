/* En una Obra Social, dada la edad de una persona, se le asignara una determinada categoria;
"Recien nacido" (menos de 1 año), "Infante" (hasta 5 años), "Niño" (de 6 a 12 años), 
"Pre-adolescente" (mas de 12 años, hasta 18); "Adolescente" (mas de 18 años, hasta 25), 
"Adulto joven" (mas de 25, hasta 35); "Adulto" (mas de 35, hasta 50) o "Adulto mayor" (mas de 50 años). 
Dada la edad de una persona, informar su Categoria. 
*/
#include <iostream>
using namespace std;
int main() {
	int edad;
	cout<<" Ingrese la edad de la persona: " ;
	cin>>edad;
	cout<<endl;
	if (edad<0){
		cout<<" La edad ingresada no es valida "<<endl; 
	}else if (edad>122){
		cout<<" La edad ingresada no es valida "<<endl; 
	}	
	else if ( edad>=0&&edad<=1){
		cout<<" Categoria: Recien nacido "<<endl;
	} 
	else if ( edad>1&&edad<=5 ){
		cout<<" Categoria: Infante "<<endl;
	} 
	else if ( edad>=6&&edad<=12 ){
		cout<<" Categoria: Ninio "<<endl;
	} 
	else if ( edad>12&&edad<=18 ){
		cout<<" Categoria: Pre-adolescente "<<endl;
	} 
	else if ( edad>18&&edad<=25 ){
		cout<<" Categoria: Adolescente "<<endl;
	} 
	else if ( edad>25&&edad<=35){
		cout<<" Categoria: Adulto joven "<<endl;
	} 
	else if ( edad>35&&edad<=50){
		cout<<" Categoria: Adulto "<<endl;
	} 
	else if ( edad>50 ){
		cout<<" Categoria: Adulto mayor "<<endl;
	}
	
}


