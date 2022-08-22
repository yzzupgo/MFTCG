#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec(5), amari(5), x(5);
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> vec.at(i);
        amari.at(i) = vec.at(i) % 10;
        x.at(i) = vec.at(i) - amari.at(i);
        if(amari.at(i) != 0) x.at(i) += 10;
        sum += x.at(i);
    }

    sort(amari.begin(), amari.end());
    sum += amari.at(0);
    cout << sum << endl;


}