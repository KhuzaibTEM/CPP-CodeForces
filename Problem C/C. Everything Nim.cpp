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

    REP(i,0,lim - 1) {
        ll size,val = 1,max_val = 1;
        cin >> size;


        vector<ll> v(size);
        REP(j,0,size - 1) {
            cin >> v[j];
            max_val = max(max_val, v[j]);
        }

        sort(v.begin(),v.end());
        
        REP(k,0,size - 1) {
            if (val == v[k]) val++;
        }
        if (val > max_val) {
            if (max_val % 2 == 1) cout << "Alice" << endl;
            else cout << "Bob" << endl;
        }
        else {
            if (val % 2 == 1) cout << "Alice" << endl;
            else cout << "Bob" << endl;
        }
    }
}
