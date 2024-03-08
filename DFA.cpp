#include<stdio.h>
#include<stdbool.h>
int transition[2][2]={{1,0},{0,1}};
bool simulateDFA(char*input)
{
    int currentState=0;
    for(int i=0;input[i]!='\0';i++)
	{
        int inputSymbol=input[i]-'0';
		currentState=transition[currentState][inputSymbol];
    }
	return currentState == 0;
}
int main()
{
    char input[100];
	printf("Enter a string of 0's and 1's: ");
    scanf("%s", input);
    bool result = simulateDFA(input);
	if(result)
	{
        printf("The input string\"%s\"has an even number of 1's.\n",input);
    }
	else
	{
        printf("The input string\"%s\"does not have an even number of 1's.\n",input);
    }
    return 0;
}

