#include "Ship.h"

//acessors
string Ship::getShipName() {
	return mShipName;
}

string Ship::getCapianName() {
	return mCaptianName;
}

bool Ship::getFee() {
	return fee;
}
int Ship::getnumrooms() {
	return numrooms;
}

void Ship::setnumrooms(int Rooms) {
	numrooms = Rooms;
}

int Ship :: getCubicFeet() {
	return cubicFotage;
}

void Ship::AddRoom(int place, Room room) {
	//adds the room to the Rooms array
	Rooms[place] = room;
	//int lenght = , width, height;

	//increases the cubic footage of the ship by the cubic footage of the new room
	cubicFotage += (room.getLength()*room.getWidth()*room.getHeight());
}

//a mutators
void Ship::setshipname(string name) {
	mShipName = name;

}

void Ship::setcaptianname(string name) {
	mCaptianName = name;
}

void Ship::setFee(bool charge) {
	fee = charge;
}



//calculates the ship's cost
int Ship::getCost() {
	if (fee == true) {
		int cost = (cubicFotage * 20);
		return cost;
	}

	if (fee == false) {
		int cost = (cubicFotage * 10);
		return cost;
	}
}
