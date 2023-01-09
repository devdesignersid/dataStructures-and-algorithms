#include <iostream>
using namespace std;

/* while passing a two dimensional array to a function, the least we should
   specify the number of columns in the array.
   columns are mandatory because of how we store 2d arrays in memory(refer README.md)*/
void print2dArray(int array[][4], int numOfRows, int numOfCols)
{

    for (int i = 0; i < numOfRows; i++)
    {
        for (int j = 0; j < numOfCols; j++)
        {
            if (j == numOfCols - 1)
            {

                cout << array[i][j];
            }
            else
            {

                cout << array[i][j] << " | ";
            }
        }
        cout << endl;
        for (int j = 0; j < numOfCols; j++)
        {

            if (i != numOfRows - 1)
            {

                cout << "---";
            }
        }

        cout << endl;
    }
}

void print2dArray(int **array, int numOfRows, int numOfCols)
{

    for (int i = 0; i < numOfRows; i++)
    {
        for (int j = 0; j < numOfCols; j++)
        {
            if (j == numOfCols - 1)
            {

                cout << array[i][j];
            }
            else
            {

                cout << array[i][j] << " | ";
            }
        }
        cout << endl;
        for (int j = 0; j < numOfCols; j++)
        {

            if (i != numOfRows - 1)
            {

                cout << "---";
            }
        }

        cout << endl;
    }
}

int main()
{

    // defining a two dimensional array
    // just allocates required memory.
    /// 2 => number of rows and 3 is the number of columns (2x3 array)
    int sampleTwoDimensionalArray[2][3];
    sampleTwoDimensionalArray[0][0] = 1;
    cout << "value at [0][1] in sampleTwoDimensionalArray: " << sampleTwoDimensionalArray[0][1] << endl; // some random garbage value.

    // initializing the 2 dimensional array:
    // 2 x 3 array
    int someTwoDimensionalArray[2][3] = {
        {1, 2}, // the missing value at position (0,2) would be 0.
        {4, 5, 6}};
    cout << "value at [0][2] in someTwoDimensionalArray: " << someTwoDimensionalArray[0][2] << endl; // some random garbage value.

    /* Passing 2-dimensional arrays to a function. */
    const int numberOfColumns = 4;
    const int numberOfRows = 4;
    // ordinary array syntax allocated memory at compile time.
    int matrix[numberOfColumns][numberOfRows] = {{0}}; // initializes a 4x4 array with 0's at all positions
    print2dArray(matrix, numberOfRows, numberOfColumns);

    /* Passing 2-dimensional arrays to a function as pointer. */
    int numOfRows = 4, numOfCols = 3;
    // creates an array to contain the pointers of columns
    // the pointer to the first index of the columns array is stored.
    // using the 'new' operator to dynamically allocate memory.
    int **array = new int *[numOfRows];

    for (int i = 0; i < numOfRows; i++)
    {
        array[i] = new int[numOfCols];
    }

    print2dArray(array, numberOfRows, numberOfColumns);

    cout << endl;
    return 0;
}