#include <stdio.h>
#include <ctype.h>


int main(void)
{
    int ch, total = 0, pontos;

    while ((ch=getchar()) != EOF){
        ch = toupper(ch);
        if (ch == 'A' || ch =='E' || ch == 'I' || ch == 'L' || ch == 'N' || ch == 'O' || ch == 'R' || ch == 'T' || ch == 'S' || ch == 'U'){
            pontos = 1;
            total += pontos;
        } else if (ch == 'D' || ch == 'G'){
            pontos = 2;
            total += pontos;
        } else if (ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P'){
            pontos = 3;
            total += pontos;
        } else if (ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y'){
            pontos = 4;
            total += pontos;
        } else if (ch == 'K'){
            pontos = 5;
            total += pontos;
        } else if (ch == 'J' || ch == 'X'){
            pontos = 8;
            total += pontos;
        } else if (ch == 'Q' || ch == 'Z'){
            pontos = 5;
            total += pontos;
        }
    }
    printf("\n %d pontos. \n", total);
    return 0;
}