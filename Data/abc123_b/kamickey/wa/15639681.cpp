#include <bits/stdc++.h>
#define rep(i, n) ; for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;


int digit(int n){
    int a = n % 10;
    return a;
}



int main(){
    int last = 10;
    int index = 0;  
    vector<int> vec(5);
    rep(i,5){
        cin >> vec[i];
    }
    rep(i, 5){
        int num = digit(vec[i]);
        cout << num << endl;
        if (num < last && num != 0){
            last = digit(vec[i]);
            index = i;
        }
    }
    int sum =0;
    rep(i, 5){
        int num = digit(vec[i]);
        if (i == index){
            sum += vec[i];
        }
        else {
            if (num != 0){
                sum += vec[i] + 10 - num;
            }
            else {
                sum += vec[i];
            }
        }
    }

    cout << sum << endl;


    // do {
    //     for (int i=0; i<5; i++){

    //     }
    // }while(next_permutation(vec.begin(), vec.end()));
}