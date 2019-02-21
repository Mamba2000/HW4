/*
 * Grid.cpp
 *
 *  Created on: Feb 9, 2019
 *      Author: Marissa Lima & Patrick Eaton
 */

#include <iostream>
#include <iomanip>
#include "Grid.h"
#include "Cell.h"

int n=0; //this initial value will be changed when the program is invoked
Cell** myGridCells_ptr_array = (Cell**)nullptr;
/**
 * Creates a grid with a length of 10
 */
Grid::Grid() {
	// TODO Auto-generated constructor stub
	Grid(10); //calls general constructor with default value
}
/**
 * Goes through each cell of the array and assigns it an address
 * @param int nSquaresOnASide the length of the grid
 */
Grid::Grid(int nSquaresOnASide)
{
	n = nSquaresOnASide; //initialize size of grid
	//we do not want automatic storage for the grid

	myGridCells_ptr_array = new Cell* [n];  //first allocate array of row pointers

	for(int i=0 ; i < n ; i++)
	{
		myGridCells_ptr_array[i] = new Cell[n]; // allocate memory for columns in each row
	}
}
/**
 * Sets a specified cell to occupied
 * @param int r a number of an existing row
 * @param int c a number of an existing column
 * @param occupationStatus g determines whether a cell is occupied
 * @return sets the specified cell to occupied
 */
bool Grid::setCellOccupant(int r, int c, occupationStatus g)
{
	return myGridCells_ptr_array[r][c].setOccupant(g);
}
/**
 * Determines if a specific cell is occupied or not
 * @param int r the amount of rows in the grid
 * @param int c the amount of columns in the grids
 * @return whether or not the cell is occupied
 */
occupationStatus Grid::getCellOccupant(int r, int c)
{
	return myGridCells_ptr_array[r][c].getOccupant();
}
/**
 * Removes each element from the 2d array
 */
Grid::~Grid() {

	for(int r=0; r < n; r++)
	{
		for(int c=0; c < n; c++)
		{
			//cout << "Before freeing" << r << c << endl;
			myGridCells_ptr_array[r][c].~Cell(); // free memory for columns in each row
		}
	}
	//myGridCells_ptr_array = (Cell**)nullptr;
}

