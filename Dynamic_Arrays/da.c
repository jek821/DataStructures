#include <stdio.h>
#include "da.h"

// Create a new array of specified starting length and type
d_array * create_array(int length, char * type){

      
}



// Add data to end of array 
void append(d_array array, data_type data);

/*pop should remove last index value if both passed index params are null, 
otherwise remove and return value at specified index*/
data_type pop(d_array array, int index);

//Cut will take two indices (inclusive) and cut out all data at and between the specified indices 
void cut(d_array array, int start_index, int end_index);

//sort array 
// pass in reversed as only param if sort should be done in reverse order 
// on any array 30 elements or less I will use insertion sort
// on any array with size greater than 30 and less than 1,000 I will use heap sort
// on any array with size greater than 1,000 I will use merge sort (insertion sort when the broken down arrays reach size less than 30)
void sort(d_array array); 

