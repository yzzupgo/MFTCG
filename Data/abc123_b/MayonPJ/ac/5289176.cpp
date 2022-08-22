#include <iostream>
#include <numeric>
#include <array>

using namespace std;

int main(int argc, char* argv[]){
    array<int, 5> cook_times;
    int min_residual = 10;
    for (auto&& cook_time: cook_times){
        cin >> cook_time;
        int residual = cook_time % 10;
        if (residual != 0){
            cook_time = cook_time + (10 - residual);
            if (residual < min_residual){
                min_residual = residual;
            }
        }
    }
    cout << accumulate(cook_times.begin(), cook_times.end(), 0) - (10 - min_residual) << endl;

}