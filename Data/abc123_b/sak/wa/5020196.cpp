#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int result = 0, rest_min = 10, food_time;
    for (int i=0; i<5; i++) {
        cin >> food_time; 
        result += (int)ceil((float)food_time/10)*10;
        cout << result << endl;
        if (food_time%10 != 0) rest_min = min(rest_min, food_time%10);
    }
    result -= 10;
    result += rest_min;

    cout << result << endl;
}