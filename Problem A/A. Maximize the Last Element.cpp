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
        ll size, max_num = 0;
        cin >> size;

        vector<ll> v(size);
        REP(j,0,size - 1) {
            cin >> v[j];
            if (j % 2 == 0) max_num = max(max_num, v[j]);
        }
        cout << max_num << endl;

    }
}
