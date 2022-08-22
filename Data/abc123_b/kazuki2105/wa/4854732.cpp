#include <iostream>
#include <vector>
#include <algorithm>

bool less_mod10(int left, int right)
{
    if ( (left-right) % 10 != 0) return left%10 < right%10;
    else return left < right;
}

int main()
{
    std::vector<int> V, W;
    V.resize(5);
    W.resize(5);
    for (auto& it : V) {std::cin >> it;}
    std::sort(V.begin(), V.end(), less_mod10);
    bool min = true;

    int sum = 0;
    for (int i=0; i<5; ++i) 
    {
        sum += V[i];
        if (V[i]%10 != 0 && min) {min = false;}
        else if (V[i]%10 != 0) {sum += (10 - V[i]%10);}
        std::cout << sum << std::endl;
    }

    std::cout << sum << std::endl;
    
    return 0;
}