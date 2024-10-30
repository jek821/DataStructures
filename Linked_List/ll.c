#include <stdio.h> 
#include <stdlib.h> 

// Lets make a union which we will use as the data type 
// for now I will just allow ints and chars
// Once I implement a dynamic array datatype I will use that to allow for strings
typedef union{
    int *int_data; 
    char *char_data; 
}Data;

typedef struct{
    Data data; //Don't use * because it is an inferred pointer due to union definition
    Node *next; //has attribute of type node which is a pointer to a Node type 
}Node;

typedef struct{
    Node *head; 
}LL; 

LL create_ll(Data head_data){
    
}