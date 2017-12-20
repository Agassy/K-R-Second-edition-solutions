
#include <stdio.h>

#define NUM_CHARS 128
#define IN_WORD 1
#define OUT_WORD 0

int main(void){
    int c;
    int freq[NUM_CHARS + 1];
    int i;

    for (i = 0; i <= NUM_CHARS; ++i)
        freq[i] = 0;

    printf("Input some characters, then press Ctrl+D.\n");
    while ((c = getchar()) != EOF)
        ++freq[c];

    printf("\n ASCII | Count\n");
    for (i = 0; i <= NUM_CHARS; ++i) 
        if (freq[i] > 0)
            printf(" %5d : %5d\n", i, freq[i]);

    return 0;
}