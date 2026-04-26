// 비트마스킹으로 해결 할 수 있다.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class set{
    vector<int> sets;
    vector<int> all_set;
    int size;
    
public:
    set();

    int check(int x);
    void add(int x);
    void remove_set(int x);
    void toggle(int x);
    void all();
    void empty();
};

set::set()
{
    size = 0;

    for(int i = 0 ; i < 20 ; i++)
        all_set.push_back(i+1);
}

int set::check(int x)
{
    for(int i = 0 ; i < size ; i++)
    {
        if(sets[i] == x)
            return 1;
    }
    return 0;
}

void set::add(int x)
{   
    if(!check(x))
    {
        sets.push_back(x);
        size++;
    }
}

void set::remove_set(int x)
{
    if(check(x))
    {
        sets.erase(remove(sets.begin(), sets.end(), x), sets.end());
        size--;
    }
}

void set::toggle(int x)
{
    if(!check(x))
        add(x);
    else
        remove_set(x);
}

void set::all()
{
    sets.clear();
    sets = all_set;
    size = 20;
}

void set::empty()
{
    sets.clear();
    size = 0;
}

int main()
{
    int n;
    cin >> n;

    set mySet;

    for(int i = 0 ; i < n ; i++)
    {
        string oper;
        cin >> oper;

        if(oper == "all")
            mySet.all();
        else if(oper == "empty")
            mySet.empty();
        else
        {
            int x;
            cin >> x;

            if(oper == "add")
                mySet.add(x);
            else if(oper == "remove")
                mySet.remove_set(x);
            else if(oper == "check")
                cout << mySet.check(x) << endl;
            else if(oper == "toggle")
                mySet.toggle(x);
        }
    }

    return 0;
}