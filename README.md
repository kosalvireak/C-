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

### Pointer string

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

## Structures
It is a group of element (variables) Compare to C# OOP, it is like a class that we can instantiate object from.

Structures hold data that belong together 

### In C++, structure declaration uses keyword `struct`
```
struct Date{​

   int day;​

   int month;​

   int year;​

};
```
### Declaration of Structures

We can declare variable of the struct by

#### Syntax 1 (declare outside struct)
```
struct circle{​

   int x;​

   int y;​

   float radius;​
};​
// Declaration of a variable of struct type ​

struct circle c1, c2, c3;​

```
#### Syntax 2 (declare inside struct)
```
struct circle{​

   int x;​

   int y;​

   float radius;​
} c1, c2, c3;​

```

### Structures Initialization​
```
struct circle{​

   int x;​

   int y;​

   float radius;​

};​
```
#### Initializing structure with list​
```
struct circle c={
    20, 50, 12.31
};
```
#### Initializing structure with individual element​
```
struct circle c;
c.x = 20;
c.y = 50;
c.radius = 12.31;
```
### Accessing Structures Member​
We access the structure member by using
`struct-identifier`.`member`;
`circle.x;`

### Structure and Function​
#### Returning values of struct from the function ​
```
Circle makeCircle(float x, float y, float radius){​

   Circle circle;​

   circle.x = x;​

   circle.y = y;​

   circle.radius = radius;​

   return circle;​

}​
```
#### Passing struct as argument to function ​
```
void getCircle(Circle circle){​

   printf("Circle x:%f", circle.x);​

   printf("Circle y:%f", circle.y);​

   printf("Circle radus:%f", circle.radius);​

}​
```
### Array of Structure
```
typedef struct car{​

    char brand[10];​

    int colorCode;​

    int price;​

}Cars;​
//defines an array called Car that has 5 elements ​

Cars car[5];

```