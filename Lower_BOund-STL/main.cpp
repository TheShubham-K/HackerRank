#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, m;
    cin>>N;
    vector<int> S;
    int a;
    for(int i = 0;i<N;i++){
        cin>>a;
        S.push_back(a);
    }
    cin>>m;
    for(int i =0 ;i<m;i++){
        int s;
        cin>>s;
        auto low = lower_bound(S.begin(), S.end(), s);
        int index = (low -S.begin());
        // cout<<index<<endl;
        if(s == S[index]){
            cout<<"Yes "<<index+1<<"\n";
        }else{
            cout<<"No "<<index+1<<"\n";
        }
    }
    return 0;
}
