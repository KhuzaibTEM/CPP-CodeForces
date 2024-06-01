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
    int x,y,z,ans;
    cin >> x >> y >> z;
    ans = 4 * sqrt((y * z) / x) + 4 * sqrt((y * x) / z) + 4 * sqrt((z * x) / y);
    cout << ans << endl;
}
