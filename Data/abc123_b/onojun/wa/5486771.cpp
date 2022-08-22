#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {

    vector<int> numbers(5);

    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }

    int min = 9;
    bool changed = false;
    for (int i = 0; i < numbers.size(); ++i) {
        int number = numbers[i];
        number = number % 10;

        if (min > number) {
            min = number;
        } else {
            changed = true;
        }
    }

    if (!changed) {
        min = 0;
    }


    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        int number = numbers[i];

        if (number % 10 == 0) {
            sum += number;
        } else {
            sum += (number / 10 + 1) * 10;
        }
    }

    if (changed) {
        cout << sum - 10 + min << endl;
    } else {
        cout << sum + 10 << endl;
    }
}