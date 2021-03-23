#pragma once
#include <string>

using namespace std;

class Room {
	public:
		//default constructor
		Room();

		//acessors
		int getHeight();
		int getWidth();
		int getLength();
		string getName();

		//mutators
		void changeHeight(int height);
		void changeWidth(int width);
		void changeLength(int length);
		void changeName(string name);

		//overloaded constructor
		Room(string name,int height,int width,int length);
	private:
		//member variables
		string mName;
		int mHeight,mWidth,mLength;
};