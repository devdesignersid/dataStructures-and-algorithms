#include <iostream>
using namespace std;

int main()
{
    // size of the array must be provided while creating it
    // int array[] => not possible
    
    // declaring an array without an initializer
    // array will be filled with random values
    int array[8];

    // This will initialize the array with the values 1, 2, 3 & remaining as 0's.
    int anotherArray[5] = {1, 2, 3};

    // initialize an integer array with elements
    // size determined by the number of initializers
    int newArray[] = {10, 3, 9, 5};

    // char array
    char charArray[3];
    char newCharArray[] = {'s', 'i', 'd'};
    char anotherCharArray[8] = {'H', 'e', 'l', 'l', 'o'};

    // each element is of 4 bytes (4 * 8 = 32 bytes)
    cout << sizeof(array) << endl;        // 32 bytes
    cout << sizeof(anotherArray) << endl; // 20 bytes
    cout << sizeof(newArray) << endl;     // 16 bytes

    // printing elements in an array
    for (int i = 0; i < 8; i++)
    {
        cout << array[i] << " ";
    }
    // each element is of 1 byte (3 * 1 = 3 bytes)
    cout << sizeof(newCharArray) << endl; // 3 bytes

    return 0;
}