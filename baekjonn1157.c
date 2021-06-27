#include <stdio.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS 

int main() 
{
    int i,j,sum=0;
    char str[1000000];
    int arr[26] = { 0, }; //알파벳의 개수 판별
    scanf("%s", &str);
    unsigned int len = strlen(str);


    for (int i = 0; i < len; i++) 
    {
        if (str[i] < 96) 
        {          
            arr[str[i] - 65]++;
        }
        else if (str[i] > 96) 
        {   
            arr[str[i] - 97]++;
        }
    }

    char m;
    int max = 0;

    for (int i = 0; i < 26; i++) 
    {
        if (arr[i] != 0 && max < arr[i]) 
        {
            max = arr[i];
            m = i + 65;
        }
    }

    for (i = 0; i < 26; i++)
    {
        if (arr[i]!=0 && max==arr[i] && i !=m-65)
        {
            m = '?';
            break;
        }
    }

    printf("%c\n", m);

    return 0;
}



