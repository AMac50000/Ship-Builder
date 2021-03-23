/*Author: Andrew MacDonald
    Description :
        A program that takes customers orders for space ships then calculates how much to charge them
*/

//Including headers
#include "Room.h"
#include "Ship.h"

//Including libraries
#include <fstream>

//the main function that is called on start
int main() {
	//a variable for the number of ships the user wants to build
	int numShips;
	ifstream input("shipdata.txt");

	//takes user input for the number of ships they want constructed
	input >> numShips;
	const int Size = numShips;

	//a dynamic array for containing all teh created ships
	Ship * Ships = new Ship[Size];
	
	//a for loop that creates the nuber of ships that the user requested
	for (int i = 0; i < numShips; i++) {
		Ship spaceShip;

		//gets user input and sets the ship's name to that
		string shipName;
		input >> shipName;

		//gets user input and sets the captain's name to that
		string captianName;
		input >> captianName;

		//gets user input and sets the number of rooms to that
		int rooms;
		input >> rooms;

		//a for loop that populates the ship with rooms
		for (int j = 0; j < rooms; j++) {

			//creating variables
			bool bridgeRequirement;
			string roomName;
			int length;
			int width;
			int height;
			int bridges = 0, latrines = 0, bays = 0;

			//gets input from user for type of room then adds one to the count on the variable representing that type of room
			input >> roomName;
			if (roomName == "Bridge") {
				bridges ++;
			}

			if (roomName == "Latrine") {
				latrines++;
			}

			if (roomName == "Bay") {
				bays++;
			}

			//geting user input for the room's dimensions then putting that into variables
			input >> length;
			input >> width;
			input >> height;

			//calculating the ship's total area
			int area = (width * length);

			if (height < 7){
				spaceShip.setFee(true);
			}

			if (area < 20) {
				spaceShip.setFee(true);
			}
 
			//creates a room using the user defined variables
			Room room(roomName, height, width, length);

			//adds the room to the ship
			spaceShip.AddRoom(j, room);
		}
	}

	//for each ship it outputs all the variables in teh ship class then gives information about all the rooms in the ship
	for (int i = 0; i < numShips; i++) {
		cout << "Ship:" << Ships[i].getShipName() << endl << "Captian: " << Ships[i].getCapianName() << endl;
		cout << "Total Cubic Footage: " << Ships[i].getCubicFeet() << endl << "Noncompliance fee assessed? " << Ships[i].getFee() << "Total cost:" << Ships[i].getCost();
	}
}