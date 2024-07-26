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


int main(){
    int lim;
    cin >> lim;

    REP(i,1,lim) {
        ll size;
        str ans = "";
        bool flag1 = false, flag2 = false;
        cin >> size;

        vector<char> v1(size), v2(size);

        ll max_down = size - 1, min_down = 0;

        REP(j,0,size - 1) cin >> v1[j];
        REP(k,0,size - 1) cin >> v2[k];
    
		REV(l,size - 1,1){
            if(v1[l] == '1' && v2[l - 1] == '0') max_down = l - 1;
        }
			
		REP(m,0,max_down) {
            if(v2[m] == '1' && v1[m + 1] =='0') min_down = m + 1;
        }

        REP(n,0,max_down) ans += v1[n];
        REP(o,max_down,size - 1) ans += v2[o];

        cout << ans << endl;
        cout << max_down - min_down + 1 << endl;
    }
}
