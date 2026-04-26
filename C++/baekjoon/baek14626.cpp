#include <iostream>

using namespace std;

int main()
{
    string isbn;

    cin >> isbn;


    int isbn_checksum = 0;
    int weight = 3;
    int star_weight;
    for(int i = 0 ; i < 13 ; i++)
    {
        if(weight == 1)
            weight = 3;
        else
            weight = 1;

        if(isbn[i] == '*')
        {
            star_weight = weight;
            continue;
        }


        isbn_checksum += (weight * (isbn[i] - '0'));
    }

    for(int i = 0 ; i < 10 ; i ++)
    {
        if((isbn_checksum + (i * star_weight)) % 10 == 0)
        {
            cout << i << endl;
            break;
        }
    }


    return 0;
}