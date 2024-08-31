#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t cur_time = time(NULL);
    struct tm *t;
    t = localtime(&cur_time);

    int year = t->tm_year + 1900;
    int month = t->tm_mon + 1;
    int day = t->tm_mday;

    printf("%04d-%02d-%02d\n", year, month, day);

    return 0;
}