#include <bits/stdc++.h>
#include <random>
#define rep(i,n) for(int i=0; i<(n); i++)
#define lli long long int
#define lld long long double
using namespace std;

random_device rd;
mt19937 gen(rd());
 
int random(int low, int high)
{
    uniform_int_distribution<> dist(low, high);
    return dist(gen);
}


int main() { 
    int a,b;
    a = random(1,6);
    b = random(1,6);
    cout << "Rolling dice..." << endl;
    cout << "Die 1: " << a << endl;
    cout << "Die 2: " << b << endl;
    cout << "Total value: " << a+b << endl;

    if(a+b > 7) {
        cout << "You won" << endl;
    }
    else cout << "You lost" << endl;

}