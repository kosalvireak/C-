# For C++ language @RUPP and related stuff.
## Header file 

`#include <iostream>`

## Using standard input & output

`using namespace std;`

## Get input

`cin >> x;`

## Display output

`cout << "This is x: "<<x; `

## Pointer
We use pointer to point the memory address of the variable

```
int x = 5;
int *y = %x;
cout << y; //0x404004
```
We assign pointer by `*` and `name` of the pointer. *EX:* `*y` = `&x`

When print out `cout << y;`, it will show the value that indicate memory address stored x. *EX.* `0x404004`

Otherwise if we want to print out the value of our variable by using pointer `cout << *y;`, It will show `5` which is the original value of x.

## Pointer string

`char* word ="hello";` The warning will show. 

*pointer_practice_24_08.cpp:12:18: warning: ISO C++ forbids converting a string constant to 'char*'  char* word = "hello";*

Thus we should specify `const before char`

`const char* word = "hello";`

## Go to 
``` 
jump:
cout<< "Hello";
go to jump:

```