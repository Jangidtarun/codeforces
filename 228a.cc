#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n = 4;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        m[tmp]++;
    }

    cout << n - m.size() << endl;
}