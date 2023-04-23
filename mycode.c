# include <stdio.h>

/**
* main - Entry point of the code
* Return: success (0)
*/

int main(void)
{
	char message[] = "Hello, world!";
	int x = 42;
	/* Using puts */
	puts(message);  /* Outputs "Hello, world!\n" */
	/*Using printf */
	printf("The answer is %d.\n", x);  /* Outputs "The answer is 42.\n" */
	return (0);
}
