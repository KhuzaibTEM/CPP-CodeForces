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



int main() {
    int lim;
    cin >> lim;
    REP(i,1,lim) {
        ll n,size = 0;
        vector<ll> v1, v2;
        cin >> n;

        REP(j,0,60) {
            if (n & (1LL << j)) {
                size++;
                v2.push_back((1LL << j));
            }
        }
        size++;
        v1.push_back(n);
        REP(k,0,v2.size() - 1) {
            if (n - v2[k] > 0) v1.push_back(n - v2[k]);
        }
        reverse(v1.begin(), v1.end());
        cout << v1.size() << endl;
     
        REP(l,0,v1.size() - 1) cout << v1[l] << " ";
        cout << "\n";
    }
}
