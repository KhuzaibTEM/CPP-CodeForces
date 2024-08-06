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
        ll size, num = 0, firstc = 0, secondc = 0, index = 0;
        bool flag = true;
        cin >> size;

        vector<ll> v(size);
        REP(j,0,size - 1) cin >> v[j];

        REP(k,0,size - 1) {
            if (v[k] % 2 == 1 && v[k] > firstc) firstc = v[k];
            if (v[k] % 2 == 0 && v[k] > secondc) secondc = v[k];
        }

        REP(l,1,size - 1) {
            if (v[l] % 2 != v[0] % 2) {
                flag = false;
                break;
            }
        }

        if (flag) cout << 0 << endl;
        else {
            sort(v.begin(), v.end());
            REP(m,0,size - 1) {
                if (v[m] % 2 == 0 && v[m] < firstc) {
                    num++;
                    v[m] = v[m] + firstc;
                    firstc = max(firstc, v[m]);
                }
            }
            flag = true;
            REP(n,1,size - 1) {
                if (v[n] % 2 != v[0] % 2) {
                    flag = false;
                    break;
                }
            }
            if (flag) cout << num << endl;
            else {
                REP(o,0,size - 1) {
                    if (v[o] % 2 == 1 && v[o] == firstc) {
                        index = o;
                        break;
                    }
                }
                v[index] = firstc + secondc;
                num++;

                REP(p,0, size - 1) {
                    if (v[p] % 2 == 0) num++;
                }
                cout << num << endl;
            }
        }
    }
}
