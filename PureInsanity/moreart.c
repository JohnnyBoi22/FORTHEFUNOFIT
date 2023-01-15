#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define ROW 4
#define COL 8
#define CHAR_INDEX_MAX 26

enum alph_enum {A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z};

typedef struct _alphabets {
    char *line[ROW];
}alphabet;

alphabet chars[26];

init_a(enum alph_enum letter)
{
    int i;
    for (i=0 ; i<ROW ; i++) {
        chars[letter].line[i] = (char *) malloc(COL);
 if (chars[letter].line[i] == NULL) {
            printf("memory allocation failed \n");
            return;
        }
    }

    switch (letter) {
                                     /*0123 4567*/
    case A:
        strcpy(chars[letter].line[0 ], "   |||||||||||||||||||||||   ");
        strcpy(chars[letter].line[1 ], "  |||||||||||||||||||||||||  ");
        strcpy(chars[letter].line[2 ], " ||||||||||||||||||||||||||| ");
        strcpy(chars[letter].line[3 ], "|||||||||||||||||||||||||||||");
        strcpy(chars[letter].line[4 ], "|||||||||||||||||||||||||||||");
        strcpy(chars[letter].line[5 ], "|||||      |||||||      |||||");
        strcpy(chars[letter].line[6 ], "|||||      |||||||      |||||");
        strcpy(chars[letter].line[7 ], "|||||      |||||||      |||||");
        strcpy(chars[letter].line[8 ], "|||||______|||||||______|||||");
        strcpy(chars[letter].line[9 ], "|||||||||||_______|||||||||||");
        strcpy(chars[letter].line[10], "|||||||||___________|||||||||");
        strcpy(chars[letter].line[11], "||||||||_____________||||||||");
        strcpy(chars[letter].line[12], "||||||___            __||||||");
        strcpy(chars[letter].line[13], "||||||___---      ---__||||||");
        strcpy(chars[letter].line[14], "|       |");
        strcpy(chars[letter].line[15], "|       |");
        strcpy(chars[letter].line[16], "|       |");
        strcpy(chars[letter].line[17], "|       |");
        strcpy(chars[letter].line[18], "|       |");
        strcpy(chars[letter].line[19], "|       |");
        strcpy(chars[letter].line[20], "|       |");
        strcpy(chars[letter].line[21], "|       |");
        strcpy(chars[letter].line[22], "|       |");
        strcpy(chars[letter].line[23], "|       |");
        strcpy(chars[letter].line[24], "|       |");
        strcpy(chars[letter].line[25], "|       |");
        strcpy(chars[letter].line[26], "|       |");
    }

    return;

}

print_str(char word[])
{
    int i, j;

    printf("\n");
    for (i=0; i<ROW; i++) {
        for (j=0 ; j<strlen(word) ; j++) {
            printf("%s", chars[word[j] % 'A'].line[i]);
        }
        printf("\n");
    }
int main(void)
{
    init_a(A);
    /* print_str("A"); */
    print_str("A");
    return 0;
}
    /* free the memory for HELLO here */

