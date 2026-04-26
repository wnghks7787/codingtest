#include <iostream>
#include <vector>

#define PIC_SIZE 15

using namespace std;

int main()
{
    string pic_line;
    int answer_cat;
    string cats[3] = {"chunbae", "nabi", "yeongcheol"};

    for(int i = 0 ; i < PIC_SIZE ; i++)
    {
        getline(cin, pic_line);

        for(int j = 0 ; j < pic_line.length() ; j++)
        {
            if(pic_line[j] == 'w')
                answer_cat = 0;
            else if(pic_line[j] == 'b')
                answer_cat = 1;
            else if(pic_line[j] == 'g')
                answer_cat = 2;
        }
    }

    cout << cats[answer_cat] << endl;

    return 0;
}