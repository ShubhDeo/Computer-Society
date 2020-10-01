#include<bits/stdc++.h>
using namespace std;

long long checkEven(long long n) { //It checks whether the number is even or not.
    return (!(n&1));
}

int main() {
    long long n;
    cin>>n;
    long long ans = checkEven(n);
    string output = ans ? "EVEN" : "ODD";
    cout<<"N = "<<n<<endl;
    cout<<"Output = "<<output;
}
