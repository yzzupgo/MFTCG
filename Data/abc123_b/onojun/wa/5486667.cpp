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
    for (int i = 0; i < numbers.size(); ++i) {
        int number = numbers[i];
        number = number % 10;

        if (number != 0 && min > number) {
            min = number;
        }
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

    cout << sum - 10 + min << endl;
}