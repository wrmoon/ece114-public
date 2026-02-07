// C program to demonstrate snprintf()
// https://www.geeksforgeeks.org/snprintf-c-library/
#include <stdio.h>

int main()
{
	char buffer[50] = {}; // initialize to zero

	// join two or more strings
	char* str1 = "quick";
	char* str2 = "brown";
	char* str3 = "lazy"; // "very lazy"
	int max_len = sizeof buffer;

	int j = snprintf(buffer, max_len,
				"The %s %s fox jumped over the %s dog.\n",
				str1, str2, str3);
	printf("\nThe number of bytes printed to 'buffer' "
		"(excluding the null terminator) is %d\n",
		j);
	if (j >= max_len)
		printf("string truncated!!\n");
	printf("Joined string:\n");
	printf("%s", buffer);

	return 0;
}
