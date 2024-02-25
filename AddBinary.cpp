#include <iostream>
#include <map>
using namespace std;
typedef long long ll;

const ll limit = 1e5 + 10;
map<ll, ll> a;

ll n;
ll res = 0;
ll sum = 0;


string addBinary(string a, string b){
    while(a.length() < b.length()){
        a = '0' + a;
    }
    while(a.length() > b.length()){
        b = '0' + b;
    }
    long remaining = 0, temp = 0;
    string res = "";
    for(long i = a.length() - 1; i >= 0; i--){
        
        temp = int(a[i] - 48) + int(b[i] - 48) + remaining;
        //cout << remaining << endl;
        remaining = temp / 2;
        temp = temp % 2;
        res = char(temp + 48) + res;
    }
    if(remaining == 1){
        res = '1' + res;
    }
    //cout << endl << a << endl << b << endl;
    return res;
}

int main(){
    
    cout << addBinary("1010", "1011");

}
