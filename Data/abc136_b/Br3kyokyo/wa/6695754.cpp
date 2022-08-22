#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for (int i = 0; i < n; i++)
#define INF 1000000000
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<string> vs;
typedef long double ld;
int vector_finder(std::vector<int> vec, int number) {
auto itr = std::find(vec.begin(), vec.end(), number);
size_t index = std::distance(vec.begin(), itr);
if (index != vec.size()) {
return 1;
} else {
return 0;
}
}
struct edge_t {
int dest;
int weight;
};
struct vertex_t {
vector<edge_t> edges;
vector<int> weight;
bool done;
int cost;
int from;
bool operator<(const vertex_t &another) const {
return another.cost < cost;
}
bool operator>(const vertex_t &another) const {
return another.cost > cost;
}
bool operator==(const vertex_t &another) const {
return another.cost == cost;
}
vertex_t() {
cost = INF;
done = false;
}
};
int bellman_ford(vector<vertex_t> &graph, int size, int start) {
int i, j, k, count = 0;
bool flag = false;
graph[start].cost = 0;
REP(i, size) {
REP(j, size) {
vertex_t cur = graph[j];
for (edge_t edge : cur.edges) {
if (cur.cost + edge.weight < graph[edge.dest].cost) {
if (i == size - 1)
flag = true;
graph[edge.dest].cost = cur.cost + edge.weight;
}
}
}
}
if (flag) {
return 1;
} else {
return 0;
}
}
class tree_t {
public:
bool is_leaf;
tree_t *right;
tree_t *left;
tree_t() {
is_leaf = false;
right = NULL;
left = NULL;
}
};
vector<string> splitstr(const string &s, char delim) {
vector<string> elems;
string item;
for (char ch : s) {
if (ch == delim) {
if (!item.empty())
elems.push_back(item);
item.clear();
} else {
item += ch;
}
}
if (!item.empty())
elems.push_back(item);
return elems;
}
int i, j, k;
unsigned GetDigit(unsigned num) {
unsigned digit = 0;
while (num != 0) {
num /= 10;
digit++;
}
return digit;
}
int main() {
int N;
cin >> N;
int n = GetDigit(N);
int sum = 0;
if (n % 2 == 0) {
for (i = n - 1; i > 0; i = i - 2) {
sum += pow(10, i) - pow(10, i - 1);
}
} else {
for (i = n - 2; i > 0; i = i - 2) {
sum += pow(10, i) - pow(10, i - 1);
}
int tmp = pow(10, n - 1);
sum += (N % tmp) + 1;
}
cout << sum << endl;
}
