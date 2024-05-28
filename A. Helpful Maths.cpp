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
    str num,ans;
    ans = "";
    cin >> num;
    sort(num.begin(),num.end());
    REP(i,0,num.length() - 1){
        str s(1, num[i]);
        if (num[i] != '+') {
        if  (i < num.length() - 1) ans += s + '+';
        else ans += s;
        }
    }
    cout << ans << endl;
}
