#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string str = "hello";
    cout << str << endl;

    // declaring a string
    string str2;
    // initializing a string
    str2 = "world";
    cout << str2 << endl;

    // dynamically creating a string
    string *stringPointer = new string;
    *stringPointer = "Welcome!";
    cout << *stringPointer << endl;

    // Storing multiple strings
    // vector is from vector library
    vector<string> v;
    v.push_back(str);
    v.push_back(str2);
    v.push_back(*stringPointer);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
        // sorting the letters in string
        sort(v[i].begin(), v[i].end());
        cout << v[i] << endl;
    }

    // Taking string input
    string input;

    cout << "Please enter your input: ";
    // cin >> input; // space would be considered as delimiter
    getline(cin, input);
    cout << "Your input is : " << input << endl;
    // strings could be treated like arrays
    cout << "First character is : " << input[0] << endl;
    input[0] = 'H';
    cout << "Your input after changing is : " << input << endl;

    // Concat two strings
    string newString = str + str2;
    cout << "Concat str with str2: " << newString << endl;
    // Getting length of string
    cout << "Length of concat string is : " << newString.length() << endl;
    cout << "Length of concat string is : " << newString.size() << endl;

    // Getting substring of a string
    // substr(i) gives the substring from i-th index to the end of the string
    cout << "Substring of concat string at index 5 is: " << newString.substr(5) << endl;
    // substr(i,n) gives the substring from i-th index to n-th index (doesn't include character at n-th index)

    // find the index of the substring
    cout << newString.find("world") << endl;

    // converting an integer to a string
    int number = 123;
    string numberStr = to_string(number);
    cout << "Number converted as string : " << numberStr << endl;

    // converting a string to an integer
    string numberAsString = "145";
    // using pushback to append to the end of the string
    numberAsString.push_back('3');
    int asInteger = atoi(numberAsString.c_str());
    cout << "String converted as number : " << asInteger << endl;
    return 0;
}