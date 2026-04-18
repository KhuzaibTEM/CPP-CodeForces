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

 
int main(){
    int lim; 
    cin >> lim;
    REP(i, 1, lim) {
        int size;
        bool dup = false;
        cin >> size;

        vector<ll> v(size);
        REP(i, 0, size - 1) {
            cin >> v[i];
            if (i != 0) {
                REP(j, 0, i - 1) {
                    if (v[i] == v[j]) {
                        dup = true;
                        break;
                    }
                }
            }
        }
        if (!dup) {
            sort(v.begin(),v.end());
            if (size > 1) {
                reverse(v.begin(),v.end());
                REP(i, 0, size - 1) cout << v[i] << " ";
                cout << endl;
            }
            else cout << v[0] << endl;
        }
        else cout << -1 << endl;
    }
}
