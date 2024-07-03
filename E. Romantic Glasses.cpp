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
        ll total1 = 0, total2 = 0,size,temp,sum = 0;
        bool flag = false;
        map<ll,ll> m;
        m[0] = 1;
        cin >> size;
        ll arr[size];
        REP(j,0,size - 1) {
            cin >> temp;
            if (j % 2 == 0) arr[j] = temp;
            else arr[j] = -temp;
            
            sum += arr[j];
            m[sum]++;
            if (m[sum] >= 2) flag = true;
 
        }
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
