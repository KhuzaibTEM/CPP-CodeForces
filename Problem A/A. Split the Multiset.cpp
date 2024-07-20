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
        ll n,k,count = 0;
        cin >> n >> k;
        priority_queue<ll> p;
        p.push(n);
        while (!p.empty()) {
            ll temp = p.top();
            ll min_val = min(k, temp);

            p.pop();

            if (temp == 1) continue;
            count++;

            REP(j,0,min_val) p.push(1);
            p.push(temp - (min_val - 1));
        }
        cout << count << endl;
    }
}
