#include "GuestAdmin.h"
#include "../../classes/Guest.h"
#include <iostream>
#include <string>
using namespace std;

//Variable que determina la acción a realizar en este módulo

int action;

	//Se crea el array de huespedes

Guest guests[100];

///////////////////////////Cuerpo principal del módulo///////////////////

void GuestAdmin(){
	
	Guest test;
	Guest test2;
	guests[0] = test; 
	guests[1] = test2; 
	guests[1].setId(25);
	guests[1].setName("Albert");
	
	
	//Se pregunta la accion que se desea realizar
	
	cout<<"*********************************";
	cout<<"\nADMINISTRADOR DE HUESPEDES\n";
	cout<<"*********************************\n\n";
	cout<<"Numero de huespedes: "<<guestNumber()<<endl<<endl;
	cout<<"Registrar huesped (1)      Eliminar huesped (2)    Ver informacion de huesped (3)  Volver al menu anterior (4)\n\n";
	cin>>action;
	
	
	while(action != 4){
		
		switch(action){
			case 1:
				registerGuest();
				break;
			
			case 2:
				deleteGuest();
				break;
				
			case 3:
				viewGuest();
				break;
				
			case 4:
				return;
				break;
				
			default:
				cout<<"Opcion invalida. Por favor introduzca una opcion valida: ";
				cin>>action;
		}
		
	}
	

}

/////////////////Definición de funciones//////////////////////////////////

///////////Funcion para calcular el numero de huespedes

int guestNumber(){
	
	int numberOfGuests = 0;
	
	for(int i = 0; i < 100; i++){
		
		if(guests[i].getName() != ""){
			numberOfGuests++;
		}
	}
	
	return numberOfGuests;
}

///////////Función que valida un ID (se asegura de que no esté ocupado)

bool validId(int id){
	
	if(id == 0 || id > 100){
		return false;
	}
	
	for(int i = 0; i < 100; i++){
		
		if(guests[i].getId() == id){
			return false;
		}
		
	}
	
	return true;
}

///////////Función para registrar huespedes
	
void registerGuest(){
	
	//Se solicita el ID
	
	cout<<"Por favor introduzca la informacion del huesped acontinuacion\n\n";
	
	cout<<"ID (numero comprendido entre el 1 y el 100): ";
	
	int id;
	cin>>id;
	
	//Se valida el ID
	
	do{
		if(!validId(id)){
			cout<<"\n\nID invalido, ya se encuentra en uso o no esta en el rango establecido. Por favor, introduzca otro ID: ";
			cin>>id;
		} 
	} while(!validId(id));
	
	//Se solicita el nombre
	
	cout<<"\n\nNombre: ";
	string name;
	cin>>name;
	
	//Se solicita el apellido
	
	cout<<"\n\nApellido: ";
	string lastName;
	cin>>lastName;
	
	//Se solicita el email
	
	cout<<"\n\nEmail: ";
	string email;
	cin>>email;
	
	//Se solicita el número de celular
	
	cout<<"\n\nNumero de celular: ";
	double phone;
	cin>>phone;
	
	//Se solicita la direccion
	
	cout<<"\n\nDireccion (Sin espacios): ";
	string direction;
	cin>>direction;
	
	//Se pregunta si el huesped ya pagó o no
	
	cout<<"\n\nEl huesped ya pago? (escriba 'si' o 'no'): ";
	string payStatus;
	cin>>payStatus;
	
	//Se solicita el numero de habitacion que se le asignará
	
	cout<<"\n\nHabitacion en la que se hospedara: ";
	int room;
	cin>>room;
	
	//Se valida la habitacion introducida
	
	while(room > 100 || room == 0){
		cout<<"\n\nEl hotel posee solo 100 habitaciones, no existe la habitacion que escribio. Escriba una habitacion valida: ";
		cin>>room;
	}
	
	//Se solicita el tipo de habitacion que se le asignará
	
	cout<<"\n\nLa habitacion en la que se hospedara es de tipo: ";
	string roomType;
	cin>>roomType;
	
	//Se pregunta si el cliente pagó un paquete con comida incluida
	
	cout<<"\n\nComida incluida en el paquete? (escriba 'si' o 'no'): ";
	string food;
	cin>>food;
	
	//Se pregunta el número de días que se hospedará el huesped en el hotel
	
	cout<<"\n\nNumero de dias de estadia : ";
	int stayTime;
	cin>>stayTime;
	
	//Se modifica el objeto con el ID correspondido con los datos del cliente proporcionado
	
	guests[id].setId(id);
	guests[id].setName(name);
	guests[id].setLastName(lastName);
	guests[id].setEmail(email);
	guests[id].setPhone(phone);
	guests[id].setDirection(direction);
	guests[id].setPayStatus(payStatus);
	guests[id].setRoom(room);
	guests[id].setRoomType(roomType);
	guests[id].setFood(food);
	guests[id].setStayTime(stayTime);
	
	cout<<"\n\nHuesped con ID "<<id<<" registrado con exito!\n\n";
	
	cout<<"Registrar huesped (1)      Eliminar huesped (2)    Ver informacion de huesped (3)  Volver al menu anterior (4)\n\n";
	cin>>action;
	
}

///////////Función para eliminar huesped

void deleteGuest(){
	cout<<"Delete Guest function";
	cout<<"Registrar huesped (1)      Eliminar huesped (2)    Ver informacion de huesped (3)  Volver al menu anterior (4)\n\n";
	cin>>action;
}

void viewGuest(){
	cout<<"View Guest function";
	cout<<"Registrar huesped (1)      Eliminar huesped (2)    Ver informacion de huesped (3)  Volver al menu anterior (4)\n\n";
	cin>>action;
}