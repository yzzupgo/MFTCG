#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int v1, v2, v3, v4, v5;
vector<int> v;
int T;

int order_time(int x){
    for (int i = 0; i <= 65; i++){
        if (x <= 10*i){
            x = 10*i;
            break;
        }
    }
    return x;
}

vector<int> det_turn(vector<int> x){
    for (int i = 1; i <= 9; i++){
        for (int j = 0; j < 5; j++){
            if (x[j] % 10 == i){
                swap(x[j], x[4]);
                goto end_loop;
            }
        }
    }
    end_loop:
    return x;
}

int main(){
    cin >> v1 >> v2 >> v3 >> v4 >> v5;
    vector<int> v = {v1, v2, v3, v4, v5};
    if (*min_element(v.begin(), v.end()) < 1 || *max_element(v.begin(), v.end()) > 123){
        exit(0);
    }
    
    v = det_turn(v);
    //for(int i = 0; i < v.size(); i++){
    //    cout << v[i] << ' ';
    //}
    //cout << endl;
    //cout << order_time(v1) + order_time(v2) + order_time(v3) + order_time(v4) + order_time(v5) << endl;
    for (int i = 0; i < 5; i++){
        T += order_time(v[i]);
    }
    cout << T << endl;
    return 0;
}