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
        ll size;
        bool flag = false;

        cin >> size;
        vector<char> g(size);
        vector<char> h(size);
        
        REP(j,0,size - 1) cin >> g[j];
        REP(k,0,size - 1) cin >> h[k];

        REP(l,0,size - 1) {
            if (g[l] == '0' && h[l] == '1') {
                cout << "NO" << endl;
                flag = true;
                break;
            }
            if (g[l] == '0' && h[l] == '0') continue;
            else break;
        }

        if (!flag) cout << "YES" << endl;
    }
}
