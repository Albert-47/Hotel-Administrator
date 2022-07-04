#include "GuestAdmin.h"
#include "../../classes/Guest.h"
#include <iostream>
using namespace std;

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
	
	cout<<"ADMINISTRADOR DE HUESPEDES\n\n";
	cout<<"Numero de huespedes: "<<guestNumber()<<endl<<endl;
	
	registerGuest();

}

/////////////////Definición de funciones//////////////////////////////////

//Funcion para calcular el numero de huespedes

int guestNumber(){
	
	int numberOfGuests = 0;
	
	for(int i = 0; i < 100; i++){
		
		if(guests[i].getName() != ""){
			numberOfGuests++;
		}
	}
	
	return numberOfGuests;
}

//Función que valida un ID (se asegura de que no esté ocupado)

bool validId(int id){
	
	bool validation = true;
	
	for(int i = 0; i < 100; i++){
		
		if(guests[i].getId() == id){
			validation = false;
		}
		
	}
	
	return validation;
}

//Función para registrar huespedes
	
void registerGuest(){
	
	cout<<"Por favor introduzca la informacion del huesped acontinuacion\n\n";
	
	cout<<"ID (numero comprendido entre el 1 y el 100): ";
	
	int id;
	cin>>id;
	
	do{
		if(validId(id)){
			return;
		} else {
			cout<<"\n\nID invalido, ya se encuentra en uso. Por favor, introduzca otro ID: ";
			cin>>id;
		}
	} while(!validId(id));
	
	
}