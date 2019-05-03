#include <iostream>
using namespace std;

class snekHead {
	public:
	int x;
	int y;

	// SET METHONDS

	void setX(int n){
		x = n;
	}
	
	void setY(int n){
		y = n;
	}

	// GET METHONDS

	int getX(){
		return x;
	}
	
	int getY(){
		return y;
	}

	// MOVEMENT METHODS
	
	void left(){
		x--;
	}
	
	void right(){
		x++;
	}
	
	void up(){
		y--;
	}
	
	void down(){
		y++;
	}
};

class RunGame {
	public:
	int x,y;
	int height,width;
	
	// SET METHODS

	void setX(int n){
		x = n;	
	}
	
	void setY(int n){
		y = n;
	}

	void setH(int n){
		height = n;
	}
	
	void setW(int n){
		width = n;	
	}

	// Print Method

	void print(){
		for(int i=0;i<height;i++){
			for(int j=0;j<width;j++){
			if (i == 0 && j == 0){
					cout << "\u2554";
				} else if (i==0 && j == width-1 ){
					cout << "\u2557";
				} else if (i == height - 1 && j == 0){
					cout << "\u255A";
				} else if (i == height - 1 && j == width - 1){
					cout << "\u255D";
				} else if(i == y && j == x){
					cout << "\u2585";
				} else if ((i == 0 || i == height-1) && (j > 0 && j < width - 1)){
					cout << "\u2550";
				} else if ((j == 0 || j == width - 1) && (i > 0 && i < height - 1)){
					cout << "\u2551";
				}else{
					cout << " ";
				}
			}
			cout << endl;
		}

	
	
	}
};

int main(){

	char direction;
	bool exit = false;

	
	RunGame game;
	snekHead snek;

	snek.setX(10);
	snek.setY(10);	  
	
	game.setH(25);	
	game.setW(40);
			  
	game.setX(snek.getX());
	game.setY(snek.getY());

	game.print();

	cout << "Direction required: ";
	cin >> direction;
	
	while(!exit){
		switch(direction){
			case 'w' : snek.up();
					   break;
			case 'a' : snek.left();
					   break;
			case 's' : snek.down();
					   break;
			case 'd' : snek.right();
					   break;
			case '1' : exit = true;
					   break;
		}			  
	game.setX(snek.getX());
	game.setY(snek.getY());
	game.print();
	
	cout << "Direction required: ";
	cin >> direction;
	
	}

	return 0;
}
