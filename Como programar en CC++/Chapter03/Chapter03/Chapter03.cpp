// Chapter03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/* Class average program with counter-controlled repetition */
void example01()
{
	int counter, grade, total, average;

	/* initialization phase */
	total = 0;
	counter = 1;

	/* processing phase */
	while (counter <= 10)
	{
		printf("Enter grade: ");
		scanf_s("%d", &grade);
		total = total + grade;
		counter = counter + 1;
	}

	/* termination phase */
	average = total / 10;
	printf("Class average is %d\n", average);
}

/* Class average program with sentinel-controlled repetition */
void example02()
{
	float average;						/* new data type */
	int counter, grade, total;

	/* initialization phase */
	total = 0;
	counter = 0;

	/* processing phase */
	printf("Enter grade, -1 to end: ");
	scanf_s("%d", &grade);

	while (grade != -1)
	{
		total = total + grade;
		counter = counter + 1;
		printf("Enter grade, -1 to end: ");
		scanf_s("%d", &grade);
	}

	/* termination phase */
	if (counter != 0)
	{
		average = (float)total / counter;
		printf("Class average is %.2f\n", average);
	}
	else
		printf("No grades were entered\n");
}

/* Analysis of examination results */
void example03()
{
	/* initializing variables in declarations */
	int passes = 0, failures = 0, student = 1, result;

	/* process 10 students; counter-controlled loop */
	while (student <= 10)
	{
		printf("Enter result (1=pass, 2=fail): ");
		scanf_s("%d", &result);

		if (result == 1)					/* if/else nested in while */
			passes = passes + 1;
		else
			failures = failures + 1;

		student = student + 1;
	}

	printf("Passed %d\n", passes);
	printf("Failed %d\n", failures);

	if (passes > 8)
		printf("Raise tuition\n");
}

/* Preincrementing and postincrementing */
void example04()
{
	int c;

	c = 5;
	printf("%d\n", c);
	printf("%d\n", c++);				/* postincrement */
	printf("%d\n\n", c);

	c = 5;
	printf("%d\n", c);
	printf("%d\n", ++c);				/* preincrement */
	printf("%d\n", c);
}

/* Calculate the sum of the integers from 1 to 10 */
void exercise3_5a()
{
	int sum, x;

	x = 1;
	sum = 0;
	while (x <= 10)
	{
		sum += x;
		x++;
	}
	printf("The sum is: %d\n", sum);
}

/* Raise x to the y power */
void exercise3_8a()
{
	int x, y, i, power;

	printf("Enter x: ");
	scanf_s("%d", &x);
	printf("Enter y: ");
	scanf_s("%d", &y);
	i = 1;
	power = 1;

	while (i <= y)
	{
		power *= x;
		i++;
	}

	printf("x to the y power is equal to: %d\n", power);
}

/* Prints numbers from 1 to 4 without %d, with %d and with four instructions */
void exercise2_17()
{
	printf("1, 2, 3, 4\n");
	printf("%d, %d, %d, %d\n", 1, 2, 3, 4);
	printf("1, ");
	printf("2, ");
	printf("3, ");
	printf("4\n");
}

/* Ask for two integers and prints which one is the largest one or if they are equal */
void exercise2_18()
{
	int integer1, integer2;

	printf("Enter two integers: ");
	scanf_s("%d%d", &integer1, &integer2);

	if (integer1 > integer2)
		printf("%d is larger\n", integer1);

	if (integer2 > integer1)
		printf("%d is larger\n", integer2);

	if (integer1 == integer2)
		printf("These numbers are equal\n");
}

/* Ask for three different integers and prints the sum, average, product, smallest and largest */
void exercise2_19()
{
	int integer1, integer2, integer3;

	printf("Input three different integers: ");
	scanf_s("%d%d%d", &integer1, &integer2, &integer3);
	printf("Sum is %d\n", integer1 + integer2 + integer3);
	printf("Average is %d\n", (integer1 + integer2 + integer3) / 3);
	printf("Product is %d\n", integer1 * integer2 * integer3);

	if (integer1 < integer2)
		if (integer1 < integer3)
			printf("Smallest is %d\n", integer1);

	if (integer2 < integer1)
		if (integer2 < integer3)
			printf("Smallest is %d\n", integer2);

	if (integer3 < integer1)
		if (integer3 < integer2)
			printf("Smallest is %d\n", integer3);

	if (integer1 > integer2)
		if (integer1 > integer3)
			printf("Largest is %d\n", integer1);

	if (integer2 > integer1)
		if (integer2 > integer3)
			printf("Largest is %d\n", integer2);

	if (integer3 > integer1)
		if (integer3 > integer2)
			printf("Largest is %d\n", integer3);
}

/* Ask for a circle radius and prints the diameter, perimeter and area */
void exercise2_20()
{
	int radius;

	printf("Enter the radius of the circle: ");
	scanf_s("%d", &radius);
	printf("Diameter is %f\n", radius * 2.0);
	printf("Perimeter is %f\n", 2 * 3.14159 * radius);
	printf("Area is %f\n", 3.14159 * radius * radius);
}

/* Prints a square, an oval, an arrow and a diamond */
void exercise2_21()
{
	printf("*********            ***              *                *    \n");
	printf("*       *          *     *           ***              * *   \n");
	printf("*       *         *       *         *****            *   *  \n");
	printf("*       *         *       *           *             *     * \n");
	printf("*       *         *       *           *            *       *\n");
	printf("*       *         *       *           *             *     * \n");
	printf("*       *         *       *           *              *   *  \n");
	printf("*       *          *     *            *               * *   \n");
	printf("*********            ***              *                *    \n");
}

/* Ask for five integers and prints which one is the largest one and which one is the smallest one */
void exercise2_23()
{
	int integer1, integer2, integer3, integer4, integer5;

	printf("Input five integers: ");
	scanf_s("%d%d%d%d%d", &integer1, &integer2, &integer3, &integer4, &integer5);

	if (integer1 < integer2)
		if (integer1 < integer3)
			if (integer1 < integer4)
				if (integer1 < integer5)
					printf("Smallest is %d\n", integer1);

	if (integer2 < integer1)
		if (integer2 < integer3)
			if (integer2 < integer4)
				if (integer2 < integer5)
					printf("Smallest is %d\n", integer2);

	if (integer3 < integer1)
		if (integer3 < integer2)
			if (integer3 < integer4)
				if (integer3 < integer5)
					printf("Smallest is %d\n", integer3);

	if (integer4 < integer1)
		if (integer4 < integer2)
			if (integer4 < integer3)
				if (integer4 < integer5)
					printf("Smallest is %d\n", integer4);

	if (integer5 < integer1)
		if (integer5 < integer2)
			if (integer5 < integer3)
				if (integer5 < integer4)
					printf("Smallest is %d\n", integer5);

	if (integer1 > integer2)
		if (integer1 > integer3)
			if (integer1 > integer4)
				if (integer1 > integer5)
					printf("Largest is %d\n", integer1);

	if (integer2 > integer1)
		if (integer2 > integer3)
			if (integer2 > integer4)
				if (integer2 > integer5)
					printf("Largest is %d\n", integer2);

	if (integer3 > integer1)
		if (integer3 > integer2)
			if (integer3 > integer4)
				if (integer3 > integer5)
					printf("Largest is %d\n", integer3);

	if (integer4 > integer1)
		if (integer4 > integer2)
			if (integer4 > integer3)
				if (integer4 > integer5)
					printf("Largest is %d\n", integer4);

	if (integer5 > integer1)
		if (integer5 > integer2)
			if (integer5 > integer3)
				if (integer5 > integer4)
					printf("Largest is %d\n", integer5);
}

/* Ask for an integer and prints if it is odd or even */
void exercise2_24()
{
	int integer, result;

	printf("Enter an integer: ");
	scanf_s("%d", &integer);
	result = integer % 2;

	if (result == 0)
		printf("%d is even\n", integer);

	if (result != 0)
		printf("%d is odd\n", integer);
}

/* Prints my initials */
void exercise2_25()
{
	printf("AAA      \n");
	printf("    AAA   \n");
	printf("    A   AA\n");
	printf("    AAA   \n");
	printf("AAA       \n");
	printf("          \n");
	printf("          \n");
	printf("RRRRRRRRRR\n");
	printf("   RRR   R\n");
	printf("  R  R   R\n");
	printf(" R   R   R\n");
	printf("R     RRR \n");
	printf("          \n");
	printf("          \n");
	printf("GGGGGGGGGG\n");
	printf("G        G\n");
	printf("G    G   G\n");
	printf("G    G   G\n");
	printf("GGGGGG   G\n");
	printf("          \n");
	printf("          \n");
	printf("       VVV\n");
	printf("   VVV    \n");
	printf("VVV       \n");
	printf("   VVV    \n");
	printf("       VVV\n");
}

/* Ask for two integers and prints if the first one is a multiple of the second one */
void exercise2_26()
{
	int integer1, integer2, result;

	printf("Enter two integers: ");
	scanf_s("%d%d", &integer1, &integer2);
	result = integer1 % integer2;

	if (result == 0)
		printf("%d is multiple of %d\n", integer1, integer2);

	if (result != 0)
		printf("%d is not multiple of %d\n", integer1, integer2);
}

/* Prints the same pattern with eight instructions and with one instruction */
void exercise2_27()
{
	printf("* * * * * * * * \n");
	printf(" * * * * * * * *\n");
	printf("* * * * * * * * \n");
	printf(" * * * * * * * *\n");
	printf("* * * * * * * * \n");
	printf(" * * * * * * * *\n");
	printf("* * * * * * * * \n");
	printf(" * * * * * * * *\n");
	printf("                \n");
	printf("* * * * * * * * \n * * * * * * * *\n* * * * * * * * \n * * * * * * * *\n* * * * * * * * \n * * * * * * * *\n* * * * * * * * \n * * * * * * * *\n");
}

/* Prints the integers that represents different characters */
void exercise2_29()
{
	printf("A: %d\n", 'A');
	printf("B: %d\n", 'B');
	printf("C: %d\n", 'C');
	printf("a: %d\n", 'a');
	printf("b: %d\n", 'b');
	printf("c: %d\n", 'c');
	printf("0: %d\n", '0');
	printf("1: %d\n", '1');
	printf("2: %d\n", '2');
	printf("$: %d\n", '$');
	printf("*: %d\n", '*');
	printf("+: %d\n", '+');
	printf("/: %d\n", '/');
}

/* Split a five digit integer */
void exercise2_30()
{
	int integer, digit1, digit2, digit3, digit4, digit5;

	printf("Enter an integer that has five digits: ");
	scanf_s("%d", &integer);
	digit5 = integer % 10;
	digit4 = (integer % 100 - integer % 10) / 10;
	digit3 = (integer % 1000 - integer % 100) / 100;
	digit2 = (integer % 10000 - integer % 1000) / 1000;
	digit1 = (integer - integer % 10000) / 10000;
	printf("%d   %d   %d   %d   %d\n", digit1, digit2, digit3, digit4, digit5);
}

/* Print the square and cube of the numbers from 0 to 10 */
void exercise2_31()
{
	int integer;
	printf("number\tsquare\tcube\n");
	integer = 0;
	printf("%d\t%d\t%d\n", integer, integer * integer, integer * integer * integer);
	integer = 1;
	printf("%d\t%d\t%d\n", integer, integer * integer, integer * integer * integer);
	integer = 2;
	printf("%d\t%d\t%d\n", integer, integer * integer, integer * integer * integer);
	integer = 3;
	printf("%d\t%d\t%d\n", integer, integer * integer, integer * integer * integer);
	integer = 4;
	printf("%d\t%d\t%d\n", integer, integer * integer, integer * integer * integer);
	integer = 5;
	printf("%d\t%d\t%d\n", integer, integer * integer, integer * integer * integer);
	integer = 6;
	printf("%d\t%d\t%d\n", integer, integer * integer, integer * integer * integer);
	integer = 7;
	printf("%d\t%d\t%d\n", integer, integer * integer, integer * integer * integer);
	integer = 8;
	printf("%d\t%d\t%d\n", integer, integer * integer, integer * integer * integer);
	integer = 9;
	printf("%d\t%d\t%d\n", integer, integer * integer, integer * integer * integer);
	integer = 10;
	printf("%d\t%d\t%d\n", integer, integer * integer, integer * integer * integer);
}

/* Chapter 02 Menu*/
int menu()
{
	int selection;
	printf("00. Exit\n");
	printf("01. Example 01: Class average program with counter-controlled repetition\n");
	printf("02. Example 02: Class average program with sentinel-controlled repetition\n");
	printf("03. Example 03: Analysis of examination results\n");
	printf("04. Example 04: Preincrementing and postincrementing\n");
	printf("05. Exercise 3.5 (Autoevaluation): Calculate the sum of the integers from 1 to 10\n");
	printf("06. Exercise 3.8 (Autoevaluation): Raise x to the y power\n");
	printf("07. Exercise 2.17: Prints numbers from 1 to 4 without %%d, with %%d and with four instructions\n");
	printf("08. Exercise 2.18: Ask for two integers and prints which one is the largest one or if they are equal\n");
	printf("09. Exercise 2.19: Ask for three different integers and prints the sum, average, product, smallest and largest\n");
	printf("10. Exercise 2.20: Ask for a circle radius and prints the diameter, perimeter and area\n");
	printf("11. Exercise 2.21: Prints a square, an oval, an arrow and a diamond\n");
	printf("12. Exercise 2.23: Ask for five integers and prints which one is the largest one and which one is the smallest one\n");
	printf("13. Exercise 2.24: Ask for an integer and prints if it is odd or even\n");
	printf("14. Exercise 2.25: Prints my initials\n");
	printf("15. Exercise 2.26: Ask for two integers and prints if the first one is a multiple of the second one\n");
	printf("16. Exercise 2.27: Prints the same pattern with eight instructions and with one instruction\n");
	printf("17. Exercise 2.29: Prints the integers that represents different characters\n");
	printf("18. Exercise 2.30: Split a five digit integer\n");
	printf("19. Exercise 2.31: Print the square and cube of the numbers from 0 to 10\n");
	printf("Which example or exercise do you want to see? ");
	scanf_s("%d", &selection);

	switch (selection)
	{
	case 0:
		return 0;						/* indicate program ended successfully*/
		break;
	case 1:
		example01();
		break;
	case 2:
		example02();
		break;
	case 3:
		example03();
		break;
	case 4:
		example04();
		break;
	case 5:
		exercise3_5a();
		break;
	case 6:
		exercise3_8a();
		break;
	case 7:
		exercise2_17();
		break;
	case 8:
		exercise2_18();
		break;
	case 9:
		exercise2_19();
		break;
	case 10:
		exercise2_20();
		break;
	case 11:
		exercise2_21();
		break;
	case 12:
		exercise2_23();
		break;
	case 13:
		exercise2_24();
		break;
	case 14:
		exercise2_25();
		break;
	case 15:
		exercise2_26();
		break;
	case 16:
		exercise2_27();
		break;
	case 17:
		exercise2_29();
		break;
	case 18:
		exercise2_30();
		break;
	case 19:
		exercise2_31();
		break;
	}

	system("PAUSE");
	return menu();
}

int main()
{
	return menu();
}