#include <iostream>
#include <map>
using namespace std;
typedef long long ll;

const ll limit = 1e5 + 10;
map<ll, ll> a;

ll n;
ll res = 0;
ll sum = 0;


int mySqrt(int x){
    ll first  = 0, second = x, mid = (first + second) / 2;
    ll res = 0;
    while(first <= second){
        mid = (first + second) / 2;
        if(mid * mid <= x){
            res = mid;
            first = mid + 1;
        }
        else if(mid * mid > x){
            second = mid - 1;
        }
    }
    return res;
}

int main(){
    cin >> n;
    
    cout << mySqrt(n);
}
