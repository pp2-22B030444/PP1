#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
int n;
cin >>n;
int a[n][n];

for (int i=1;i<=n;i++){
    for (int j=1;j<=n;j++){
        cin>> a[i][j];
    }}
for (int i=1;i<=n;i++){
    for (int j=n;j>=1;j--){
    cout <<a[i][j]<<" ";    }
    cout <<endl;}}