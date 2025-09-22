#include <stdio.h>

#define PI_VALUE 3.14159265358979323846

int main(void) 
{
	int version = 1;
	
	unsigned int year = 2025;

	const char* title = "C \"Printf\" demo";
	
	int widt_demo_number = 123;

	char sample_char = 'A';
	
	printf("=== Constants & Formats ===\n");
	
	printf("Course: C Programming (v%d, %u))\n" , version, year);

	printf("Title: %s\n", title);

	printf("PI default \t : %f\n", PI_VALUE);
	printf("PI 2 digits \t : %.2f\n", PI_VALUE);

	printf("Width demo \t : [%d]\n", widt_demo_number);

	printf("Char smaple \t : [%c]\n", sample_char);
	printf("Backslash \t : \\\n");

	return 0;
}
