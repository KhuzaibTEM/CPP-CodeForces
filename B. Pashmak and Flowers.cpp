#include <bits/stdc++.h>
using namespace std;

#define REP(i,a,b) for (int i = a; i <= b; i++)
#define REV(i,a,b) for (int i = a; i >= b; i--)
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
    ll n,temp,max = 0,min = 1000000000;
    multiset<ll> s;

    cin >> n;
    REP(i,0,n - 1) {
        cin >> temp;
        if (max < temp) max = temp;
        if (min > temp) min = temp;
        s.insert(temp);
    }
    if (s.size() == s.count(max)) {
        ll total = 0;
        REP(j,1,n - 1) {
            total += (s.count(max) - j);
        }
        cout << max - min << " " << total << endl;
    }
    else cout << max - min << " " << s.count(min) * s.count(max) << endl;
}
