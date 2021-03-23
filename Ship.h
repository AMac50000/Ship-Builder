#pragma once
#include <string>
#include <iostream>
#include "Room.h"

using namespace std;

class Ship {
	public:
		//acessors
		int getnumrooms();
		int getCubicFeet();
		string getShipName();
		string getCapianName();
		bool getFee();
		int getCost();

		//mutators
		void setnumrooms(int Rooms);
		void setshipname(string name);
		void setcaptianname(string name);
		void setFee(bool charge);


		//void defineArray();

		//function for adding rooms to the ship
		void AddRoom(int place, Room room);

	private:
		//creates a dynamic array to hold all the ships rooms
		const int Size = numrooms;
		Room * Rooms = new Room[Size];

		//member variables
		int cubicFotage;
		string mShipName, mCaptianName;
		int numrooms;
		bool fee = false;
};