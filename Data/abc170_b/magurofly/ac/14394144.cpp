#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#define debug cerr << "--" << __LINE__ << "--" << "\n"
typedef long long ll;
using namespace std;
class Var{
public:
mutable string sval;
mutable long double dval;
enum NumericState {UNKNOWN = -1, STRINGY = 0, NUMERIC = 1};
mutable NumericState numericState;
mutable bool svalValid, dvalValid;
Var(){
*this = Var("");
}
Var(string s){
sval = s;
svalValid = true; dvalValid = false;
numericState = UNKNOWN;
}
Var(long double d){
dval = d;
svalValid = false; dvalValid = true;
numericState = NUMERIC;
}
Var(const Var &v){
sval = string(v.sval); dval = v.dval;
svalValid = v.svalValid; dvalValid = v.dvalValid;
numericState = v.numericState;
}
void fillDval() const{
if (dvalValid) return;
long double d;
bool numeric = isNumericString(sval, &d);
if (numeric){
numericState = NUMERIC;
dval = d;
}else{
numericState = STRINGY;
dval = 0.0;
}
dvalValid = true;
}
static bool isNumericString(const string &s, long double *ptr) {
char* ep;
*ptr = strtold(s.c_str(), &ep);
return NULL != ep && '\0' == ep[0] && s[0] != '\0';
}
bool isNumeric() const{
fillDval();
return numericState == NUMERIC;
}
void fillSval() const{
if (svalValid) return;
sval = (floorl(dval) == dval) ? to_string((ll)dval) : to_string(dval);
svalValid = true;
}
long double asNumber() const{
fillDval();
return dval;
}
string asString() const{
fillSval();
return sval;
}
Var operator+(const Var &y) const{
return Var(this->asNumber() + y.asNumber());
}
Var operator+=(const Var &y){
*this = *this + y;
return *this;
}
Var operator-(const Var &y) const{
return Var(this->asNumber() - y.asNumber());
}
Var operator*(const Var &y) const{
return Var(this->asNumber() * y.asNumber());
}
Var operator/(const Var &y) const{
return Var(this->asNumber() / y.asNumber());
}
Var operator%(const Var &y) const{
return Var(fmodl(this->asNumber(), y.asNumber()));
}
bool operator<(const Var &y) const{
if (this->isNumeric() && y.isNumeric()){
return this->asNumber() < y.asNumber();
}
return this->asString() < y.asString();
}
bool operator>(const Var &y) const{
return y < *this;
}
bool operator==(const Var &y) const{
if (this->isNumeric() && y.isNumeric()){
return this->asNumber() == y.asNumber();
}
return this->asString() == y.asString();
}
friend ostream& operator << (ostream& os, const Var& p);
friend istream& operator >> (istream& is, const Var& p);
};
ostream& operator << (ostream& os, const Var& p){
os << p.asString();
return os;
}
istream& operator >> (istream& is, Var& p){
string s; is >> s; p = Var(s);
return is;
}
Var letterOf(Var index, Var sourceString){
string str = sourceString.asString();
int idx = (int)(index.asNumber() - 1);
if (0 <= idx && idx < str.size()) return Var(str.substr(idx, 1));
return Var();
}
class VarList{
public:
vector<Var> data;
VarList(const vector<Var> &x) { data = x; }
void push_back(const Var &x){ data.push_back(x); }
void pop_back(){ data.pop_back(); }
void clear(){ data.clear(); }
int size(){ return (int) data.size(); }
Var getLineOfList(const Var &index) const{
int idx = (int)index.asNumber() - 1;
if (0 <= idx && idx < data.size()) return data[idx];
return Var();
}
void setLineOfListTo(const Var &index, const Var &v){
int idx = (int)index.asNumber() - 1;
if (0 <= idx && idx < data.size()) data[idx] = v;
}
void deleteLineOfList(const Var &index){
string kwd = index.asString();
if (kwd == "all"){
data.clear();
}else if (kwd == "last"){
data.pop_back();
}else{
int idx = (int)index.asNumber() - 1;
if (0 <= idx && idx < data.size()) data.erase(data.begin() + idx);
}
}
void insertAtIndexOfList(const Var &item, const Var &index){
int idx = (int)index.asNumber() - 1;
if (0 <= idx && idx <= data.size()) data.insert(data.begin() + idx, item);
}
void insertAtRandomOfList(const Var &item){
int idx = rand() % (data.size() + 1);
data.insert(data.begin() + idx, item);
}
string asString() const{
string ret;
for(int i=0;i<data.size();i++){
if (i > 0) ret += ' ';
ret += data[i].asString();
}
return ret;
}
int itemNumOfList(const Var &item) const{
auto itr = find(data.begin(), data.end(), item);
if (itr == data.end()) return 0;
return 1 + (int)(itr - data.begin());
}
friend ostream& operator << (ostream& os, const VarList& p);
};
ostream& operator << (ostream& os, const VarList& p){
os << p.asString();
return os;
}
long double randUniform(const long double x, const long double y){
if (x > y) return randUniform(y, x);
if (floor(x) == x && floor(y) == y){
ll xi = (ll)round(x), yi = (ll)round(y);
return xi + rand() % (yi - xi + 1);
}else{
return x + (y - x) * (0.0 + rand()) / RAND_MAX;
}
}
Var buf_answer;
Var var_x(0);
Var var_y(0);
Var var_a(0);
Var var_b(0);
int main();
int main(){
cin >> buf_answer;
var_x = buf_answer;
cin >> buf_answer;
var_y = buf_answer;
var_b = (((var_y - (var_y % Var(2))) / Var(2)) - var_x);
var_a = (var_x - var_b);
if ((((var_a > Var(-1)) && (var_b > Var(-1))) && (((var_a * Var(2)) + (var_b * Var(4))) == var_y))){
cout << Var("Yes") << endl;
} else {
cout << Var("No") << endl;
}
return 0;
return 0;
}
