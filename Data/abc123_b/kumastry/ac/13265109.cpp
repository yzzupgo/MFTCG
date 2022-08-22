#include<iostream>
#include<vector>
#include<algorithm>

int main () {
    std::vector<int> a(5);
    std::vector<int> uq;

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        std::cin >> a[i];
        if (a[i] % 10)
        {
            uq.push_back(a[i] % 10);
            a[i] += (10 - a[i] % 10);
            sum += a[i];
        }
        else
        {
            sum += a[i];
        }
    }
    if(!uq.size()) {
        uq.push_back(10);
    }

    int minuq = *std::min_element(uq.begin(), uq.end());
    sum += (-10 + minuq);

    std::cout << sum << "\n";
}