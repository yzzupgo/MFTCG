#include <bits/stdc++.h>
#define rep(i, n) ; for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
int main(){
    vector<int> vec(5);
    vector<int> rests(5);
    int n=5;
    int min_rest = 9;
    int last;
    int sum =0
    rep(i, n) cin >> vec[i];    
    rep(i, n){
        int num=0;
        int rest = vec[i] % 10;
        rests[i] = rest;
        if (rest < min_rest && rest != 0) {
            min_rest = rest;
            last = vec[i];
        }
    }

    rep(i, n) {
        if(vec[i] == last) continue;
        else {
            sum += vec[i];
            sum += 10 - rests[i];
        }
    }

    sum += last;
    cout << sum << endl;
}