#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ,sum=0 , x;
    cin >> n;
    set <int> a;
    set <int> :: iterator it;
    for(int i=0;i<n;i++){
        cin >> x;
        a.insert(x);}
    for(it=a.begin(); it!=a.end(); it++){
        sum+=*it;
    }
    cout <<sum;}