#include "Room.h"
#include<string>
using namespace std;

	Room::Room(int number,
		string status,
		string arrivalDate,
		string dueDate,
		string guestName, 			//Constructor
		string guestLastName,
		int guestId,
		string roomType,
		int capacity){
			
			this->status = status;
			this->arrivalDate = arrivalDate;
			this->dueDate = dueDate;
			this->guestName = guestName;
			this->guestLastName = guestLastName;
			this->guestId = guestId;
			this->roomType = roomType;
			this->capacity = capacity;
		}
	
	//A partir de aqui se definen las funciones get y set de cada propiedad
	
	Room::getNumber(){
		return this->number;
	}
	
	string Room::getArrivalDate(){
		return this->arrivalDate;
	}
	
	void Room::setArrivalDate(string arrivalDate){
		this->arrivalDate = arrivalDate;
	}
	
	string Room::getDueDate(){
		return this->dueDate;
	}

	void Room::setDueDate(string dueDate){
		this->dueDate = dueDate;
	}
	
	string Room::getGuestName(){
		return this->guestName;
	}
	
	void Room::setGuestName(string guestName){
		this->guestName = guestName;
	}
	
	Room::getGuestId(){
		return this->guestId;
	}
	
	void Room::setGuestId(int guestId){
		this->guestId = guestId;
	}
	
	string Room::getRoomType(){
		return this->roomType;
	}
	
	void Room::setRoomType(string roomType){
		this->roomType = roomType;
	}
	
	Room::getCapacity(){
		return this->capacity;
	}
	
	void Room::setCapacity(int capacity){
		this->capacity = capacity;
	}




