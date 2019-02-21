/*
 * Organism.cpp
 *
 *  Created on: Feb 7, 2019
 *      Author: Marissa Lima & Patrick Eaton
 */
//set a pointer to organism
#include "Organism.h"
bool amAnt = false;
/**
 * Defines an organism
 */
Organism::Organism() {
	// TODO Auto-generated constructor stub

}
/**
 * Checks to see if the input is an organism
 * @param bool b
 * @return true if amAnt is an object
 */
Organism::Organism(bool b) {
	amAnt = b;

}
/**
 * Checks to see if the organism is prey
 * @return the organism
 */
bool Organism::isPrey()
{
	return amAnt;
}
/**
 * Setting an organism to either it exists or it doesn't
 * @param bool b takes either true or false
 * @return sets the amAnt equal to the boolean that is inputted
 */
void Organism::setAmAnt(bool b)
{
	amAnt = b;
}
/**
 * Deletes an organism
 * @return the set up to deleting the organism
 */
Organism::~Organism() {
	// TODO Auto-generated destructor stub
}

