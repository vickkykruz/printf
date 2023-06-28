## Printf
<p align="center" ><img align="center" style="align:center;" src="https://th.bing.com/th/id/R.beeeb35deae61c31d5d3f0b5ee5ff08e?rik=AftuZrBnw7qNAg&pid=ImgRaw&r=0" alt="printf"></p>

The printf project is a group project in the ALXSE Training where we create a custom printf function, _printf(), that takes format strings and variable arguments to produce the desired output. It involves parsing the format string, handling different format specifiers, and utilizing variadic functions. The project aims to demonstrate string manipulation, parsing, and teamwork skills in C programming.
### Concept Of This Project
According to <b>Professor Don Colton</b> in his book <b>Secrets Of "printf"</b> his explained that this function was built by computer programmers on serveral occations when they want to read in and print out number, but at a time it stoped. And that time it was constructed based on every programmer options and stored the function in the <b>stdio.h</b> header file libray for easy access.
<br>
However our `_pintf()` project was bulit based on the following C functions
```
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg(man 3 va_arg)
```
Here's an explanation of the write() function and its usage in displaying errors in the command line:
The write() function is used to write data to a file descriptor. In this context, the file descriptor represents the standard error output, often referred to as stderr. The purpose of using stderr is to display error messages in the command line or terminal.
To use write() for displaying errors, you typically allocate a buffer of a specific size to hold the error message. This size is determined by calculating the number of bytes needed to accommodate the message, including any format specifiers if present.
In the process of displaying the error message, you may use functions like malloc() to dynamically allocate memory for each index of the format string. This allows you to access each position in the format string, including any format specifiers that may be present. The use of a pointer enables you to manipulate the contents of the allocated memory.
After you have finished using the allocated memory, it is important to free it using the free() function. This ensures that any unwanted or unnecessary memory is released and made available for reuse.
In addition to memory allocation and deallocation, the variadic functions va_start, va_end, va_copy, and va_arg are used to handle an unknown number of variable arguments passed to a function. These functions are part of the <stdarg.h> header and provide a way to access the variable arguments in a flexible and controlled manner.
Overall, the combination of write(), stderr, memory allocation, and variadic functions allows for effective error handling and display in the command line or terminal environment.
### Algorithm For This Project
Here are steps and procedures we took in this project
1. Collecting the format strings and a variable number of arguments.
2. Initalizing the variable to keep a track of the current position in the format string.
3. Looping through the format string until the end of the string is reached.
4. If the current character does not have a format specifier, print it directly using `_putchar()`.
5. If the current charater does have a format specifier, extract it.
6. Determine he type of argument based on the format specifier.
7. Run the function allocated to that format specifier.
8. Print the converted argument.
9. Move the position in the format string to the next character.
10. End the Loop.
11. Return the program.
<br> You can access the soft copy of this algorthim <a href="https://docs.google.com/document/d/1lqQjVNdHgSCMkTW11FDzAgSY2S0x6JCjKX1TSs0AwAw/edit?usp=drivesdk">Here </a>
### Flowchat Of This Project
<p align="center"><img align="center" src="https://i.ibb.co/HCDRVmY/Screenshot-20230623-122327.png" alt="Flowchart of this project"></p>

### Testing Of Project
To run this project on your local machine you need to follow this steps
1. Locate and open your terminal
2. Locate to the directory you want.
3. Type is command `git clone https://github.com/vickkykruz/printf.git`
4. Create a simple `main()` function.
5. Include the library `#include "main.h"`
6. Call the function `_print("Hello World")`
7. Run this command `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`
8. The output will be displayed in your terminal
### Project Collaborators
1. Victor Chukwuemeka <onwuegbuchulemvic02@gmail.com>
2. Mkpouto Obot <mkpoutoobot321@gmail.com>

<p align="center">ALX AFRICA</p>

