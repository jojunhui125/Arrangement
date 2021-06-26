#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS 


int main() {
    char str[90];

    int T, i, j;
    int plus = 0;
    int score = 0;

    scanf("%d", &T);

    for (i = 0; i < T; i++) 
    {
        scanf("%s", &str);

        plus = 0;
        score = 0;
        for (j = 0; j < strlen(str); j++) 
        {
            if (str[j] == 'O')
            {
                plus++;
            }    
            else
            {
                plus = 0;
            }               
            score += plus;
        }

        printf("%d\n", score);
    }

    return 0;
}