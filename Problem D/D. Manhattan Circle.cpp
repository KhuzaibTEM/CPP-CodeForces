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



int solve() {
    return 0;
}

int main() {
    int lim;
    cin >> lim;
    REP(i,1,lim) {
        ll n, m, size = 0;
        str value;
        vector<tuple<ll,ll>> v;

        cin >> n >> m;  
        REP(j,0,n - 1) {
            cin >> value;
            REP(k,0,m - 1) {
                
                if (value[k] == '#') {
                    v.push_back(make_tuple(j + 1,k + 1));
                    size++;
                }
            }
        }
        cout << get<0>(v[size / 2]) << " " << get<1>(v[0]) << endl;
    }
}
