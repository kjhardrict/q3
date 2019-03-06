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

//char *reverse(char* input)
//{	
//	char* temp_string;
//	for (unsigned i = strlen(input); i-- > 0;)
//	{
//		append(temp_string, input[i]);
////		printf("\n Temp_string is: %s", temp_string);
//	} 
//	return temp_string;
//}


int main(int argc, char *argv[]) {


	char* tester = "";
	char* original = "";
	char* with_spaces = "";
	
//	char* words[] = {"racecar"};
	int num_words = (sizeof(argv)-1)/sizeof(argv[1]);
	
	for(int i = 1; i < num_words; i++)
	{
		original = concat(original, argv[i]);
		if(i == num_words - 1){
			with_spaces = concat(with_spaces, argv[i]);
		}
		else{
			char* temp = " ";
			temp = concat(argv[i]," ");
			with_spaces = concat(with_spaces, temp);

		}
			}
 	
	int l = 0;
	int r = strlen(original) - 1;
	
	while (r > l)
	{
		if (original[l++] != original[r--])
		{
			printf("\"%s\" is NOT a palindrome!\n", with_spaces);
			return 0;
		}
		
	}
	
	printf("\"%s\" is a palindrome!\n", with_spaces);
	
//	tester = reverse(original);
//	printf("\n original is: %s", original);
//	printf("\n the tester is: %s \n", tester);
//
//	free(original);
//	
//	if (strcmp(tester, original) == 0)
//	{
//		printf("\"%s\" is a palindrome!\n", with_spaces);
//	}
//	else 
//	{
//		printf("\"%s\" is NOT a palindrome!\n", with_spaces);	
//	}
		
}
