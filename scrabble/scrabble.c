#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Points assigned to each letter
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1,
                3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8,
                4, 10};

// Function to compute score for a word
int compute_score(char word[])
{
    int score = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        if (isalpha(word[i])) // Only letters count
        {
            char upper = toupper(word[i]);
            score += POINTS[upper - 'A']; // Map A-Z to 0-25
        }
    }
    return score;
}

int main(void)
{
    char word1[100];
    char word2[100];

    printf("Player 1: ");
    scanf("%99s", word1); // Limit to avoid overflow

    printf("Player 2: ");
    scanf("%99s", word2);

    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

    return 0;
}