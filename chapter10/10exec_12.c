#include <stdio.h>

#define MONTHS 12
#define YEARS 5
float get_a_year_total(const float arr[], int n) {
    float total = 0;
    for (int i = 0; i < n; ++i) {
        total += arr[i];
    }

    return total;
}

float get_n_years_total(const float rain[][MONTHS], int years) {
    float total = 0;
    float subtot;
    int year;
    for (year = 0; year < years; ++year) {
        subtot = get_a_year_total(rain[year], MONTHS);
        printf("%5d %15.1f\n", 2010 + year, subtot);
        total += subtot;
    }

    return total;
}

void get_monthly_average(const float rain[][MONTHS], int years) {
    float subtot;
    int year, month;
    for (month = 0; month < MONTHS; ++month) {
        for (year = 0, subtot = 0; year < YEARS; year++) {
            subtot += rain[year][month];
        }
        printf("%4.1f", subtot / YEARS);
    }
}
int main(void) {
    const float rain[YEARS][MONTHS] =
            {
                    {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
                    {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
                    {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
                    {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
                    {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
            };
    int year, month;
    float subtot, total;

    printf(" YEAR    RAINFALL    (inches)\n");
//    for (year = 0, total = 0; year < YEARS; year++) {
//        for (month = 0, subtot = 0; month < MONTHS; month++) {
//            subtot += rain[year][month];
//        }
//        printf("%5d %15.1f\n", 2010 + year, subtot);
//        total += subtot;
//    }
    total = get_n_years_total(rain, YEARS);
    printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan Feb Mar Par May Jun Jul Aug Sep Oct ");
    printf("Nov Dec\n");

//    for (month = 0; month < MONTHS; month++) {
//        for (year = 0, subtot = 0; year < YEARS; year++) {
//            subtot += rain[year][month];
//        }
//        printf("%4.1f", subtot / YEARS);
//    }
    get_monthly_average(rain, YEARS);
    printf("\n");

    return 0;
}