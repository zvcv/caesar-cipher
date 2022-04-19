#include <stdio.h>
#include <string.h>

int main(void)
{
    char alpha_low[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char alpha_up[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    char inputt[500];
    int diff;
    int length = 0;

    printf("Input Message: ");
    scanf("%[^\n]%*c", inputt);

    printf("Difference: ");
    scanf("%i", &diff);

    for (int i = 0; i < strlen(inputt); i++)
    {
        if (inputt[i] >= 97 && inputt[i] <= 122)
        {
            int x = inputt[i] - (97 - diff);
            if (x > 26)
            {
                x %= 26;
            }
            printf("%c", alpha_low[x]);
        }
        else if (inputt[i] >= 65 && inputt[i] <= 90)
        {
            int y = inputt[i] - (65 - diff);
            if (y > 26)
            {
                y %= 26;
            }
            printf("%c", alpha_up[y]);
        }
        else
        {
            printf("%c", inputt[i]);
        }
    }

    printf("\n");

    return 0;
}