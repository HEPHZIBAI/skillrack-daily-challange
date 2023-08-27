/*
You must implement the function removeVowels which accepts a string value stras the input. The function removeVowels must remove both upper and lower case vowels from the input string str. The string str will contain atleast 1 consonant

Example Input/Output 1:
	Input
		Environment
	Output
		nvmmnt

	Explanation:
		In the string Environment, E, T, 'o' and 'e' are vowels. After removing the vowels, the string becomes mvmnmnt. Hence the output is nvmmnt

Example Input/Output 2:
	Input 
		sky
	Output
		sky
*/



//answer
void removeVowels(char *str) 
{
    char t[100000] = "";
    int k = 0;
    for (int i = 0; i < strlen(str); i++) 
    {
	if (!(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')) 
	{
            t[k] = str[i];
            k++;
        }
    }
    t[k] = '\0';  
    strcpy(str, t);  
}