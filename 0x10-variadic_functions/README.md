Variadic Functions in C 
Variadic functions are functions that can accept a variable number of arguments. They are useful when you don't know the exact number of arguments that will be passed to a function.

How to use
Include the 
stdarg.h
 header file.
In the function definition, use an ellipsis 
...
 after the last known parameter.
Inside the function, use the 
va_list
 type to declare a variable that will hold the arguments.
Use 
va_start
 to initialize the 
va_list
 variable with the first optional argument.
Use 
va_arg
 to access each argument in the list.
Use 
va_end
 to clean up the memory allocated for the 
va_list
.