#include <bits/stdc++.h>
using namespace std;
using pint = pair<int,int>;

const long long INFLL = 1LL << 60;
const int INFI = 1000000000;

int solve(int n){
    int i=0;
    while(true){
        if(n<=10*i) return 10*i;
        i++;
    }
}

int main(){
    vector<int> vec(5);
    int sum = 0;
    int min = 10;
    for(int j=0;j<5;j++){
        int i; cin >> i;
        sum += solve(i);
        if(i%10 != 0 && i%10 < min) min = i%10;
    }
    cout << sum << min << endl;
    cout << sum-10+min << endl;
}
