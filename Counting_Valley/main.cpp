#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int v = 0;    // # of valleys
    int lvl = 0;  // # current level

    for(int i = 0;i<n;i++){
        if(s[i] == 'U'){
            ++lvl;
        }
        else if(s[i] == 'D'){
            --lvl;
        }
        // if we just came UP to sea level
        if(lvl == 0 && s[i] == 'U')
            ++v;
    }
    return v;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
