#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int a;
    cin>>a;
    int mini = a, sum = 0; 
    for (int i=1;i<5;++i){
        cin>>a;
        int rem = a%10;
        if (rem == 0) sum += a;
        else if (rem < mini%10) {
            sum += 10*(mini/10) + 10;
            mini = a;
        }
        else sum += 10*(a/10) + 10;
    }
    sum += mini;
    cout<<sum<<endl;

    return 0;
}