#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
    int a[5];
    int m = 1 << 10;
    int sum = 0;
    for(int &i : a) {
        cin >> i;
        if(i%10 != 0) {
            int buf = i +(10- i %10);
            sum += buf;
            m = min(m, i % 10);
        }else{
            sum += i;
        }
        cerr << sum << endl;
    }

    cerr << sum << endl;
    cerr << m << endl;
    if(m == (1<<10)){
        m = 0;
    }
    cout << sum-(10-m) << endl;

    return 0;
}
