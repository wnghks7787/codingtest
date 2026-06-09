#include <iostream>

#define PERSON 'P'
#define HAMBURGER 'H'
#define EMPTY 'E'

int main()
{
    int N, k;
    std::string hamburger_people;

    int answer = 0;

    std:: cin >> N >> k;
    std:: cin >> hamburger_people;

    for(int i = 0 ; i < N ; i++)
    {
        int hand = i - k;

        if(hamburger_people[i] == PERSON)
        {
            for( ; hand <= i + k ; hand++)
            {
                // exit condition
                if(hand < 0)
                {
                    continue;
                }
                if(hand >= N)
                {
                    break;
                }
                
                if(hamburger_people[hand] == HAMBURGER)
                {
                    hamburger_people[hand] = EMPTY;
                    answer++;
                    break;
                }

            }
        }
    }

    std::cout << answer << std::endl;

    return 0;
}