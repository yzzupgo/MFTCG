#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

int main(){
    // def inputs
    int i = 0, num_in, res = 0;
    int last_digit, min_last_digit = 9;

    // parse input
    while(i < 5){
        cin >> num_in;
        last_digit = num_in % 10;
        if(last_digit != 0)
            if(last_digit < min_last_digit)
                min_last_digit = last_digit;
            num_in = int(num_in / 10 + 1) * 10;
        res += num_in;
        i++;
    }
    res += min_last_digit;

    cout << res << endl;

    return 0;
}