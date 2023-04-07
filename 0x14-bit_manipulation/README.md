**Bitwise Operators in C**
C provides several bitwise operators that can be used to manipulate individual bits within a binary number. These operators include:

& (AND)
| (OR)
^ (XOR)
~ (NOT)
<< (left shift)
>> (right shift)
Let's take a closer look at each of these operators.

AND (&) Operator
The AND operator returns a 1 in each bit position where both operands have a 1. For example:

int a = 5; // binary: 00000101
int b = 3; // binary: 00000011
int c = a & b; // binary: 00000001
In this example, the & operator returns a value of 1 in the least significant bit position, since both a and b have a 1 in that position.

OR (|) Operator
The OR operator returns a 1 in each bit position where at least one operand has a 1. For example:

int a = 5; // binary: 00000101
int b = 3; // binary: 00000011
int c = a | b; // binary: 00000111
In this example, the | operator returns a value of 1 in the first, second, and third bit positions, since either a or b has a 1 in each of those positions.

XOR (^) Operator
The XOR operator returns a 1 in each bit position where exactly one operand has a 1. For example:

int a = 5; // binary: 00000101
int b = 3; // binary: 00000011
int c = a ^ b; // binary: 00000110
In this example, the ^ operator returns a value of 1 in the second and third bit positions, since only one of a and b has a 1 in each of those positions.

NOT (~) Operator
The NOT operator returns the complement of the operand, i.e., it flips all the bits. For example:

int a = 5; // binary: 00000101
int b = ~a; // binary: 11111010
In this example, the ~ operator returns a value where all the bits of a are flipped.

Left Shift (<<) Operator
The left shift operator shifts the bits of the left operand to the left by the number of positions specified by the right operand. For example:

int a = 5; // binary: 00000101
int b = a << 2; // binary: 00010100
In this example, the << operator shifts the bits of a to the left by two positions, resulting in a value of 20 in decimal.

Right Shift (>>) Operator
The right shift operator shifts the bits of the left operand to the right by the number of positions specified by the right operand. For example:

int a = 5; // binary: 00000101
int b = a >> 2; // binary: 00000001
In this example, the >> operator shifts the bits of a to the right by two positions, resulting in a value of 1 in decimal.

Examples
Now that we have covered the basics of bitwise operators in C, let's look at some examples of how they can be used in practice.

Setting a Bit
To set a bit at a specific position, we can use the OR (|) operator. For example, to set the third bit of a variable x to 1, we can do:

x |= (1 << 2);
In this example, the << operator shifts the value 1 two bits to the left, creating the binary number 00000100. The | operator then performs a bitwise OR operation between this value and the original value of x, setting the third bit to 1.

Extracting a Bit
To extract a bit at a specific position, we can use the AND (&) operator. For example, to extract the fourth bit of a variable x, we can do:

int bit = (x >> 3) & 1;
