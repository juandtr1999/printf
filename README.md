
![readme (2)](https://user-images.githubusercontent.com/77810195/111364526-57eb8500-865f-11eb-938f-76234a28ff23.jpg)




#printf

SH NAME

.B _printf

- formatted output conversion

.SH SYNOPSIS

The fuctions _printf transports data from memory to thr screen.
------------------------------------------------------------------
int print_char(va_list a, char *buffer, int index):

print_char - Print characters.
Name the list buffer  Local buffer The position where buffer carry on, Return one

int len_str(char *n):
len_str - Find the string size Receive the string  Return string size
------------------------------------------------------

int _printf(const char * const format, ...):

printf - Write a format in the standar out. See man_3_printf format The text to write Return: Number of caracters written.
----------------------------------------------------------------------------------------

Description

_PRINTF

The _printf function is a variable function that receives as a formal argument a constant char pointer "fortmat", writes its characters "exactly the same" in the standard output using the write function and returns an integer, which is the number of characters that were sent. to stdout without taking null characters into account.

Use format specifiers to give specific instructions of what you want to write. The% specifier allows you to give the location and the type of data you want in the stdout (table 1.), this allows us to write in the stdout variatic arguments of different types of data, which are received by the function after "format ".

| % c | Prints a character type data.
| % s | Print a data type puter to character.
| % d | Prints an integer data type.
| % i | Prints an integer data type.
| % u | prints an integer unsigned data.

Table 1.

function print characters.
to print characters the _printf () function must first receive the% c specifier that calls the print_char function, this function saves the character in a char type variable. After saving it, in write we create a pointer variable type char and we give it the memory address of the variable char where we had saved our character.

char character = 'A'
_print ("% c", character)
stdout A


String functions string:
Strings of characters (also called strings) are a particular type of vectors, which as their name says are vectors of type (char) with the specification at the end of itself (the character '\ 0'), example: (char hello_string [] = "Hello";) (char other_hello [] = {'H', 'o', 'l', 'a', '\ 0'}; // Same as above char vector [] = {' H ',' o ',' l ',' a '}; / * A vector of 4 elements,).

Write integer function:
To print integers the function _printf () must make a conversion of each digit of the integer to a character, it does so by calling the internal function print_int, this calculates the number of digits of the integer to allocate a memory space with the same amount in bytes to a "variable" pointer to char, and to each position it assigns an integer digit in the corresponding position. Once this part is done, it writes to the standard of this "variable", frees the allocated memory and returns the number of digits written.

function print binaries
to print binaries the _printf () function must first receive the specifier% b that calls the print_binary function, this function saves the integer in a variable type unsigned int, after saving the integer it creates a loop that divides it by 2 until it gives us 0 to find the size in bytes of the binary, that size is saved in a malloc that will be used to save the binary in characters, finally it makes a loop so that it is saved in the buffer
the binary number in the correct order. free up the wild memory and return the number of digits written.

unsigned int binary = 98;
_print ("% b", binary);
stdout 1100010;

octal print function
To print octals, the _printf () function must first receive the specifier% or that the print_octal function calls, this function saves the integer in a variable type unsigned int, after saving the integer it creates a loop that divides it into 8 until it gives us 0 to find the size in bytes of the octal, that size is saved in a malloc that will be used to save the octal in characters, finally it makes a loop so that it is saved in the buffer
the octal number in the correct order. free up the wild memory and return the number of digits written.

unsigned int octal = 45678;
_print ("% b", binary);
stdout 131156;.
