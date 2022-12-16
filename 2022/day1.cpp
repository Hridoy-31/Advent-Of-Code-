#include <bits/stdc++.h>
// #include "debugging.h"
 
using namespace std;
using ll = long long int;
 
ll gcd (ll a, ll b) {
    return a%b==0?b:gcd(b,a%b);
}
 
void solve() {
 
}
 
int main()
{
    string s;
    ll maxi = 0, total = 0;
    vector <ll> store;
    while (getline(cin, s)) {
        if (s.size() == 0) {
            store.push_back(total);
            maxi = max(maxi, total);
            total = 0;
        }
        else {
            total += stoi(s);
        }
    }
    cout << max(maxi, total) << endl;
    ll totcal = 0;
    sort(store.rbegin(), store.rend());
    for (int i=0; i<3; i++) {
        totcal += store[i];
    }
    cout << totcal << endl;
    return 0;
}
