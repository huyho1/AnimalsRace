// FILE:  animals.c
// WRITTEN BY: Huy Ho(hqho@wpi.edu), Jan 19, 2024
// IMPLEMENTS: ANIMALS.H
#include "animals.h"

//updates hare position
int update_hare(int current_position){
    int pos = current_position;
	float val = ((float) rand() / (float)(RAND_MAX));

	//movement conditions
	if (val >= 0 && val < 0.25) { 
        return current_position;
    }
	else if (val >= 0.25 && val < 0.45) {
		pos = pos +9;
	}
	else if (val >= 0.45 && val < 0.55) {
		pos = pos - 10;
	}
	else if (val >= 0.55 && val < 0.8) {
		pos = pos + 2;
	}
	else {
		pos = pos - 3;
	}

	//stops it from going negative
	if (pos < 0) {
		return 0;
	}
	return pos;
}

//updates tortoise position
int update_tortoise(int current_position){
    int pos = current_position;
	float val = ((float) rand() / (float)(RAND_MAX));
	
	//movement conditions
	if (val >= 0 && val < 0.45) {
        pos = pos + 3;
    }
	else if (val >= 0.45 && val < 0.65) {
		pos = pos - 5;
	}
	else {
		pos = pos + 1;
	}

	//stops it from going negative
	if (pos < 0) {
		return 0;
	}
	return pos;
}

//updates bee position
int update_bee(int current_position){
	float val = ((float) rand() / (float)(RAND_MAX));

	//movement conditions
	if (val >= 0 && val < 0.3) {
        return current_position + 2;
    }
	else if (val >= 0.3 && val < 0.5) {
		return current_position + 1;
	}
	else return current_position;
}