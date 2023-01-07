#include <iostream>
#include <cstring>

using namespace std;

// function to find the length of a char array
int lengthOf(char *array)
{
    int length = 0;
    // loop through the array until a null character is encountered
    for (int i = 0; array[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

// function to reverse a char array
void reverse(char *string)
{
    int start = 0;
    // end index is the length of the string minus 1 (since arrays are zero-indexed)
    int end = lengthOf(string) - 1;

    // loop until the start index is greater than the end index
    while (start < end)
    {
        // swap the characters at the start and end indices
        swap(string[start], string[end]);
        start++;
        end--;
    }
}

// function to compare two char arrays
bool compare(char strOne[], char strTwo[])
{
    // get the lengths of both arrays
    int lengthOne = lengthOf(strOne);
    int lengthTwo = lengthOf(strTwo);

    // if the lengths are different, the arrays are not equal
    if (lengthOne != lengthTwo)
    {
        return false;
    }
    // loop through both arrays and compare each character
    for (int i = 0; i < lengthOne; i++)
    {
        // if the characters are the same, continue to the next pair
        if (strOne[i] - strTwo[i] == 0)
        {
            continue;
        }
        // if the characters are different, return false
        else
        {
            return false;
        }
    }
    // if all characters are the same, return true
    return true;
}

char *concat(char stringOne[], char stringTwo[])
{
    int lengthOne = lengthOf(stringOne);
    int lengthTwo = lengthOf(stringTwo);

    int lengthConcatArray = lengthOne + lengthTwo + 1;

    // allocate memory for the concatenated string
    char *concatenatedString = new char[lengthConcatArray];

    // copy the strings to the concatenated string
    for (int i = 0; i < lengthOne; i++)
    {
        concatenatedString[i] = stringOne[i];
    }

    for (int i = lengthOne; i < lengthConcatArray - 1; i++)
    {
        concatenatedString[i] = stringTwo[i - lengthOne];
    }

    concatenatedString[lengthConcatArray - 1] = '\0';
    return concatenatedString;
}

// Printing all prefix of a string
// input : abcd
// output : a, ab, abc, abcd
void printAllPrefixes(char *string)
{
    int length = lengthOf(string);
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << string[j];
        }
        cout << endl;
    }
}

// Prints all suffix of a string
// input : abcd
// output : d, cd, bcd, abcd
void printAllSuffixes(char *string)
{
    int length = lengthOf(string);
    for (int i = length - 1; i >= 0; i--)
    {
        for (int j = i; j < length; j++)
        {
            cout << string[j]; // d cd bcd abcd
        }
        cout << endl;
    }
}

int main()
{
    char name[10] = "Siddharth";
    // 9-th index would contain '/0' a.k.a "terminator" with ASCII value 0
    cout << "Value: " << name[8] << endl; // h

    // cout prints the entire character array.
    // no need for for loops for printing
    cout << name << endl;

    char someCharArray[10] = "abc";
    // someCharArray = "x" => not possible, because we cannot assign a string to a char
    someCharArray[4] = 'x';
    cout << "array: " << someCharArray[3] << endl;
    cout << "length: " << lengthOf(someCharArray) << endl;

    /* NOTE: For a character array of length n, n-1 characters are stored,
       since last character would be null character '/0' */

    char greeting[16];
    // cin is typically used to input numerical values, such as integers or floats, or single words.
    // It stops reading input when it encounters a space, tab, or newline character.
    // cin >> greeting;                          // hello world

    // first argument is the string array.
    // second argument is the number of characters
    // third argument is the delimiter character to be used, by default '\n'
    cout << "Enter Greeting: ";
    cin.getline(greeting, 16);                // only delimiter is return(enter)
    cout << "greeting: " << greeting << endl; // hello

    reverse(greeting);
    cout << "greeting reversed: " << greeting << endl;

    /* built-in functions*/
    char string[16];
    cout << "Enter a string: ";
    cin.getline(string, 16);
    cout << "length of greeting: " << strlen(greeting) << endl;
    char newString[16];
    cout << "Enter new string: ";
    cin.getline(newString, 16);
    int same;
    same = strcmp(string, newString);
    if (same == 0)
    {

        cout << "String same as new string " << endl;
    }
    else
    {

        cout << "String not same as new string " << endl;
    }

    bool isEqual = compare(string, newString);
    cout << "is both string's the same: " << isEqual << endl;

    // copying one string to another
    char word[16] = "Something";
    char newWord[16] = "Hallucinations";
    // first argument is destination,
    // second argument is source

    cout << "New word: " << newWord << endl;
    // strcpy(newWord, word);
    // cout << "New word: " << newWord << endl;

    // copy first n characters.
    strncpy(newWord, word, 4); // copies first 4 characters
    cout << "New word: " << newWord << endl;

    // concatenate two strings
    cout << strcat(word, newWord) << endl;

    char wordOne[16] = "Something";
    char wordTwo[16] = "else";
    char *concatenatedString = concat(wordOne, wordTwo);
    cout << "concatenated string: " << concatenatedString << endl;
    delete[] concatenatedString;

    cout << endl;
    char someString[16] = "abcd";
    printAllPrefixes(someString);
    printAllSuffixes(someString);

    return 0;
}