#include <stdio.h>
int pickup(int su1);
int pickup(int su1) {
	int su2;
	if (su1 <= 49 && su1 >= 1) {
		su2 = 1;
	}
	else if (su1 >= 50 && su1 <= 69) {
		su2 = 2;
	}
	else if (su1 >= 70 && su1 <= 84) {
		su2 = 3;
	}
	else if (su1 >= 85 && su1 <= 94) {
		su2 = 4;
	}
	else {
		su2 = 5;
	}
	return su2;
}
int save(int array[], int su1);
int save(int array[], int su1) {
	if (su1 == 1) {
		array[0] = array[0] + 1;
	}
	else if (su1 == 2) {
		array[1] = array[1] + 1;
	}
	else if (su1 == 3) {
		array[2] = array[2] + 1;
	}
	else if (su1 == 4) {
		array[3] = array[3] + 1;
	}
	else {
		array[4] = array[4] + 1;
	}
	return array, su1;
}
int elimination(int array[],int gogosu1,int savesu2);
int elimination(int array[],int gogosu1,int savesu2) {
	if (array[savesu2 - 1] < gogosu1) {
		return 0;
	}
	array[savesu2 - 1] = array[savesu2 - 1] - gogosu1;
	return array, gogosu1, savesu2;
}