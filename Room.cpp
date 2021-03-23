#include "Room.h"

//overloaded constructor
Room::Room(string name, int height, int width, int length) {
	mName = name;
	mHeight = height;
	mWidth = width;
	mLength = length;
}

//acessors
int Room::getHeight() {
	return mHeight;
}
int Room::getWidth() {
	return mWidth;
}
int Room::getLength() {
	return mLength;
}
string Room::getName() {
	return mName;
}

//the default constructor
Room::Room() {

}

//mutators
void Room::changeHeight(int height) {
	mHeight = height;
}
void Room::changeWidth(int width) {
	mWidth = width;
}
void Room::changeLength(int length) {
	mLength = length;
}
void Room::changeName(string name) {
	mName = name;
}
