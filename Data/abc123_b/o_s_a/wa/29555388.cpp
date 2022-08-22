#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

/*
void print(int time, const vector<int> &v) {
    cout << "time: " << time << ", [";
    for (auto i : v)
        cout << i << " ";
    cout << "]" << endl;
}
*/

int main() {

    constexpr int ORDER_NUM = 5;
    vector<int> orderList(ORDER_NUM);

    for (size_t i = 0; i < ORDER_NUM; ++i)
        cin >> orderList.at(i);

    int time = 0;
    for (size_t i = 0; i < ORDER_NUM; ++i) {
        if (orderList.at(i) % 10 != 0)
            continue;

        time += orderList.at(i);
        orderList.at(i) = -1;
    }

    for (size_t i = 0;; i = ++i % ORDER_NUM) {
        if (count(orderList.begin(), orderList.end(), -1) == orderList.size())
            break;
        else if (orderList.at(i) == -1)
            continue;

        int index = i;
        int tmpTime = orderList.at(i);

        for (size_t j = 0; j < ORDER_NUM; ++j) {
            if (orderList.at(j) == -1 || i == j)
                continue;

            if (tmpTime % 10 <= orderList.at(j) % 10) {
                tmpTime = orderList.at(j);
                index = j;
            }
        }
        time += tmpTime;
        time += 10 - (time % 10);
        orderList.at(index) = -1;
    }

    cout << time << endl;

    return 0;
}
