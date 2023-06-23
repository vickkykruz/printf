## Printf
<img align="center" src="https://th.bing.com/th/id/R.beeeb35deae61c31d5d3f0b5ee5ff08e?rik=AftuZrBnw7qNAg&pid=ImgRaw&r=0" alt="printf">
This printf project is first group project in the ALXSE Traning. In this project we are tasked to bulid a custome printf `_printf()` that taken format strings and a number of variable arguments and give the apporated result.
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
Let's us explain `write()` This function was use to display error in the command line, with the help of stderror (3) we use it to display the error allocating it with the number of bytes needed to acommodiate the message, The `malloc()` was used to allocate the each index of the format string allowing us access each positing indext including the format specifier with a pointer, The `free()` was used to free any unwanted allocated space in the memory and The `va_start`, `va_end`, `va_copy` and `va_arg` are variadic function used to access the unknown number of variable arguments passed in the function.
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
<img align="center" src="https://i.ibb.co/HCDRVmY/Screenshot-20230623-122327.png" alt="Flowchart of this project">
### Test Project
To run this project on your local machine you need to follow this steps
1. Open your terminal
2. Locate to the directory you want.
3. Type is command `git clone https://github.com/vickkykruz/printf.git`
4. Create a simple `main()` function.
5. Include the library `#include "main.h"`
6. Call the function `_print("Hello World")`
7. Run this command `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`
8. The output will be displayed in your terminal
### Project Collaborators
<div style="display:flex; justify-content space-around; align-items: center; flex-wrap: wrap;">
<div><img align="center" style="object-cover:cover;" src="https://avatars.githubusercontent.com/u/73972088?v=4" alt="Victor Chukwuemeka" /></div>
<div><img align="center" style="object-cover:cover;" src="https" alt="Mkpot Obot" /></div>
</div>

<small align="center">ALX AFRICA</small>
