#include <iostream>
#include <algorithm>
using namespace std;

int v1, v2, v3, v4, v5;

int order_time(int x){
    for (int i = 0; i <= 65; i++){
        if (x <= 10*i){
            x = 10*i;
            break;
        }
    }
    return x;
}

int main(){
    cin >> v1 >> v2 >> v3 >> v4 >> v5;
    if (min({v1, v2, v3, v4, v5}) < 1 || max({v1, v2, v3, v4, v5}) > 123){
        exit(0);
    }
    cout << order_time(v1) + order_time(v2) + order_time(v3) + order_time(v4) + order_time(v5) << endl;
    return 0;
}