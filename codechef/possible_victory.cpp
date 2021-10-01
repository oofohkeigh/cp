#include <bits/stdc++.h>

using namespace std;
 
 
int main(){
    int r, o, c;
    cin>>r>>o>>c;

    if(r-c == (20-o)*36)   cout<<"NO";
    else if(r-c < (20-o)*36)   cout<<"YES";
    else    cout<<"NO";
 cout << endl;
    return 0;
}
