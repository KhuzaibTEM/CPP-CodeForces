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
        ll size,total1 = 0,total2 = 0,count_neg = 0,count1 = 0,temp,temp2;
        vector<ll> v1,v2;
        cin >> size;
        REP(j,0,size - 1) {
            cin >> temp;
            v1.push_back(temp);
        }
        REP(k,0,size - 1) {
            cin >> temp2;
            v2.push_back(temp2);
            if (temp2 == v1[k] && temp2 == 1) count1++;
            elif (temp2 == v1[k] && temp2 == -1) count_neg++;
            elif (temp2 > v1[k] && temp2 == 1) total2++;
            elif (temp2 < v1[k] && v1[k] == 1) total1++;
        }
        REP(l,0,size - 1) {
            if (total1 >= total2 && count1 > 0) {
                total2++;
                count1--;
            }
            elif (total1 < total2 && count1 > 0) {
                total1++;
                count1--;
            }
            elif (total1 >= total2 && count_neg > 0) {
                total1--;
                count_neg--;
            }
            elif (total1 < total2 && count_neg > 0) {
                total2--;
                count_neg--;
            }
            else break;
        }
        cout << min(total1,total2) << endl;
    }
}
