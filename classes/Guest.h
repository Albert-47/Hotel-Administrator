#ifndef GUEST_H
#define GUEST_H
#include <string>
using namespace std;
class Guest
{
	private:
		int id;
		string name;
		string lastName;  //apellido
		string email;
		double phone; //numero de celular del huesped
		string direction; //Direccion del huesped
		string payStatus; // esta propiedad debe llenarse solo con 'si' o 'no', porque refleja si el huesped pagó o no
		int room;  //numero de la habitacion en que se encuentra el huesped
		string roomType; //tipo de habitacion en la que se encuentra
		string food; //esta propiedad debe llenarse con 'si' o 'no', porque refleja si el huesped pagó o no por una estadia con comida incluida
		int stayTime;  //el número de días que el huesped pagó para quedarse en el hotel
		
		
	public:
		Guest(int id = 0, 
			string name = "", 
			string lastName = "", 
			string email = "", 
			double phone = 0, 
			string payStatus = "no", 
			int room = 0, 
			string roomType = "Cama individual", 
			string food = "no", 
			int stayTime = 1);
			
		//Declaracion de los métodos get y set de cada una de las propiedades	
		
		int getId();
		void setId(int id);
			
		string getName();
		void setName(string name);
		
		string getLastName();
		void setLastName(string lastName);
		
		string getEmail();
		void setEmail(string email);
		
		double getPhone();
		void setPhone(double phone);
		
		string getDirection();
		void setDirection(string direction);
		
		string getPayStatus();
		void setPayStatus(string payStatus);
		
		int getRoom();
		void setRoom(int room);
		
		string getRoomType();
		void setRoomType(string roomType);
		
		string getFood();
		void setFood(string food);
		
		int getStayTime();
		void setStayTime(int stayTime);
		
		//Impresión de todos los datos
		
		void fullData();
};

#endif