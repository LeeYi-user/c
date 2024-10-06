#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int cards[52];
    char *suits[] = {"Spades", "Hearts", "Diamonds", "Clubs"};
    char *faces[] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    for (int i = 0; i < 52; i++)
    {
        cards[i] = i;
    }

    srand(time(NULL));

    for (int i = 0; i < 52; i++)
    {
        int temp = cards[i], random = rand() % 52;
        cards[i] = cards[random];
        cards[random] = temp;
    }

    for (int i = 0; i < 52; i++)
    {
        printf("%s of %s\n", faces[cards[i] % 13], suits[cards[i] / 13]);
    }
}
