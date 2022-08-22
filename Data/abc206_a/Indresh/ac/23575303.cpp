#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;
#define pb push_back
#define sz size()
#define ff first
#define ss second
#define mod 1000000007
#define pie 3.14159265359
#define minheap priority_queue<int , vector<int> , greater<int> >
#define maxheap priority_queue<int>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) ;
#define INF 1000000000000000
#define debug(n) cout<<#n<<" "<<n<<"\n";
int main() {
fast;
double n;
cin >> n;
n = 1.08 * n;
n = floor(n);
if(n < 206) {
cout << "Yay!";
} else if(n == (double)206) {
cout << "so-so";
} else {
cout << ":(";
}
}
