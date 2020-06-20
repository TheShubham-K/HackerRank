#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m,p,q;
    cin>>n;
    vector<int> s;
    int a;
    for(int i = 0;i<n;i++){
        cin>>a;
        s.push_back(a);
    }
    cin>>m;
    cin>>p>>q;
    s.erase(s.begin()+(m-1));
    s.erase(s.begin()+(p-1), s.begin()+(q-1));
    int len = s.size();
    cout<<len<<endl;
   for(int i = 0;i<s.size();i++){
       cout<<s[i]<<" ";
   }
    return 0;
}
