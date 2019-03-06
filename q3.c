#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void append(char* s, char c)
{
	int len = strlen(s);
	s[len] = c;
	s[len+1] = '\0';
	}

char* concat(const char *s1, const char *s2)
{
	char *result = malloc(strlen(s1) + strlen(s2) + 1); // +1 for the null-terminator
	strcpy(result, s1);
	strcat(result, s2);
	return result;
}

char *reverse(char input[100])
{	
	char temp_string[100] = "";
	for (unsigned i = strlen(input); i-- > 0;)
	{
		append(temp_string, input[i]);
//		printf("\n Temp_string is: %s", temp_string);
	} 
	return temp_string;
}


int main(int argc, char *argv[]) {
//	char *test = "Test";
//	printf("\n The reverse of %s is: %s", test, reverse(test));
//	printf("\n Concatenate: %s", concat("Yup", "No"));

	char* tester = "";
	char* original = "";
	
	for(int i = 0; i < sizeof(argv); i++)
	{
		concat(original, argv[i]);
	}
	
	tester = reverse(original);
	
	if (strcmp(tester, original) == 0)
	{
		printf("\"%s\" is a paildrome!\n", original);
	}
	else 
	{
		printf("\"%s\" is NOT a palindrome!\n", original);	
	}
}
