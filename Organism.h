/*
 * Organism.h
 *
 *  Created on: Feb 7, 2019
 *      Author: Marissa Lima & Patrick Eaton
 */

#ifndef ORGANISM_H_
#define ORGANISM_H_
#include "Grid.h"

class Organism {
public:
	Organism();
	Organism(bool b);
	bool isPrey();
	virtual bool move(int r, int c, Grid g, int n)=0;
	virtual void breed()=0;
	void setAmAnt(bool b);
	virtual ~Organism();
};

#endif /* ORGANISM_H_ */
