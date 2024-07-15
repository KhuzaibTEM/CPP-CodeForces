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
        ll n,count0 = 0,count1 = 0;
        str a;
        cin >> n >> a;

        vector<ll> v1;
        char temp = '1';
        REP(j,0,n - 1) {
            if (a[j] == '1') v1.push_back(1);
            if (a[j] == '0' && temp == '1') v1.push_back(0);
            temp = a[j];
        }
        ll v_size = v1.size() - 1;
        REP(k,0,v_size) {
            if (v1[k] == 1) count1++;
            else count0++;
        }
        if (count0 >= count1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
