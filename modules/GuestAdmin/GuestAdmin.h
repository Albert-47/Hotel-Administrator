#include <string>
#include "../../classes/Guest.h"

void GuestAdmin();
int guestNumber();
void registerGuest();
bool validId(int id);
void deleteGuest();
void viewGuest();
Guest searchGuest(string name);
void deleteGuest();
void searchDeleteGuest(string data);

	//Se crea el array de huespedes

Guest guests[100];
