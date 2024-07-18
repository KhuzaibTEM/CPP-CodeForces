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
        ll n, x, val = 0;
        cin >> n >> x;
        ll arr[n], prefix[n + 1] = {0}, arr2[n + 3] = {0};
        
        REP (j,0,n - 1) {
            cin >> arr[j];
            prefix[j + 1] = prefix[j] + arr[j];
        }

        REV (k,n - 1, 0) {
            ll total = prefix[k] + x;
            auto lb_index = lb(prefix, prefix + n + 1, total) - prefix;

            if (lb_index == n + 1) arr2[k] += (n - k);
            elif (total == prefix[lb_index]) arr2[k] += (lb_index - k) + arr2[lb_index + 1];
            else arr2[k] += (lb_index - k - 1) + arr2[lb_index];
        }
        
        REP(l,0,n + 2) val += arr2[l];  
        cout << val << endl;
    }
}
