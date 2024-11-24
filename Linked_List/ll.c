#include <stdio.h>
#include <stdlib.h>
#include "ll.h"



LL create_ll(Data head_data, dtype data_type){
    //Allocate memory for a node
    Node * head = (Node *)(malloc(sizeof(Node)));
    if (!head){
        perror("OUT OF MEMORY");
        exit(0); 
    }
    switch (data_type){
        case INTEGER:
            Data head_data = (Data)(malloc(sizeof(head_data)));
            head->data = head_data; 
        case STRING:
            Data head_data = (Data)(malloc(sizeof(head_data)));



    }

    LL * LinkedList = (LL *)(malloc(sizeof(LL))); 
    
}


LL append(Data data_to_add);