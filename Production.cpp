/*
 * Production.cpp
 *
 *  Created on: Feb 7, 2019
 *      Author: Marissa Lima & Patrick Eaton
 */

#include "Production.h"
#include <iostream>

int timestepsLeft=100;

/**
 * Creates the production function
 * @param int argc
 * @param char* argv[]
 */
Production::Production(int argc, char* argv[]) {
	// TODO Auto-generated constructor stub

	//all 6 arguments need to be included in this function
	//all of the following values are default values
	//
	int timestepsLeft = 1000; //initialize available timesteps
	int grid_size = 20;
	int doodlebugs = 5;
	int ants = 9;
	int seed = 1;
	int pause; //blank or 0 means do not pause
	//time step is like the number of rounds each organism gets to move


}
/**
 * Runs the production
 * @return the amount of steps the organism has left
 */
bool Production::runProduction()
{
	bool result = true;
	while(timestepsLeft-- > 0)
	{

		//ants.step;
	}
	return result;
}
/**
 * Deletes the production function
 * @return null
 */
Production::~Production() {
	// TODO Auto-generated destructor stub
}

