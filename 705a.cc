#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string ans = "";
    if(n%2){
        for(int i=1;i<n;i++){
            if(i%2){
                ans += "I hate that ";
            } else{
                ans += "I love that ";
            }
        }
        ans += "I hate it";
    } else{
        for(int i=1;i<n;i++){
            if(i%2){
                ans += "I hate that ";
            } else{
                ans += "I love that ";
            }
        }
        ans += "I love it";
    }

    cout << ans << endl;
}