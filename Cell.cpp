/*
 * Cell.cpp
 *
 *  Created on: Feb 9, 2019
 *      Author: Marissa Lima & Patrick Eaton
 */

#include "Cell.h"

occupationStatus guest  = empty;

Cell::Cell() {

	guest = empty;
}
/**
 * Sets certain cells to true if the cell is occupied
 * @param occupationStatus g holds the location you want to mark as occupied
 * @return a boolean of whether the occupant cell is actually set to occupied
 */
bool Cell::setOccupant(occupationStatus g)
{
	bool result = true;
	if(guest==empty)
	{
		guest = g;
	}
	else
	{
		result = false;
	}
	return result;
}
/**
 * States whether a cell is occupied or not
 * @return the values of the row and column that is occupied
 */
occupationStatus Cell::getOccupant()
{
	return guest;
}
/**
 * Destroys the cell function
 */
Cell::~Cell() {
	// TODO Auto-generated destructor stub
}

