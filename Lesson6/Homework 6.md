# Homework 6

**q1 平方和**

給定一個n，求從1到n的平方和(用遞迴)


**q2 card shuffling(challenging)**

Task Description
Write a program to simulate shuffling a deck of cards. We will use an array of pointers to represent a deck of card. A card is an integer from 1 to 10000, and the i-th element of this array represent the i-th card in a deck of cards. That is, if the i-th card in the deck is 6, then the i-th pointer in the pointer will point to an integer whose value is 6. If a pointer has "NULL" then it is the end of deck, and there are no more cards after it, so it is like an "end of deck". We also assume that there will be no more than 9999 cards in a deck.

Now we want to shuffle a deck of cards. First we cut the deck into two halves. The first half has the first ceilr(n/2) cards and the second half has the remaining cards. For example, if there are 9 cards then the first half has 5 cards anf the second half has 4 cards. Then we shuffle these two halves into one by placing the first card from the first half as the first card, the first card from the second half as the second card, the second card from the first half as the third card, etc. That is, we interleave these two halves back into a deck of cards. The prototype of this shuffling function is as follows.

```
void shuffle(int *deck[]);
```

We also need to be able to print a deck of cards. For this we need the following print_deck function, which will print the cards according to their order in the deck in a single line, with a space between two cards. Note that you will know there are no more cards by the "end of deck".

```
void print(int *deck[]);
```
A sample main program is as follows. Please finish the program by providing the implementation of shuffle and print.

```
#include <stdio.h>

void shuffle(int *deck[]);
void print(int *deck[]);

int main()
{
  int card[10000];
  int *deck[10000];
  int index = 0;

  while (scanf("%d", &(card[index])) != EOF) {
    deck[index] = &(card[index]);
    index++;
  }
  deck[index] = NULL;
  shuffle(deck);
  print(deck);  
  return 0;
}
```

Sample input
1 2 3 4 5

Sample Output
1 4 2 5 3
