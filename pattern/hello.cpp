#include <stdio.h>
#include <string.h>

int main()
    {
    char word[] = "kwohclup"; // reverse of pulchowk
    int length = strlen(word); 

    for (int i = 0; i < length; i++)
	    {
        for (int space = 0; space < length - i - 1; space++) 
		{
            printf(" ");
        }
        
        for (int j = i; j >= 0; j--) 
		{
            printf("%c ", word[j]);
        }

        printf("\n");
        
    }
}
