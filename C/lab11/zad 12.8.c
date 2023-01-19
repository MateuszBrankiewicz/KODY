#include <stdio.h>
#include <string.h>

void sortWords(char words[5][4])
{
    char temp[4];
    int k, m;
    k =0;
    m = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        { 
            if (words[i][m] > words[j][k])
            {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    m++;
    }
}

void sortWords(char words[5][4]);

int main(void)
{
    char words[5][4];

    // Wczytaj wyrazy z klawiatury
    for (int i = 0; i < 5; i++)
    {
        printf("Wprowadź trzyliterowy wyraz: ");
        scanf("%s", words[i]);
    }

    // Posortuj wyrazy według pierwszej litery
    sortWords(words);

    // Wyświetl posortowane wyrazy
    printf("Posortowane wyrazy: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}