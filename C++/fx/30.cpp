#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
while(cin>>s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
        else if(s[i]>='A' && s[i]<='Z'){
        s[i]+=32;
        }
    }
    cout<<s;}
    cout <<endl;

}