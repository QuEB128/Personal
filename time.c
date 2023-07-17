#include <stdio.h>
#include <time.h>

int main(void) 
{
    time_t now;
    struct tm *tm_now;
    char date_time[64];

    time(&now);
    tm_now = localtime(&now);
    strftime(date_time, sizeof(date_time), "%c", tm_now);

    printf("Current time and date: %s\n", date_time);

    return 0;
}
