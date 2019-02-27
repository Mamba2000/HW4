/*
 * Doodlebug.cpp
 *
 *  Created on: Feb 10, 2019
 *      Author: Marissa Lima & Patrick Eaton
 */

#include "Doodlebug.h"
#include "Grid.h"
#include "Ant.h"
/**
 * Creates the doodlebug function
 */
Doodlebug::Doodlebug() {
	// TODO Auto-generated constructor stub

}
/**
 * Checks to see if the doodlebug moved
 * @return a boolean stating whether the doodlebug moved or not
 */
bool Doodlebug::move(int r, int c, Grid g, int n)
{
	bool status = false;
	occupationStatus ok [4];
	ok[0] = g.getCellOccupant(r + 1, c);
	ok[1] = g.getCellOccupant(r - 1, c);
	ok[2] = g.getCellOccupant(r, c + 1);
	ok[3] = g.getCellOccupant(r, c - 1);
	bool hasEaten = false;
	if (ok[0] == ant && !hasEaten) {
		eat(ok[0]);
		hasEaten = true;
	} else if (ok[1] == ant && !hasEaten) {
		eat(ok[1]);
		hasEaten = true;
	} else if (ok[2] == ant && !hasEaten) {
		eat(ok[2]);
		hasEaten = true;
	} else if (ok[3] == ant && !hasEaten) {
		eat(ok[3]);
		hasEaten = true;
	}
	if(!hasEaten) { /* Starvation */ }
	return status;
}
/**
 * Check to see if the doodlebug can breed
 * @return a boolean to see whether the doodlebug can breed or not
 */
bool Doodlebug::breed()
{
	bool status = true;
	return status;
}
/**
 * Checks to see if the doodlebug can eat
 * @return a boolean to see whether the doodlebug can eat or not
 */
bool Doodlebug::eat(occupationStatus a)
{
	bool status = true;

	return status;
}
/**
 * Destroys the doodlebug function
 */
Doodlebug::~Doodlebug() {
	// TODO Auto-generated destructor stub
}

