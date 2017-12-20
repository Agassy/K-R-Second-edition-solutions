
#include <stdio.h>

int main(void){
    int c, recieved;
    recieved = 0;
    printf("Input some characters, when you finishes, press Ctrl+D.\n");
    while ((c = getchar()) != EOF)
        if (c == ' ') {
            if (!recieved) {
                recieved = 1;
                putchar(c);
            }
        } else {
            recieved = 0;
            putchar(c);
        }

    return 0;
}