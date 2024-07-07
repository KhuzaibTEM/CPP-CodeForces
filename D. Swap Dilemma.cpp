#include <bits/stdc++.h>
using namespace std;
 
#define REP(i,a,b) for (ll i = a; i <= b; i++)
#define REV(i,a,b) for (ll i = a; i >= b; i--)
#define elif else if
#define lb lower_bound
#define ub upper_bound
 
//#define or ||          \\                //    ||    ||    \\    //
//#define and &&          \\      /\      //     ||    ||     \\  //
//                         \\    //\\    //      ||____||      \\//
//                          \\  //  \\  //       ||____||       //
//                           \\//    \\//        ||    ||      //
//                            \/      \/         ||    ||     //
 
typedef string str;
typedef long long ll;
typedef long double ld;
typedef vector<int> vti;
typedef vector<str> vts;
 
 
bool EQ(vector<ll>& v1, vector<ll>& v2) {
    unordered_map<ll, ll> m;
    REP(i,0,v2.size() - 1) m[v2[i]] = i;
 
    ll count = 0;
    REP(j,0,v1.size() - 1) {
        if (v1[j] != v2[j]) {
            count++;
            ll index = m[v1[j]];
            swap(v2[j], v2[index]);
            m[v2[index]] = index;
            m[v1[j]] = j;
        }
    }
    return count % 2 == 0;
}
 
int main() {
    int lim;
    cin >> lim;
 
    REP(i,1,lim) {
        ll size,temp;
        cin >> size;
 
        vector<ll> v1, v2;
        REP(j,0,size - 1) {
            cin >> temp;
            v1.push_back(temp);
        }
        REP(k,0,size - 1) {
            cin >> temp;
            v2.push_back(temp);
        }
 
        vector<ll> sort_v1 = v1, sort_v2 = v2;
        sort(sort_v1.begin(), sort_v1.end());
        sort(sort_v2.begin(), sort_v2.end());
 
        if (sort_v1 != sort_v2) cout << "NO" << endl;
        else {
            if (EQ(v1, v2)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}
