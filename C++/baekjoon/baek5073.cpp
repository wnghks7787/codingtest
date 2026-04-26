#include <iostream>
#include <vector>

using namespace std;

int main()
{

    while(1)
    {
        vector<int> triangle(3);
        string answer;

        cin >> triangle[0] >> triangle[1] >> triangle[2];

        if(triangle[0] == 0 && triangle[1] == 0 && triangle[2] == 0)
            break;

        for(int i = 0 ; i < 3 ; i++)
        {
            int max = triangle[0];
            int max_i = 0;
            for(int i = 0 ; i < 3 ; i++)
            {
                if(triangle[i] > max)
                {
                    max = triangle[i];
                    max_i = i;
                }
            }

            int short_sum = 0;
            for(int i = 0 ; i < 3 ; i++)
                if(i != max_i)
                    short_sum += triangle[i];
            if(short_sum > max)
            {
                if(triangle[0] == triangle[1] && triangle[0] == triangle[2])
                    answer = "Equilateral";
                else if(triangle[0] == triangle[1] || triangle[0] == triangle[2] || triangle[1] == triangle[2])
                    answer = "Isosceles";
                else
                    answer = "Scalene";
            }
            else
                answer = "Invalid";
        }

        cout << answer << endl;
    }

    return 0;
}