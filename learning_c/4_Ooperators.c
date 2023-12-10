#include <stdio.h>

int main () {

/*
C divides the operators into the following groups:

    Arithmetic operators
    Assignment operators
    Comparison operators
    Logical operators
    Bitwise operators
*/

/*
x + y
x - y
x * y
x / y
x % y       Returns the division remainder
++x         Increases the value of a variable by 1
--x
*/

/*
Assignment operators:
Operator            example                 same as:
= 	                x = 5               	x = 5 	
+= 	                x += 3              	x = x + 3 	
-=              	x -= 3              	x = x - 3 	
*=                 	x *= 3 	                x = x * 3 	
/= 	                x /= 3               	x = x / 3 	
%=              	x %= 3              	x = x % 3 	
&= 	                x &= 3 	                x = x & 3 	
|= 	                x |= 3               	x = x | 3 	
^= 	                x ^= 3              	x = x ^ 3 	
>>=                	x >>= 3                	x = x >> 3 	
<<=                	x <<= 3                	x = x << 3 	
*/

/*

Compatison operators
==  	Equal to                  	x == y 	
!=  	Not equal 	                x != y 	
> 	    Greater than 	            x > y 	
< 	    Less than               	x < y 	
>= 	    Greater than or equal to 	x >= y 	
<= 	    Less than or equal to   	x <= y
*/

/*
Logical operators
Logical operators are used to determine the logic between variables or values:

&&  	and 	    Returns true if both statements are true                 	x < 5 &&  x < 10 	
||  	or 	        Returns true if one of the statements is true 	            x < 5 || x < 4 	
! 	    not 	    Reverse the result, returns false if the result is true 	!(x < 5 && x < 10)

*/

/*
Sizeof Operator

The memory size (in bytes) of a data type or a variable can be found with the sizeof operator:
*/
int myint;
float myf;
double mydoub;
char mych;

printf("%lu\n", sizeof(myint));
printf("%lu\n", sizeof(myf));
printf("%lu\n", sizeof(mydoub));
printf("%lu\n", sizeof(mych));

/* NOTE: we use the %lu format specifer to print the result, instead of %d.
It is because the compiler expects the sizeof operator to return a long unsigned int (%lu), 
instead of int (%d). On some computers it might work with %d
*/
    return 0;
}