# Contact Book Manager

## Overview
A C++ application for managing and storing contact information with file persistence.

## Features
- Create dynamic contact lists
- Store contact names and mobile numbers
- Save contacts to text file
- Display partial contact information

## Input Requirements
1. Number of contacts to create
2. For each contact:
   - Name
   - 10-digit mobile number

## File Management
- Creates/overwrites "Phone.txt"
- Stores contact name and mobile number
- Supports single file input/output operation

## Prerequisites
- C++ Compiler supporting C++11 or later
- Standard C++ Library

## Compilation
```bash
g++ -std=c++11 contact_book_manager.cpp -o contact_book
```

## Usage Example
```
Enter number for your contact: 3
Enter a name: John
Enter 10 numbers: 1234567890
Enter a name: Alice
Enter 10 numbers: 9876543210
Enter a name: Bob
Enter 10 numbers: 5647382910
```

## Functional Workflow
1. Input total number of contacts
2. Enter contact details
3. Save contacts to "Phone.txt"
4. Display first half of contacts

## Limitations
- Fixed 10-digit mobile number
- No duplicate contact prevention
- Basic error handling
- Manual mobile number input

## Potential Improvements
- Mobile number validation
- Contact editing capabilities
- Search functionality
- More robust file handling

## License
MIT License

## Author
Salman Hashemi
