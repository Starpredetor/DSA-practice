/*
Theory: 
    A hash table is a data structure used to implement an associative array, a structure that can 
    map keys to values. A hash table uses a hash function to compute an index into an array of 
    buckets or slots. A hash table is a data structure which is used to store key-value pairs. Hash 
    function is used by hash table to compute an index into an array in which an element will be 
    inserted or searched. 
    
    Linear probing is a collision resolving technique in Open Addressed Hash tables. In this 
    method, each cell of a hash table stores a single key–value pair. If a collision is occurred by 
    mapping a new key to a cell of the hash table that is already occupied by another key. This 
    method searches the table for the following closest free location and inserts the new key 
    there. 
    
    Example: In linear probing, we linearly probe for next slot. For example, the typical gap 
    between two probes is 1 as seen in the example below.  
    
    Let hash(x) be the slot index computed using a hash function and S be the table size  
    
    If slot hash(x) % S is full, then we try (hash(x) + 1) % S 
    
    If (hash(x) + 1) % S is also full, then we try (hash(x) + 2) % S 
    If (hash(x) + 2) % S is also full, then we try (hash(x) + 3) % S  
    
    Let us consider a simple hash function as “key mod 7” and a sequence of keys as 50, 700, 76, 
    85, 92, 73, 101.

6. Algorithm: 
    a) Algorithm for inserting element in array using linear probing 
    Hashtable is an array of size = TABLE_SIZE 
    Step 1: Read the value to be inserted, key 
    Step 2:  let i = 0 
    Step 3: hkey = key% TABLE_SIZE 
    Step 4: compute the index at which the key has to be inserted in hash table 
                    index = (hkey + i) % TABLE_SIZE 
    Step 5: if there is no element at that index then insert the value at index and STOP 
    Step 6: If there is already an element at that index 
                    step 4.1: i = i+1 
    step 7:  if i < TABLE_SIZE then go to step 4 
    
    b) Algorithm for Searching element in array using linear probing 
    
    
    39 
    
    Hashtable is an array of size = TABLE_SIZE 
    Step 1: Read the value to be searched, key 
    Step 2:  let i = 0 
    Step 3: hkey = key% TABLE_SIZE 
    Step 4: compute the index at which the key can be found 
                   index = (hkey+ i) % TABLE_SIZE 
    Step 5: if the element at that index is same as the search value, then print element found and 
    STOP 
    Step 6: else 
                    step 4.1: i = i+1 
    step 7:  if i < TABLE_SIZE then go to step 4 
*/

#include <stdio.h>

#define TABLE_SIZE 10 

int hashTable[TABLE_SIZE]; 

int hashFunction(int key) {
    return key % TABLE_SIZE;
}

void insert(int key) {
    int index = hashFunction(key);
    int originalIndex = index;

    while (hashTable[index] != -1) {
        index = (index + 1) % TABLE_SIZE;
        if (index == originalIndex) {
            printf("Hash Table is full, cannot insert %d\n", key);
            return;
        }
    }
    hashTable[index] = key;
}

int search(int key) {
    int index = hashFunction(key);
    int originalIndex = index;

    while (hashTable[index] != -1) {
        if (hashTable[index] == key) {
            return index; 
        }
        index = (index + 1) % TABLE_SIZE;
        if (index == originalIndex) { 
            break;
        }
    }
    return -1; 
}

void display() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (hashTable[i] == -1) {
            printf("%d --> Empty\n", i);
        } else {
            printf("%d --> %d\n", i, hashTable[i]);
        }
    }
}

int main() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = -1;
    }

    printf("Enter 7 elements to insert into the hash table:\n");
    for (int i = 0; i < 7; i++) {
        int element;
        printf("Element %d: ", i + 1);
        scanf("%d", &element);
        insert(element);
    }

    printf("\nHash Table after insertion:\n");
    display();

    int search_element;
    printf("\nEnter an element to search for: ");
    scanf("%d", &search_element);

    int result = search(search_element);
    if (result != -1) {
        printf("Element %d found at index %d in the hash table.\n", search_element, result);
    } else {
        printf("Element %d not found in the hash table.\n", search_element);
    }

    return 0;
}
