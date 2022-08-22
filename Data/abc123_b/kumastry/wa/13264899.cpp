#include<iostream>
#include<vector>
#include<algorithm>

int main () {
    std::vector<int> a(5);
    std::vector<int> uq(5);

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        std::cin >> a[i];
        if (a[i] % 10)
        {
            uq[i] = a[i] % 10;
            a[i] += (10 - a[i] % 10);
            sum += a[i];
        }
        else
        {
            sum += a[i];
        }
    }

    int minuq = *std::min_element(uq.begin(), uq.end());
    sum += -10 + minuq;

    std::cout << sum << "\n";
}