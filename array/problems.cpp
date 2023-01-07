#include <iostream>
using namespace std;

// NOTE: arrays passed into function decays into pointer

// Find the sum of array elements
int sum(int *array, int arrayLength)
{
    int sum = 0;
    if (arrayLength < 0)
    {
        cout << "Error: Array length must be greater than zero" << endl;
        return -1;
    }
    for (int i = 0; i < arrayLength; i++)
    {
        sum += array[i];
    }
    return sum;
}

// Find the largest element in array
int max(int *array, int arrayLength)
{
    if (arrayLength < 0)
    {
        cout << "Error: Array length must be greater than zero" << endl;
        return -1;
    }
    int max = array[0];

    for (int i = 1; i < arrayLength; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

// Find the smallest element in array
int min(int *array, int arrayLength)
{
    if (arrayLength < 0)
    {
        cout << "Error: Array length must be greater than zero" << endl;
        return -1;
    }
    int min = array[0];
    for (int i = 1; i < arrayLength; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}

// Swap two numbers
// should pass numOne & numTwo as references
// original values are mutated
void swapNums(int &numOne, int &numTwo)
{
    int temp = numOne;
    numOne = numTwo;
    numTwo = temp;
}

// using bitwise operator 'XOR'
// little faster than the above swap due to the lack of temporary variable
void swapNumsXor(int &numOne, int &numTwo)
{
    numOne = numOne ^ numTwo;
    numTwo = numOne ^ numTwo;
    numOne = numOne ^ numTwo;
}

// reverse and returns a new array
int *reverseWithoutMutation(int *array, int arrayLength)
{
    int *reverseArray = new int[arrayLength];
    int index = 0;
    for (int i = arrayLength - 1; i >= 0; i--)
    {
        reverseArray[index] = array[i];
        index++;
    }
    return reverseArray;
}

int *reverseWithMutation(int *array, int arrayLength)
{
    int start = 0;
    int end = arrayLength - 1;
    while (start < end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
    return array;
}

// prints the given array
void printArray(int *array, int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        cout << array[i];
        if (i != arrayLength - 1)
        {
            cout << " | ";
        }
    }
    cout << endl;
}

int main()
{
    int array[4] = {2, 23, 8, 99};
    int arrayLength = sizeof(array) / sizeof(array[0]);

    // passing arrayLength as value
    const int total = sum(array, arrayLength);
    cout << "Sum of all elements in array is : " << total << endl;

    const int largest = max(array, arrayLength);
    cout << "Largest of all elements in array is : " << largest << endl;

    const int smallest = min(array, arrayLength);
    cout << "Smallest of all elements in array is : " << smallest << endl;

    int numOne = 10, numTwo = 4;
    cout << "Number to be swapped => "
         << "numOne: " << numOne << " :: "
         << "numTwo: " << numTwo << endl;
    // swapNums(numOne, numTwo);
    // swapNumsXor(numOne, numTwo);
    swap(numOne, numTwo); // built-in swap function
    cout << "Number after swapped => "
         << "numOne: " << numOne << " :: "
         << "numTwo: " << numTwo << endl;

    printArray(array, arrayLength);
    int *reversedArray = reverseWithoutMutation(array, arrayLength);
    printArray(reversedArray, arrayLength);
    delete[] reversedArray;
    // mutating the original array
    reverseWithMutation(array, arrayLength);
    printArray(array, arrayLength);

    return 0;
}
