/*
 * Cell.h
 *
 *  Created on: Feb 9, 2019
 *      Author: Marissa Lima & Patrick Eaton
 */

#ifndef CELL_H_
#define CELL_H_

enum occupationStatus { Empty, Ant, Doodlebug};


class Cell {
public:
	Cell();
	bool setOccupant(occupationStatus g);
	occupationStatus getOccupant();
	virtual ~Cell();
};

#endif /* CELL_H_ */
