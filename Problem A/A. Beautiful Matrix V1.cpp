#include <bits/stdc++.h>
using namespace std;
 
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define elif else if
// #define or ||
// #define and &&
 
typedef string str;
typedef long long ll;
typedef vector<int> vti;
typedef vector<str> vts;
 
 
int main(){
    int in1;
    int count = 1;
    REP(i,1,5){
        REP(j,1,5){
            cin >> in1;
            if (in1 == 1){
                if (count == 1 || count == 5 || count == 21 || count == 25){
                    cout << 4 << endl;
                }
                elif (count == 2 || count == 4 || count == 6 || count == 10 || count == 16 || count == 20 || count == 22 || count == 24){
                    cout << 3 << endl;
                }
                elif (count == 3 || count == 7 || count == 9 || count == 11 || count == 15 || count == 17 || count == 19 || count == 23){
                    cout << 2 << endl;
                }
                elif (count == 8 || count == 12 || count == 14 || count == 18){
                    cout << 1 << endl;
                }
                else{
                    cout << 0 << endl;
                }
            }
            else {
                count++;
            }
        }
        
    }
    
}
