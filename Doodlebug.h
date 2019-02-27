/*
 * Doodlebug.h
 *
 *  Created on: Feb 10, 2019
 *      Author: Marissa Lima & Patrick Eaton
 */

#ifndef DOODLEBUG_H_
#define DOODLEBUG_H_

#include "Organism.h"
#include "Grid.h"
#include "Ant.h"

class Doodlebug: public Organism {
public:
	Doodlebug();
	bool move(int r, int c, Grid g, int n);
	void breed();
	bool eat(occupationStatus a);
	virtual ~Doodlebug();
};

#endif /* DOODLEBUG_H_ */
