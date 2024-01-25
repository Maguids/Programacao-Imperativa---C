#include <stdio.h>

void decompor(int total_seg, int *horas, int *mins, int *segs)
{
    *horas = (total_seg - total_seg % 3600) / 3600;
    total_seg = total_seg % 3600;
    *mins = (total_seg - total_seg % 60) / 60;
    *segs = total_seg % 60;

    printf("Horas = %d\n", *horas);
    printf("Minutos = %d\n", *mins);
    printf("Segundos = %d\n", *segs);
}

int main(void)
{
    int total_seg;
    int horas, mins, segs;

    printf("Introduza o tempo em segundos: "); scanf("%d", &total_seg);
    decompor(total_seg, &horas, &mins, &segs);

    return 0;
}