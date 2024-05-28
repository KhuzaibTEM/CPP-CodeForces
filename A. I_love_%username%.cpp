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
    int lim,ans,first_num,con_ser_num,max,min;
    cin >> lim;
    if (lim == 1) ans = 0;
    else{
        ans = 0;
        max = 0;
        cin >> first_num;
        min = first_num;
        REP(i,1,lim) {
            cin >> con_ser_num;
            if (con_ser_num > first_num && con_ser_num > max) {
                ans++; 
                max = con_ser_num;
            }
            elif (con_ser_num < min) {
                ans++;
                min = con_ser_num;
            }
        }
    }
    cout << ans << endl;
}
