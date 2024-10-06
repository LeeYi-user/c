#include <stdio.h>
#include <time.h>

int main()
{
    char string[100];

    printf("Please enter your birthday (year/month/day): ");
    scanf("%s", &string);

    int bd_year, bd_month, bd_day;
    char *token = strtok(string, "/");

    sscanf(token, "%d", &bd_year);
    token = strtok(NULL, "/");
    sscanf(token, "%d", &bd_month);
    token = strtok(NULL, "/");
    sscanf(token, "%d", &bd_day);

    time_t timep;
    struct tm *p;

    time(&timep);
    p = gmtime(&timep);

    int now_year = 1900 + p->tm_year;
    int now_month = 1 + p->tm_mon;
    int now_day = p->tm_mday;
    int age = now_year - bd_year;

    if ((now_month < bd_month) || (now_month == bd_month && now_day < bd_day))
    {
        age -= 1;
    }

    int max_hr = 220 - age;
    float target_hr1 = 0.5 * max_hr;
    float target_hr2 = 0.85 * max_hr;

    printf("\nYour maximum heart rate is %d bpm", max_hr);
    printf("\nYour target heart rate is %.2f ~ %.2f bpm\n", target_hr1, target_hr2);
}
