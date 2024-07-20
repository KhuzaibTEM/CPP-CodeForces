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
        ll m,n,temp;
        cin >> n >> m;
        vector<vector<ll>> v(n, vector<ll>(m));
        REP(j,0,n - 1) {
            REP(k, 0, m - 1) cin >> v[j][k];
        }

        if (n == 1 && m == 1) cout << -1 << endl;
        
        else {
            vector<ll> v_check;
            bool flag = true;
            vector<vector<ll>> v2(n, vector<ll>(m));
            ll index = 0;

            REP(k,0,n - 1) {
                REP(l,0,m - 1) v_check.push_back(v[k][l]);
            }
            rotate(v_check.begin(), v_check.begin() + 1, v_check.end());

            REP(o,0,n - 1) {
                REP(p,0,m - 1) v2[o][p] = v_check[index++];
            }
            REP(q,0,n - 1) {
                REP(r,0,m - 1) {
                    if (v[q][r] == v2[q][r]) {
                        flag = false;
                        break;
                    }
                }
            }
            if (!flag) cout << -1 << endl;
            else {
                REP(j,0,n - 1) {
                    REP(q,0,m - 1) cout << v2[j][q] << " ";
                    cout << "\n";
                }
            }
        }
    }
}
