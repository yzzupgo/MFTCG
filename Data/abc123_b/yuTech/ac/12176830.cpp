#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

bool comp(int a, int b){
    int wa = (10 - a % 10 == 10 ? 0 : 10 - a % 10);
    int wb = (10 - b % 10 == 10 ? 0 : 10 - b % 10);
    return wa < wb;
}

int main(int argc, char const *argv[])
{
    vector<int> T;
    int tmp;
    for (int i = 0; i < 5; i++)
    {
        cin >> tmp;
        T.emplace_back(tmp);
    }
    sort(T.begin(), T.end(), comp);

    for (int i = 0; i < 4; i++)
    {
        if (T[i] % 10 != 0)
        {
            T[i] = T[i] + (10 - T[i] % 10);
        }
        
    }
    
    int sum = accumulate(T.begin(), T.end(), 0);
    cout << sum << endl;

    return 0;
}