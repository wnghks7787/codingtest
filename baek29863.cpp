#include <iostream>

using namespace std;

int main()
{
    int start_hour, end_hour;
    int sleep_time = 0;

    cin >> start_hour;
    cin >> end_hour;

    if(start_hour > 12)
    {
        sleep_time += (24 - start_hour);
        sleep_time += end_hour;
    }
    else
    {
        sleep_time += (end_hour - start_hour);

    }

    cout << sleep_time << endl;

    return 0;
}