#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int x,y;
        cin>>x>>y;
        if(x%6==0){
            cout<<(x/6)*x<<endl;
        }else{
            cout<<((x/6)+1)*x<<endl;
        }
    }
    return 0;

}
