#include <stdio.h>

int main(void)
{
    int ch, n_words = 0, n_digits = 0;
    do {
        ch = getchar();
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == EOF){
            if (n_digits != 0) {
                n_words ++;
                n_digits = 0;
            }
        } else{
            n_digits += 1;
        }
    } while (ch != EOF);
    
    if (n_digits != 0){
        n_words ++;
    }

    printf("\n Tem %d palavras. \n", n_words);

    return n_words;
}