#ifndef FNC_H
#define FNC_H

class snekHead {
        public:
        int x;
        int y;
	
	
	// Set coordinates
	void setX(int n);
	void setY(int n);
	
	// Return current coordinates
	int getX();
	int getY();
	
	// Change position (by changeing coordinates)
	void left();
	void right();
	void up();
	void down();


};

#endif 		// FNC_H

