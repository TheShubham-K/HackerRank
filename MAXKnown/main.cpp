#include <iostream>
#include<cmath>
#include <cstdio>
#include <vector>
#include<algorithm>

using namespace std;

int acmIcpc(string &str1, string &str2, int length){
    int topicKnown = 0;
    for(int i =0;i<length;i++){
        if(str1.at(i) == '1' or str2.at(i) == '1'){
            topicKnown += 1;
        }
    }
    return topicKnown;
}

int main()
{
    string str[500] = {};
    int N, M;
    cin>>N>>M;
    for(int i = 0;i<N;i++){
        cin>>str[i];
    }
    int maxKnown = 0, teamCnt=0;
    for(int i = 0;i<N-1;i++){
        for(int j = i +1;j<N;j++){
            int KnownForThisCombo = acmIcpc(str[1], str[j], M);
            if(KnownForThisCombo > maxKnown){
                maxKnown = KnownForThisCombo;
                teamCnt = 1;
            }else if(KnownForThisCombo == maxKnown){
                teamCnt += 1;
            }
        }
    }
    cout << maxKnown << endl;
    cout <<teamCnt << endl;
    return 0;
}
