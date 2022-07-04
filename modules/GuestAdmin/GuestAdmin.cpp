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
	cout<<"Numero de huespedes: "<<guestNumber()<<endl;

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