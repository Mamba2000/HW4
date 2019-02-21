/*
 * Production.h
 *
 *  Created on: Feb 7, 2019
 *      Author: Marissa Lima & Patrick Eaton
 */

#ifndef PRODUCTION_H_
#define PRODUCTION_H_

class Production {
public:
	Production(int argc, char* argv[]);
	bool runProduction();
	virtual ~Production();
};

#endif /* PRODUCTION_H_ */
