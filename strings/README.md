# String

## Difference between string and char array in C++

### String

- An object of the string class in C++
- Can be initialized with a string literal
- Can be concatenated using the '+' operator
- Has built-in functions for searching, replacing, and manipulating substrings
- Has a fixed size
- Uses more memory than char arrays because it stores additional information such as the length of the string

### Char Array

- An array of characters
- Must be initialized with a list of characters and a null character ('\0') at the end
- Must be concatenated manually using a loop
- Must be manipulated manually
- Has a fixed size that must be specified at declaration
- Uses less memory than strings

## Common String Methods in C++

In C++, the `std::string` class provides a variety of methods that you can use to manipulate strings. Here are a few common ones:

- `length()`: Returns the number of characters in the string.
- `empty()`: Returns true if the string is empty, false otherwise.
- `at(n)`: Returns the character at the specified position (index) in the string.
- `push_back(c)`: Appends a character to the end of the string.
- `pop_back()`: Removes the last character of the string.
- `append(s)`: Appends a string to the end of the current string.
- `find(s)`: Searches for the specified string and returns the position of the first occurrence.
- `substr(pos, len)`: Returns a new string that is a substring of the current string, starting at the specified position and with the specified length.
- `replace(pos, len, s)`: Replaces a portion of the current string, starting at the specified position and with the specified length, with the specified string.
- `insert(pos, s)`: Inserts a string into the current string at the specified position.
- `erase(pos, len)`: Removes a portion of the current string, starting at the specified position and with the specified length.
- `c_str()`: Returns a C-style string version of the current string.
- `clear()`: Removes all characters from the string, leaving it empty.
- `swap(s)`: Swaps the contents of the current string with the contents of the specified string.

It's also common to use string literal to create and compare strings:

- `==` check if the two strings have the same content.
- `+` concatenates two strings.
- `string s = "hello";` creates a string object with the value "hello".

**Note**: The methods of `std::string` are case-sensitive, meaning that "Hello" and "hello" are considered to be different strings.
