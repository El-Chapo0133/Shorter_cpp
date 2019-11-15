#include "sorter.h"
#include "math.h"

using namespace std;

/** @name 	: sortArrayPositive
 *  @desc	: sort an array from minimal to maximal value and return it
 *  @param	: the array to sort
 *  @return	: the sorted array
 *
 * ****************************************************** */
int Sorter::sortArrayPositive(int array[]) {
	return sort(begin(array), end(array))
}
/** @name 	: sortArrayNegative
 *  @desc	: sort an array from maximal to minimal value and return it
 *  @param	: the array to sort
 *  @return	: the sorted array
 *
 * ****************************************************** */
int Sorter::sortArrayNegative(int array[]) {
	int tempArray = sort(begin(array), end(array))
	int returnArray[array.length] = { }
	for (int index = 0; index < array.length, index++) {
		returnArray[index] = array[Abs(index - array.length)]
	}
}
/** @name 	: findValueGetIndex
 * 	@param	: array input, where to find the value
 *  @param 	: value to find
 *  @return : return the index where the value is located, return -1 if the value isn't located
 *  
 * ****************************************************** */
int Sorter::findValueGetIndex(int array[], int value) {
	for (int index = 0; index < array.length; index++) {
		if (Sorter::isValueFind(array[index], value)) 
			return index
	}
	return -1
}
/** @name 	: findValueGetBool
 * 	@param	: array input, where to find the value
 *  @param 	: value to find
 *  @return : return a bool if the value has been located
 *  
 * ****************************************************** */
bool Sorter::findValueGetBool(int array[], int value) {
	for (int index = 0; index < array.length; index++) {
		if (Sorter::isValueFind(array[index], value))
			return true
	}
	return false
}
bool Sorter::isValueFind(int inputValue, int valueTofind) {
	if (inputValue == valueTofind) {
		return true
	} else {
		return false
	}
}