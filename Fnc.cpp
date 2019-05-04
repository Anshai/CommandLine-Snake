#include <iostream>
#include "Fnc.h"

using namespace std;

	// SNEK HEAD METHODS //

void snekHead::setX(int n){
	x = n;
}

void snekHead::setY(int n){
	y = n;
}

int snekHead::getX(){
	return x;
}

int snekHead::getY(){
	return y;
}

//Snake Head Movements

void snekHead::left(){
	x--;
}

void snekHead::right(){
	x++;
}

void snekHead::up(){
	y--;
}

void snekHead::down(){
	y++;
}
