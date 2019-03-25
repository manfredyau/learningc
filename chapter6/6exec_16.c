#include <stdio.h>
const int GRID = 100;
int main(void)
{

    double Daphne = 100;
    double Deirdre = 100;
    int years;

    for (years = 0; Deirdre <= Daphne; ++years)
    {
        Daphne += GRID * 0.1;
        Deirdre += Deirdre * 0.05;
    }

    printf("After %d years, Deirdre's money over than Daphne.\n", years);
    printf("Daphne is: %.2f, Deirdre is: %.2f\n", Daphne, Deirdre);

    return 0;
}