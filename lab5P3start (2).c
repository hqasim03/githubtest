#include <stdio.h>
#include <string.h>

int main()
{
    char input[256];
    int letterCount[26] = {0}; 

    printf("Enter text strings (press Enter on an empty line to exit):\n");

    while (1)
    {
        fgets(input, sizeof(input), stdin); 

        
        if (strlen(input) == 1 && input[0] == '\n')
        {
            break;
        }

        
        for (int i = 0; i < strlen(input); i++)
        {
            if ((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z'))
            {
                int index = (input[i] - 'A') % 32; 
                letterCount[index]++;
            }
        }