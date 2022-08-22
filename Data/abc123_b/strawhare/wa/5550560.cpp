#include<iostream>
#include<vector>

using namespace std;

int main() {
    int index = 0;
    int m = 9;
    int count = 0;
    vector<int> a(5);
    for (int i = 0; i < 5; i++){
        cin >> a[i];
        if (m > a[i]){
            m = a[i];
            index = i;
        }
    }

    for (int i = 0; i < 5; i++){
        if (i == index){
            count += a[i];
        }
        count += a[i] + (10 - a[i]%10);
    }
}
