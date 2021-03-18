![readme (2)](https://user-images.githubusercontent.com/77810195/111364526-57eb8500-865f-11eb-938f-76234a28ff23.jpg)




# _printf

This repository contains our version of the printf function available in the C language standard input / output library. To learn more about the original function you can consult the article at the following link: [Secrets of "printf"](https://www.cypress.com/file/54761/download)

[TOCM]

[TOC]

# Description

The _printf function is a variatic function that receives as a formal argument a const char const pointer "fortmat", writes its characters "exactly the same" in the standard output using the write function and returns an integer, which is the number of characters that were sent. to stdout without taking null characters into account.

int _printf(const char * const format, ...);

Use format specifiers to give specific instructions of what you want to write. The "%" specifier allows you to give the location and the type of data you want in the stdout , this allows us to write in the stdout variatic arguments of different types of data, which are received by the function after "format ".

| %c | Prints a character type data.
| %s | Print a data type char puter to character.
| %d | Prints an integer data type.
| %i | Prints an integer data type.
| %u | prints an integer unsigned data.
| %b | prints an integer convert to binary format.
| %o | prints an integer convert to octal format.
| %x | prints an integer convert to hexadecimal format, letters lower case.
| %X | prints an integer convert to hexadecimal format, letters upper case.


# Files

### printf.c

In this file are our two main functions which are ** _ printf ** and ** find_m **.
The function ** _ printf ** prints character by character everything that is found in the format; When it finds a %, it calls the find_m function
The ** find_m ** function creates an array of structures type fmt_type, then finds the function to call according to the match it finds between the structure and what is specified by the user.

### printf_int.c

This file contains the functions ** len_u_dig, print_u_int, len_dig, print_int **.
- The  function** print_int ** converts each digit of an integer into characters and places them in a buffer array from the indicated position.
- The function ** len_dig ** calculates the number of digits that an int data contains.
- The funcion **print_u_int** Converts each digit of an unsigned integer to characters and places them in a buffer array from the indicated position.
- The funcion **len_u_dig**  calculates the number of digits that an unsigned int data contains.

### printf_char.c

In this file the functions ** print_char, len_str, print_string are found. **
- The ** print_char ** function places a character in a buffer array at the indicated position.
- The ** len_str ** function calculates the number of characters that a char data contains.
- The ** print_string ** function converts the entire string into characters and places them in an array buffer from the indicated position.

### printf_base.c
In this file are the functions ** print_binary, print_octal, print_x_hexal, print_X_hexal **
- The ** print_binary ** function converts an unsigned integer into binary, passes them as characters and places them in a buffer array from the indicated position.
- The function ** pritnt_octal ** converts an unsigned integer into octal, passes them as characters and places them in a buffer array from the indicated position.
- The ** print_x_hexal ** function converts an unsigned integer into hexadecimal, passes them as characters and places them in a buffer array from the indicated position. Here the letters a-f are placed in lowercase.
- The ** print_X_hexal ** function converts an unsigned integer into hexadecimal, passes them as characters and places them in a buffer array from the indicated position. Here the letters a-f are placed in upercase.


### holberton.h

In the file ** holberton.h ** we find all the prototypes of the aforementioned functions and the fmt_type type structure.



# Functions

The _print function prototype is the next:

**int _printf(const char * const format, ...)**

The function return an integer that is the number of characters written in the standardout.
To avoid call the write function constantly the function use a buffer, that its a character string with 2148 bytes of size, fill the positions with the characters in ** format ** and for specifiers give the buffer pointer, current position and list of variatic arguments to the internal functions to perform copies of the data in the buffer and finally do just one write call.

### function flow _printf.

![flujo 1](https://imagizer.imageshack.com/img923/5773/6lACOp.jpg "flujo 1")

### function find_m.

![flujo](https://imagizer.imageshack.com/img923/6641/IOrjvc.jpg "flujo")

### General flow of functions

![fjujo2](https://imagizer.imageshack.com/img924/6082/3jhkHt.jpg "fjujo2")


### **Function print_characters.**

to print characters the _printf () function must first receive the% c specifier that calls the print_char function, this function saves the character in a char type variable. After saving it, copies this character in the buffer and return 1.

The print_char function prototype is the next.

**int print_char(va_list a, char *buffer, int index);**

char character = 'A';

_print ("%c", character);

stdout:

  A

### **Functions print_string:**
To print integers the function  _printf  must make a conversion from the string to characters, it does so by calling the internal function print_string, which runs through the string given as a variatic argument and assigns each character of it in a position of the buffer, then returns the number of positioned characters.

The print_string function prototype is the next:

**int print_string(va_list a, char *buffer, int index);**

char string = "Holberton";

_print ("% s",  string);

stdout:

  Holberton

### **Function print_int:**
To print integers the function _printf () must make a conversion of each digit of the integer to a character, it does so by calling the internal function print_int, this calculates the number of digits of the integer to allocate a memory space with the same amount in bytes to a "variable" pointer to char, and to each position it assigns an integer digit in the corresponding position. Once this part is done, it copies the character digits in the buffer, frees the allocated memory and returns the number of digits written.

The print_int function prototype is the next:

**int print_int(va_list a, char *buffer, int index);**

int number = 12345;

_print ("%d",  number);

stdout:

 12345

### **Function print_u_int:**
To print unsigned integers the function _printf () must make a conversion of each digit of the integer to a character, it does so by calling the internal function print_u_int, this calculates the number of digits of the integer to allocate a memory space with the same amount in bytes to a "variable" pointer to char, and to each position it assigns an integer digit in the corresponding position. Once this part is done, it writes to the standard of this "variable", frees the allocated memory and returns the number of digits written.

The print_u_int function prototype is the next:

**int print_u_int(va_list a, char *buffer, int index);**

int number = 12345;

_print ("%d",  number);

stdout:

  12345

### **Function print_binaries**
to print binaries the _printf () function must first receive the specifier% b that calls the print_binary function, this function saves the integer in a variable type unsigned int, after saving the integer it creates a loop that divides it by 2 until it gives us 0 to find the size in bytes of the binary, that size is saved in a malloc that will be used to save the binary in characters, finally it makes a loop so that it is saved in the buffer
the binary number in the correct order. free up the wild memory and return the number of digits written.

The print_binary function prototype is the next:

**int print_binary(va_list a, char * buffer, int index);**

unsigned int binary = 98;

_print ("%b", binary);

stdout:

  1100010

### **Function print_octal**
To print octals, the _printf () function must first receive the specifier% or that the print_octal function calls, this function saves the integer in a variable type unsigned int, after saving the integer it creates a loop that divides it into 8 until it gives us 0 to find the size in bytes of the octal, that size is saved in a malloc that will be used to save the octal in characters, finally it makes a loop so that it is saved in the buffer the octal number in the correct order. free up the wild memory and return the number of digits written.

The print_octal function prototype is the next:

**int print_octal(va_list a, char * buffer, int index);**

unsigned int octal = 1455;

_print ("%o", octal);

stdout:

  2657


### **Function print_x_hexal**
To print hexadecimals the _printf () function must first receive the% x specifier that calls the print_x_hexal function, this function saves the integer in a variable type unsigned int, after saving the integer it creates a loop that divides it into 16 until it gives us 0 to find the size in bytes of the hexadecimal, that size is saved in a malloc that will be used to save the hexadecimal in characters, finally it makes a loop so that the hexadecimal number is stored in the buffer in the correct order. frees the wild memory and returns the number of digits written.

The print_x_hexal function prototype is the next:

**int print_x_hexal(va_list a, char * buffer, int index);**

unsigned int hexadecimal= 4455;

_print ("%x", hexadecimal);

stdout:

  1167


## AUTHOR

 ### Jodan Bonnett-Nicolas Castillo-Juan David trujillo
