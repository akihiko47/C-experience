# 📋 C experience 📋

![logo](https://github.com/akihiko47/C-experience/blob/main/logo.jpg?raw=true)

This repository contains my C projects. I will try to implement different data structures and algorithms using this language. 

## Albums file generator
This project reads the albums you enter and writes them to the `albums.txt` file. This file has already been created, there you can see an example of how this program works. The album structures are stored in a dynamic array.

Folder of this project: `albumGenerator`

## Integers from string
This program can pull a number from your string and convert it to int type. This project is an experiment with simple data types. Example of how the program works: `a12b34c5d` will be converted to `12345`. You can see tests in `tests.c`.

Function description: `int intfromstr(char * str);`

Later i will add new projects with new data structures.

## Search algorithms
### Linear search
File - `search/linearsearch.c`
Tests - `search/tests.c`

Function description - `int linearsearch(int array[], int n, int x);` where `array` - array where you need to find element, `n` - number of elements in array, `x` - element that you need to find.

Function returns index of element `x` in array. If `x` not in array function will return `-1`
