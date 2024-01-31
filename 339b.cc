#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[m];
    for(int i=0;i<m;i++){
        cin >> a[i];
    }
    long long ans = a[0] - 1;
    for(int i=1;i<m;i++){
        if(a[i] < a[i-1]){
            ans += n + a[i] - a[i-1];
        } else{
            ans += a[i] - a[i-1];
        }
    }

    cout << ans << endl;
}