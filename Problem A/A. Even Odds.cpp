#include <bits/stdc++.h>
using namespace std;

#define REP(i,a,b) for (int i = a; i <= b; i++)
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



int solve(){
    return 0;
}

int main(){
    ld k,n;
    ll ans;
    cin >> k >> n;

    if (ll(k) % 2 == 0) {
        if (n > k / 2) ans = (n - k/2) * 2;
        else ans = (2 * n - 1);
    }
    else {
        if (n > round(k / 2)) ans = (n - round(k / 2)) * 2;
        else ans = (2 * n - 1);
    }
    cout << ans << endl;
}
