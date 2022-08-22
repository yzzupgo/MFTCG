#include <iostream>
#include <vector>
using namespace std;

int main() {
    int sum = 0;
    int rest_sum = 0;
    int max_rest = 0;
    for (int i = 0; i < 5; i++) {
        int a;
        cin >> a;
        sum += a;
        int rest = 10 - a % 10;
        rest_sum += rest;
        if (rest != 10) {
            max_rest = max(max_rest, rest);
        }
    }
    cout << sum + rest_sum - max_rest << endl;
    return 0;
}