#include<stdio.h>

/*
	Variable :
		Variables are the container which stores the value.

	Syntax to store value in variable :

	DataType varName = Value;

	Numbers     Intiger = 10, 20, 4, 5	int	%d, %i
		    Float   = 3.14, 2.5, 1.4    float   %f
	Characters          = A-Z, a-z          char    %c

	Format Specifiers :

	How to name Variable ?
		- it can be in lowercase, UPPERCASE, camelCase
		  camelCase = Camel + Case.
		- it cannot contain space :  my variable  :XERROR
		- it can contain underscot:  my_variable
		- it cannot begin with digit:   1varibale :XERROR
		- it can contain digit in middle or last
			=>   my1variable
			     var1
		- it cannot contain any special characters
			=>  +, -, *, /, !,@, #, $.....

	Lifecycle of variable :

		- Initialization
			int a = 10;
		- Declaration
			int a;
		- Assignment
			a = 10;
*/

main()
{
	int a = 10,b = 4;
	printf("A = %i\nB = %i\n",a,b);
	printf("Sum \t\t= %i\n",a+b);
	printf("Subtraction \t= %i\n",a-b);
	printf("Multiplication \t= %i\n",a*b);
	printf("Division \t= %d\n",a/b);
	printf("Modulos \t= %i\n",a%b);
	//Modulos = remainder
}









