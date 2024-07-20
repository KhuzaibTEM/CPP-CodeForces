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
        ll n,m,count1 = 0,counter = 0,prev1 = 0;
        char temp;
        str check = "";
        cin >> n >> m;
        vector<char> v;
        vector<ll> count2(m);
        REP(j,0,n - 1) {
            REP(k,0,m - 1) {
                cin >> temp;
                if (k > 0 && (j == 0 || j == n - 1)) {
                    if (v[counter - 1] == temp) {
                        if (k == 1) count1++;
                        count1++;
                    }
                }
                if (j > 0 && (k == 0 || k == m - 1)) {
                    if (v[counter - m * j] == temp) {
                        if (j == 1) count2[k]++;
                        count2[k]++;
                    }
                }
                v.push_back(temp);
                counter++;
                if (count2[k] == n) check += temp;
            }
            if (count1 - prev1 == m) check += temp;
            prev1 = count1;
        }
        if (v[0] == v[n * m - 1] || v[m - 1] == v[n * m - m]) cout << "YES" << endl;
        elif (count1 == n * m) cout << "NO" << endl;
        elif (n == 1 || m == 1) cout << "NO" << endl;
        elif (check.size() > 1) {
            REP(l,0,check.size() - 1) {
                if (check[0] != check[l]) {
                    cout << "NO" << endl;
                    break;
                }
            }
        }
        else cout << "YES" << endl;
    } 
}
