This project contains an introduction to functions and nested loops in the C language, and is part of my learning program at ALX Africa.

Functions
In C, functions are subroutines of code that can be written once and called multiple times within a program. They have a specific set of instructions and parameters which must be followed when calling them. This makes it easier to maintain program logic without having to make changes in many individual sections of code.
Syntax
The syntax for writing a function includes its return type, name, parameters, and instructions for controlling the flow of program logic
example
//returns an integer
    //adds two numbers together
int addNumbers(int num1, int num2)
{
    return num1 + num2;
}

Nested Loops
Nested loops allow you to perform actions repeatedly within other loops. It is important to keep track of the variables involved in a nested loop to prevent infinite looping.

Syntax
The syntax of a nested loop includes an outer and inner loop with different looping control statements

Example
while (cond1)
{
   //outer loop

   while (cond2)
   {
     //inner loop
   }   
}

