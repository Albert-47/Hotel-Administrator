#include "Guest.h"
using namespace std;
Guest::Guest(int id, 
			string name, 
			string lastName, 
			string email, 
			int phone, 
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

Guest::getPhone(){
	return this->phone;
}

void Guest::setPhone(int phone){
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

