/* Programming Exercise 9-2 */

/*
 *  Devise a function chline(ch, i, j) that prints the requested character in columns i
 *  through j. Test it in a simple driver.
 */

#include <stdio.h>

void chline(char ch, int i, int j);

int main(void) {
    char ch;
    int i, j;
    printf("Enter a character and two integers: ");
    while (scanf("%c %d %d", &ch, &i, &j) == 3) {
        chline(ch, i, j);
        while(getchar() != '\n') continue;
        printf("Enter a character and two integers: ");
    }

    return 0;
}

void chline(char ch, int i, int j) {

    for (int k = 1; k <= j; k++) {
        if (k >= i) {
            printf("%c", ch);
        } else {
            printf(" ");
        }
    }
    printf("\n");
}
