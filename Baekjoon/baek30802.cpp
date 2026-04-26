#include <iostream>
#include <vector>

#define SHIRT_SIZE 6

using namespace std;

int main()
{
    int people;
    vector<int> shirt_size(SHIRT_SIZE);
    int shirts, pens;

    cin >> people;
    for(int i = 0 ; i < SHIRT_SIZE ; i++)
        cin >> shirt_size[i];

    cin >> shirts >> pens;

    int need_shirts_package = 0;
    int need_pens_package;
    int need_pens_each;

    for(int i = 0 ; i < SHIRT_SIZE ; i++)
    {
        if(shirt_size[i] % shirts == 0)
            need_shirts_package += shirt_size[i] / shirts;
        else
            need_shirts_package += shirt_size[i] / shirts + 1;
    }

    need_pens_package = people / pens;
    need_pens_each = people % pens;

    cout << need_shirts_package << endl;
    cout << need_pens_package << " " << need_pens_each << endl;

    return 0;
}