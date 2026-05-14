#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    
    int convert = 'A' - 'a';
    
    for(int i = 0 ; i < my_string.length() ; i++)
    {
        if(my_string[i] > 'Z')
        {
            my_string[i] += convert;
        }
        else
        {
            my_string[i] -= convert;
        }
    }
    return my_string;
}