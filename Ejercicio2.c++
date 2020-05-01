/*En la Pizzeria "Gran sabor" se tienen las siguientes ofertas:
Por la compra de una pizza grande (Q80.00), recibe un descuento de 10%
Por la compra de una pizza familiar (Q115.00), recibe un descuento de 15%
Por la compra de una pizza fiesta(Q100.00), recibe un descuento de 20%

Solicitar el tipo de pizza, el precio unitario y hallar el precio a pagar.

Grabar los datos a un archivo y mostrar el total global de la venta del dia y
determinar el total de lo vendido por producto, mostrando tambien el porcentaje
con relacion al total.*/

#include<iostream>
#include<fstream>
#include<string.h>
#include<cstdlib>
#include<conio.h>

using namespace std;
void menu();
void ingreso();
void mostrar();




int main() {
	menu();
	return 0;
	
}

void menu() {
	
	string nacional_jug;
	int npizzas;
	int valgran=80, valfami=115,valfies=100;
	float totalapagarg=0, totalapagarf=0, totalapagarfi=0;
	float tpizzasg=0, tpizzasf=0, tpizzasfi=0;
	float ventatotal=0;
	int ventadeldia=0;
	
	
		ofstream pizzas;
	pizzas.open("tt.txt", ios::out | ios::app);
	int opcion = 0;
	while (opcion != 6) {
		system("cls");
	 cout << "  _____________________________________\n";
	 cout << " |         --> MENU <--          		|\n";
	 cout << " | 1. PIZZA GRANDE         			|\n";
	 cout << " | 2. PIZZA FAMILIAR	   	    	      |\n";
	 cout << " | 3. PIZZA FIESTA	       	 		|\n";
	 cout << " | 4. MOSTRAR VENTA	       	 		|\n";
		cout << "Que deseas hacer? ";
		cin >> opcion;
		switch (opcion) {
		
		case 1:
			system("cls");
			cout<<"______PIZZA GRANDE______\n"<<endl;
			cout<<"PIZZAS A PEDIR"<<endl;
			cin>>npizzas;
			for(int i=0; i<npizzas; i++)
			//cout<<"opcion grande"<<endl;
			fflush(stdin);
			tpizzasg=npizzas*valgran;
			totalapagarg=tpizzasg-tpizzasg*0.10;
			
			cout<<"_________________________________________________________\n"<<endl;
					
					cout<<"VALOR DE PIZZAS GRANDE: " << tpizzasg<<endl;
					cout<<"TOTAL A PAGAR CON DESCUENTO: "<< totalapagarg<<endl;
			cout<<"_________________________________________________________\n"<<endl;
		
				pizzas<<"pizzas pedidas: "<<npizzas<<endl;
			pizzas<<"valor de pizzas grande:"<<"  "<<tpizzasg<<endl;
			pizzas<<"total a pagar con descuento:"<<" "<<totalapagarg<<endl;
			system("pause");
			break;
			
			case 2:
				system("cls");
				cout<<"|______PIZZA FAMILIAR______|\n"<<endl;
			cout<<"PIZZAS A PEDIR"<<endl;
			cin>>npizzas;
			for(int i=0; i<npizzas; i++)
			//cout<<"opcion grande"<<endl;
			fflush(stdin);
			tpizzasf=npizzas*valfami;
			totalapagarf=tpizzasf-tpizzasf*0.15;
			
			cout<<"_________________________________________________________\n"<<endl;
					cout<<"VALOR DE PIZZAS FAMILIAR: " << tpizzasf<<endl;
					cout<<"TOTAL A PAGAR CON DESCUENTO: "<< totalapagarf<<endl;
			cout<<"_________________________________________________________\n"<<endl;
		
				pizzas<<"pizzas pedidas: "<<npizzas<<endl;
			pizzas<<"valor de pizzas familiar:"<<"  "<<tpizzasf<<endl;
			pizzas<<"total a pagar con descuento:"<<" "<<totalapagarf<<endl;
			system("pause");
				break;
				
				
			case 3:
				system("cls");
			cout<<"______PIZZA FIESTA______\n"<<endl;
			cout<<"PIZZAS A PEDIR"<<endl;
			cin>>npizzas;
			for(int i=0; i<npizzas; i++)
			//cout<<"opcion grande"<<endl;
			fflush(stdin);
			tpizzasfi=npizzas*valfies;
			totalapagarfi=tpizzasfi-tpizzasfi*0.20;
			
			cout<<"_________________________________________________________\n"<<endl;
					cout<<"VALOR DE PIZZAS FIESTA: " <<tpizzasfi<<endl;
					cout<<"TOTAL A PAGAR CON DESCUENTO: "<< totalapagarfi<<endl;
			cout<<"_________________________________________________________\n"<<endl;
		
				pizzas<<"pizzas pedidas: "<<npizzas<<endl;
			pizzas<<"valor de pizzas fiesta:"<<"  "<<tpizzasfi<<endl;
			pizzas<<"total a pagar con descuento:"<<" "<<totalapagarfi<<endl;
			
			system("pause");
			break;
			
			case 4:
				system("cls");
				ventatotal=tpizzasg+tpizzasf+tpizzasfi;
				ventadeldia=totalapagarg+totalapagarf+totalapagarfi;
				
				cout<<"venta total sin descuento; "<<ventatotal<<endl;
				cout<<"venta del dia con descuetno es: "<<ventadeldia<<endl;
				pizzas<<"venta total sin descuento; "<<ventatotal<<endl;
				pizzas<<"venta del dia es: "<<" "<<ventadeldia<<endl;
				system("pause");
				break;
				
	}
			}
		pizzas.close();
		
			}
	
	







				
			
				


