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
        ll size,ans = 0;
        str word;
        multiset<char> s;
        cin >> size >> word;
        REP(j,0, word.size() - 1) s.insert(word[j]);
        if (s.count('A') >= size) ans+= size;
        elif (s.count('A') < size)  ans+= s.count('A');
        if (s.count('B') >= size) ans+= size;
        elif (s.count('B') < size) ans+= s.count('B');
        if (s.count('C') >= size) ans+= size;
        elif (s.count('C') < size)  ans+= s.count('C');
        if (s.count('D') >= size) ans+= size;
        elif (s.count('D') < size)  ans+= s.count('D');

        cout << ans << endl;
    }
}
