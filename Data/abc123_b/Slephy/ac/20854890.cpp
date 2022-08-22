#include <bits/stdc++.h>
#include <math.h>
using namespace std;



int main(){
    vector<int> time(5);
    int sum = 0;
    int cutTime = 0;

    for(int i = 0; i < 5; i++){
        cin >> time.at(i);
        if(time.at(i)%10 != 0){
            cutTime = max(cutTime, 10 - time.at(i)%10);
        }
        sum += time.at(i) + (200 - time.at(i))%10;
    }

    sum -= cutTime;
    
    cout << sum << endl;
}