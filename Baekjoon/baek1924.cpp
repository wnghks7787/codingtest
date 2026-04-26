#include <iostream>

using namespace std;

int calcDate(int month, int day);

int main()
{
    string date[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int mon, day;
    int tot_date = 0;

    cin >> mon >> day;

    tot_date = calcDate(mon, day);

    tot_date %= 7;
    
    cout << date[tot_date] << endl;

    return 0;
}

int calcDate(int month, int day)
{
    int tot_date = 0;

    if(month > 1)
        tot_date += 31;
    if(month > 2)
        tot_date += 28;
    if(month > 3)
        tot_date += 31;
    if(month > 4)
        tot_date += 30;
    if(month > 5)
        tot_date += 31;
    if(month > 6)
        tot_date += 30;
    if(month > 7)
        tot_date += 31;
    if(month > 8)
        tot_date += 31;
    if(month > 9)
        tot_date += 30;
    if(month > 10)
        tot_date += 31;
    if(month > 11)
        tot_date += 30;

    tot_date += day;

    return tot_date;
}