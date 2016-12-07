#ifndef LOGIC_H
#define LOGIC_H

#include <ctime>

class HeightMap{

	public:
		HeightMap();
		void print();
		void reset();
		void constructCircleAlg();
		void createCircle(int, int);
		void createCrater(int, int);
		
		void printInstructions();
		~HeightMap();
		double terrainMap [300][300];
		int xSize;
		int ySize;
		int heightMax;
		clock_t t;
		int max; //to use for cam
	private:
		int numOfCircles;
		void mp(int,int,int,int,int,int,int,int);



};




#endif