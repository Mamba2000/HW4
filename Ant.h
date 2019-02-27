/*
 * Ant.h
 *
 *  Created on: Feb 10, 2019
 *      Author: Marissa Lima & Patrick Eaton
 */

#ifndef ANT_H_
#define ANT_H_

#include "Organism.h"
#include "Grid.h"


class Ant: public Organism {
private:
	int row = 0;
	int col = 0;

public:
	Ant();
	Ant(int r=0, int c = 0);
	bool move(int r, int c, Grid g, int n);
	void breed();
	 ~Ant();
};

#endif /* ANT_H_ */
