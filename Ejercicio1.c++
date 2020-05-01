/*El presidente de un club de futbol requiere calcular el sueldo de sus jugadores
si se tiene como dato la edad y la nacionalidad del jugador.

Ademas se sabe que el sueldo se calculara de la siguiente manera:
Sueldo fijo $2500.00
Si es extranjero recibe un bono de $500.00

Si la edad esta entre 15 y 20, el salario incrementa en $1400.00
Si la edad esta entre 21 y 25, el salario incrementa en $1500.00
Si la edad esta entre 26 y 30, el salario incrementa en $1200.00
Si la edad es mayor a 30, el salario incrementa en $800.00
Determine el sueldo del jugador si se tiene como datos la edad y nacionalidad.

Mostrar un reporte del total a pagar de planilla, así como el total de jugadores por
los rangos de edad. Ademas de indicar que rango de edad es el mas remunerado.*/


#include<iostream>
#include<fstream>
#include<string.h>
#include<cstdlib>
#include<conio.h>

using namespace std;
void menu();
void ingreso();
void mostrar();



struct jugador{
	string edad;
	string nacion;
	float sueldo;
	//float precio;
};


int main() {
	menu();
	return 0;
	
}

void menu() {
	int opcion = 0;
	while (opcion != 6) {
		system("cls");
	 cout << "  _____________________________________\n";
	 cout << " |         --> MENU <--          		|\n";
	 cout << " | 1. INGRESAR jugador       			|\n";
	 cout << " | 1. MOSTRAR SUELDO DE JUGADORES      |\n";
	 cout << " | 					       			|\n";
		cout << "Que deseas hacer? ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			system("cls");
			ingreso();
			break;
			
			case 2:
				system("cls");
				mostrar();
				break;
	
		}
	}
	}		


void mostrar() {
	int edad_jug;
	string nacional_jug;
	
	float salario=2500;	
	float totalsalario=0.00;
	float bononacional=500;
	float extranjero=0.00;
	
	ifstream jugadores;
	jugadores.open("jgd.txt", ios::in);

			while (jugadores >> edad_jug>> nacional_jug ){
		
	
			
			if((edad_jug >15)&&(edad_jug<20)) {  
			totalsalario = salario+1400;
			extranjero=totalsalario+bononacional;
			
			
		}
	
		if((edad_jug >21)&&(edad_jug<25)){
		totalsalario=salario+1500;
			extranjero=totalsalario+bononacional;
		}		
		
		if((edad_jug>26)&& (edad_jug<30)){
				totalsalario=salario+1200;
		extranjero=totalsalario+bononacional;
				}
				
				if(edad_jug >=31 ){
		totalsalario=salario+800;
			extranjero=totalsalario+bononacional;
			}

	
		cout << "______________________________" <<endl;
			
			cout << "edad:  " << edad_jug << endl;				
			cout << "nacionalidad: " << nacional_jug<< endl;	
			cout<<"salario total es:   " <<totalsalario<<endl;	
			cout<<"BONO EXTRANJERO es:  " <<extranjero<<endl;
			cout << "______________________________" << endl;
		
}

	
    


	jugadores.close();
	system("pause");

}//Fin funcion consultas


void  ingreso(){
	string edad_jug;
	string nacional_jug;
	int njugadores;
		ofstream jugadores;
	jugadores.open("jgd.txt", ios::out | ios::app);
	if (jugadores.is_open()) {
		cout << "----------------------------------------\n";
		cout << "\nDigite el numero de jugadores: ";
		 cin>>njugadores;
		cout << "----------------------------------------\n";
		
		for(int i=0;i<njugadores;i++){
		fflush(stdin); //Vacias el buffer y poder digitar mas valore
		cout << "Ingresa EDAD DEL JUGADOR: ";
		getline(cin,edad_jug);
		cout << "Ingrese LA NACIONALIDAD DEL JUGADOR: ";
		getline(cin,nacional_jug);
		
		jugadores<<edad_jug << " " <<nacional_jug << endl;

}
	}
	else {
		cout << "Error, el Archivo No se Pudo Abrir" << endl;


}
	jugadores.close();

}


