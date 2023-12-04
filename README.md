# 📋 C experience 📋

![logo](https://github.com/akihiko47/C-experience/blob/main/images/logo.jpg?raw=true)

This repository contains my C projects. I will try to implement different data structures and algorithms using this language. 

## Albums file generator
File - `albumGenerator/main.c` 

This project reads the albums you enter and writes them to the `albums.txt` file. This file has already been created, there you can see an example of how this program works. The album structures are stored in a dynamic array.

Folder of this project: `albumGenerator`

## Integers from string
Main file - `intsFromString/main.c` 
Function file - `intsFromString/intfromstr.c`  
Tests - `intsFromString/tests.c` 

This program can pull a number from your string and convert it to int type. This project is an experiment with simple data types. Example of how the program works: `a12b34c5d` will be converted to `12345`. You can see tests in `tests.c`.

Function description: `int intfromstr(char * str);`

# Search algorithms


## Linear search
File - `Search/LinearSearch/linearsearch.c`  
Tests - `Search/LinearSearch/tests.c` 

Function description - `int linearsearch(int array[], int n, int x);` where array - array where you need to find element, n - number of elements in array, x - element that you need to find.

Function returns index of element `x` in array. If `x` not in array function will return -1

## Binary search
![binary search](https://github.com/akihiko47/C-experience/blob/main/images/binary-search.jpg?raw=true)
File - `Search/BinarySearch/binsearch.c`  
Tests - `Search/BinarySearch/tests.c` 

Function description - `int binsearch(int array[], int n, int x);` where array - array where you need to find element, n - number of elements in array, x - element that you need to find.

Function returns index of element x in array. If x not in array function will return -1. The array must be sorted!

## Naive string search
![naive string search](https://github.com/akihiko47/C-experience/blob/main/images/naive-string-search.jpg?raw=true)

File - `Search/StringSearchNaive/strsearchnaive.c`  
Tests - `Search/StringSearchNaive/tests.c` 

Function description - `int strsearchnaive(char p[], char s[]);` where p (pattern) - part string that you want to find in s, s (string) - string where you want to find p.

The function returns the index of the first appearance of p in s. If there is no p in s, the function returns -1.

## Knuth–Morris–Pratt string search algorithm
![kmp string search](https://github.com/akihiko47/C-experience/blob/main/images/stringsearchkmp.png?raw=true)

File - `Search/StringSearchKMP/strsearchkmp.c`  
Tests - `Search/StringSearchKMP/tests.c`

Function description - `int strsearchkmp(char p[], char s[]);` where p (pattern) - part string that you want to find in s, s (string) - string where you want to find p.

The function returns the index of the first appearance of p in s. If there is no p in s, the function returns -1.
