#include <iostream>
#include <vector>
using namespace std;
int main(){
    int time, minimum = 10, sum = 0;
    for (int i = 0; i < 5; i++){
        cin >> time;
        sum += time + 9 - (time - 1) % 10 ;
        minimum = min(minimum, (time - 1) % 10 + 1);
    }
    sum -= 10 - minimum;
    cout << sum;
    return 0;
}