#include <stdio.h>
#include <time.h>

int main()
{
    struct tm* pTimeInfo;
    time_t t = time(NULL);
    pTimeInfo = localtime(&t);

    int year = pTimeInfo->tm_year + 1900;
    int month = pTimeInfo->tm_mon + 1;
    int day = pTimeInfo->tm_mday;
    int hour = pTimeInfo->tm_hour;
    int min = pTimeInfo->tm_min;
    int sec = pTimeInfo->tm_sec;

    printf("%d-%.2d-%.2d\n", year, month, day);
}
