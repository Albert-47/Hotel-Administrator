#ifndef ROOM_H
#define ROOM_H
#include <string>
using namespace std;

class Room
{
	private:
		int number;  //Numero de habitación
		string status;   //status: ocupada, desocupada
		string arrivalDate;  //Fecha de llegada. Es un string porque no hay formato para fechas en C++
		string dueDate;   //Fecha de vencimiento, que es la fecha en la que se desocupa la habitación.
		string guestName;  //Nombre del huesped que alberga
		string guestLastName; //Apellido del huesped que alberga
		int guestId; //ID del cliente, para poder buscarlo luego con el administrador de huespedes
		string roomType; //Tipo de habitación
		int capacity;  //Capacidad de personas que puede albergar la habitación
		
	public:
		
		Room(int number,
			string status,
			string arrivalDate,
			string dueDate,
			string guestName, 			//Constructor
			string guestLastName,
			int guestId,
			string roomType,
			int capacity);
		
		
		//Funciones get y set de cada propiedad
		
		int getNumber();  //No tiene sentido añadir una funcion set para el numero de habitación, puesto que una vez 
						  //establecido, no se le cambia. Si no sabes como añadirle un número a la habitacion sin la funcion set, consúltame.
		
		string getStatus();
		void setStatus(string status);
		
		string getArrivalDate();
		void setArrivalDate(string arrivalDate);
		
		string getDueDate();
		void setDueDate(string dueDate);
		
		string getGuestName();
		void setGuestName(string guestName);
		
		string getGuestLastName();
		void setGuestLastName(string guestLastName);
		
		int getGuestId();
		void setGuestId(int guestId);
		
		string getRoomType();
		void setRoomType(string roomType);
		
		int getCapacity();
		void setCapacity(int capacity);
};

#endif