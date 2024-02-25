#include <iostream>
#include <map>
using namespace std;
typedef long long ll;

const ll limit = 1e5 + 10;
map<ll, ll> a;

ll n;
ll res = 0;
ll sum = 0;

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++) 
        cin >> a[i];

    for(int i = 1; i <= n; i++)
        cout << a[i] << " ";

    cout << endl;

    for(int i = 1; i <= n; i++)
        cout << rand() % 100 << " ";

    for(int i = 1; i <= n; i++){
        sum += a[i];
    }
    cout << endl;
    cout << sum;
}
