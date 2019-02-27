/*
 * Ant.cpp
 *
 *  Created on: Feb 10, 2019
 *      Author: Marissa Lima & Patrick Eaton
 */

#include "Ant.h"
#include "Grid.h"
#include "Organism.h"
#include <cstdlib>
int rand();
/**
 * Creates the ant organism
 */
Ant::Ant()
//:Organism(true)
{

}
/**
 * Creates a grid that the ant can move around in
 * @param int r is the number of rows
 * @param int c is the number of columns
 */
Ant::Ant(int r, int c)
:Organism(true)
{
	row = r;
	col = c;
}
/**
 * Checks to see if the ant has moved positions
 * @return a boolean stating if the ant has moved
 */
bool Ant::move(int r, int c, Grid g, int n)
{
	bool status = true;
	int ok [4];
	ok[0] = g.getCellOccupant(r + 1, c);
	ok[1] = g.getCellOccupant(r - 1, c);
	ok[2] = g.getCellOccupant(r, c + 1);
	ok[3] = g.getCellOccupant(r, c - 1);
	int newRow = -1;
	int newCol = -1;
	int toMove = rand()%3;
	while (newRow + newCol == -2) {
		toMove = rand()%3;
		if(ok[0] != empty && ok[1] != empty && ok[2] != empty && ok[3] != empty) {
			status = false;
			newRow = -2;
			newCol = -2;
		} else if (toMove == 0 && ok[0] == empty) {
			newRow = r + 1;
			newCol = c;
			status = true;
		} else if (toMove == 1 && ok[1] == empty) {
			newRow = r - 1;
			newCol = c;
			status = true;
		} else if (toMove == 2 && ok[2] == empty) {
			newRow = r;
			newCol = c + 1;
			status = true;
		} else if (toMove == 3 && ok[3] == empty) {
			newRow = r;
			newCol = c - 1;
			status = true;
		}
	}
	int steps = 0;
	if (status){
		steps ++;
	}
	if(steps >= 3){

	}

	return status;
}
/**
 * Checks to see if the organism can breed
 * @return a boolean to see whether the ant can breed
 */
void Ant::breed()
{
	bool status = false;
//	if(move()){
//		status  = true;
//	}

}
/**
 * Deletes the ant function
 */
Ant::~Ant() {
	// TODO Auto-generated destructor stub

}

