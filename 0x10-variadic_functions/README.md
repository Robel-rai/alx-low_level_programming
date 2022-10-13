All the mandatory taskes have been done and Opperate to the systems requirment
	0. Beauty is variable, ugliness is constant
	1. To be is to be the value of a variable
	2. One woman's constant is another woman's variable
	3. To be is a to be the value of a variable
	
	In this section I have learned the use of the library "stdarg.h", a variadic function, and 
	- THe stdarg.h is a header in the C standard library of the C programming language that allows functions to accept an indefinite number of arguments.
	- Variadic functions are functions which may take a variable number of arguments and are declared with an ellipsis in place of the last parameter.
	The typical decalration method is 
		int check(int a, double b, ...);
		int check(int a, double b, ...)
		{
			/* blabla*/
		}
For accecing the Variadic function we use the stdarg.h macros and types.used in the following manner
	
	va_list name_of_list //usally any name we want
	
	va_start (name_of_list, argcounter) // the value name_of_list will tell the number of argumets and set arcouter
	
	/* function */

	va_end(name_of_list)
