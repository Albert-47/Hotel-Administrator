#include <iostream>
#include "modules/RoomState/RoomState.h"
#include "modules/GuestAdmin/GuestAdmin.h"
using namespace std;

int main() {
	cout<<"--------------------------------------------------------------\n"; // Se despliega la info del hotel
	cout<<"Zambarit Suite\n";
	cout<<"--------------------------------------------------------------\n\n";
	
	//Aqui estará toda la información del hotel que habíamos acordado, pero eso lo hacemos luego. No es prioridad.
	
	cout<<"Bienvenido a la herramienta administrativa de Zambarit Suite.\nQue accion desea realizar?\n";
	cout<<"\nComprobar estado de las habitaciones (1)           Administrador de huespedes (2)\n\n";
	
	int mainAction;
	
	cin>>mainAction;
	
//	while(mainAction){
		
		switch (mainAction){
			case 1: 
				RoomState();  //Se ejecuta el modulo de Eliangel
				break;
			case 2:
				GuestAdmin(); //Se ejecuta mi módulo
				break;
			default: 
				cout<<"No es una opcion valida. Por favor introduzca una opcion valida (1 o 2)\n\n";
				cin>>mainAction;
				break;
		}
		
//	}

//Observen que encerré todo dentro de un ciclo while que no se detendrá hasta que mainAction sea false. Esto es 
//para que se continue ejecutando el switch si se desea cambiar de acción. 
//Dejaré el código del ciclo while comentado para que puedan hacer sus testings sin necesidad de que tengan que poner
//el mainAcion en false, pero tengan en cuenta que cuando hayan hecho todos sus testings y todo funcione bien, deben hacer que
//el mainAction sea false o convertirlo en la otra accion disponible (que seria 2, que es la que yo voy a programar).


//La informacion del hotel irá luego, no se preocupen.

	
	cout<<"Gracias por usar Zambarit Suite Administrator. Tenga buen día!";
	
	system("pause");
	
	
	return 0;
}