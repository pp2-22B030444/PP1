#include <iostream>
using namespace std;
int main(){
    int n,x;
    cin >> n;
for (int i=1; i<=n; i++){
    for (int j=1; j<=n; j++){
      if(i+j==n+1){
        cout << i;
      }
      else
        cout << "." ;
    }
    cout << endl;
}

}