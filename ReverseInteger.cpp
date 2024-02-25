#include <iostream>
#include <map>
using namespace std;
typedef long long ll;

const ll limit = 1e5 + 10;
map<ll, ll> a;

ll n;
ll res = 0;
ll sum = 0;

long Pow_(long a, long n){
    if(n == 0) return 1;
    if(n == 1) return a;
    long t = Pow_(a, n / 2);

    if(n % 2 == 0){
        return t * t;
    }
    
    else return t * t * a;
    }

    long reverse(long x) {
        if(-Pow_(2, 31) <= x && x <= Pow_(2, 31) - 1){

        long res = 0, len = 0;

        while(x / Pow_(10, len + 1) != 0){
            len ++;
        }
        //cout << len << endl;
        
        while(x != 0){
            long kd = x % 10;
            x /= 10;
            res = res + kd * (Pow_(10, len));
            len --;
        }
        if(-Pow_(2, 31) <= res && res <= Pow_(2, 31) - 1)
            return res;
        else return 0;
        }
        else return 0;
}

int main(){
    
    cout << reverse(123);

}
