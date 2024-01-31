#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int p = min(n,m);
    string ans;
    if(p%2){
        ans = "Akshat";
    } else{
        ans = "Malvika";
    }

    cout << ans << endl;
}