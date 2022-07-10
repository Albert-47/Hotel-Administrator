#include "Guest.h"
#include <iostream>
using namespace std;

Guest::Guest(int id, 
			string name, 
			string lastName, 
			string email, 
			double phone, 
			string payStatus, 
			int room, 
			string roomType, 
			string food, 
			int stayTime)
{
	this->id = id;
	this->name = name;
	this->lastName = lastName;
	this->email = email;					//Inicializador de las propiedades del objeto
	this->phone = phone;
	this->payStatus = payStatus;
	this->room = room;
	this->roomType = roomType;
	this->food = food;
	this->stayTime = stayTime;
}

//A partir de aqui se definen las funciones get y set de cada propiedad

Guest::getId(){
	return this->id;
}

void Guest::setId(int id){
	this->id = id;
}

string Guest::getName(){
	return this->name;
}

void Guest::setName(string name){
	this->name = name;
}

string Guest::getLastName(){
	return this->lastName;
}

void Guest::setLastName(string lastName){
	this->lastName = lastName;
}

string Guest::getEmail(){
	return this->email;
}	

void Guest::setEmail(string email){
	this->email = email;
}

double Guest::getPhone(){
	return this->phone;
}

void Guest::setPhone(double phone){
	this->phone = phone;
}

string Guest::getDirection(){
	return this->direction;
}

void Guest::setDirection(string direction){
	this->direction = direction;
}

string Guest::getPayStatus(){
	return this->payStatus;
}

void Guest::setPayStatus(string payStatus){
	this->payStatus = payStatus;
}

Guest::getRoom(){
	return this->room;
}

void Guest::setRoom(int room){
	this->room = room;
}

string Guest::getRoomType(){
	return this->roomType;
}

void Guest::setRoomType(string roomType){
	this->roomType = roomType;
}

string Guest::getFood(){
	return this->food;
}

void Guest::setFood(string food){
	this->food = food;
}

Guest::getStayTime(){
	return this->stayTime;
}

void Guest::setStayTime(int stayTime){
	this->stayTime = stayTime;
}

//Función que muestra todos los datos

void Guest::fullData(){
	
	cout<<"Nombre: "<<this->name<<endl<<
	"Apellido: "<<this->lastName<<endl<<
	"ID: "<<this->id<<endl<<
	"Email: "<<this->email<<endl<<
	"Celular: "<<this->phone<<endl<<
	"Direccion: "<<this->direction<<endl<<
	"Pago?: "<<this->payStatus<<endl<<
	"Habitacion: "<<this->room<<endl<<
	"Tipo de habitacion: "<<this->roomType<<endl<<
	"Incluye comida?: "<<this->food<<endl<<
	"Dias de estadia: "<<this->stayTime<<endl;
}

