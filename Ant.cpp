/*
 * Ant.cpp
 *
 *  Created on: Feb 10, 2019
 *      Author: Marissa Lima & Patrick Eaton
 */

#include "Ant.h"
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
bool Ant::move()
{
	bool status = true;
	return status;
}
/**
 * Checks to see if the organism can breed
 * @return a boolean to see whether the ant can breed
 */
bool Ant::breed()
{
	bool status = true;
	return status;
}
/**
 * Deletes the ant function
 */
Ant::~Ant() {
	// TODO Auto-generated destructor stub

}

