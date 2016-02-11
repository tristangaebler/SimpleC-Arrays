/*
 * ArrayController.cpp
 *
 *  Created on: Feb 9, 2016
 *      Author: tristan
 */

#include "ArrayController.h"
#include <iostream>

using namespace std;

ArrayController::ArrayController() {
	// TODO Auto-generated constructor stub

}

ArrayController::~ArrayController() {
	// TODO Auto-generated destructor stub
}

void ArrayController :: start() {
    int num[10];
    for (int spot = 0; spot < 10; spot++) {
        cout << num[spot] << endl;
    }

    double otherNum[7];
    for (int spot = 0; spot < 10; spot++) {
        cout << otherNum[spot] / 3.3 << endl;
    }


}

