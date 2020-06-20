#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long count = 0;
    if(n>s.size())
    {
        long num_sub_str = n / s.size();
        long remaining_str_len = n % s.size();

        long i = 0;
        while(i<s.size())
        {
            if(s[i] == 'a')
            {
                count++;
            }
            i++;
        }
        count = count * num_sub_str;

        i = 0;
        while(i < remaining_str_len)
        {
            if(s[i] == 'a')
            {
                count++;
            }
            i++;
        }
    }
    else{
        long i = 0;
        while(i<n){
            if(s[i]=='a')
            {
                count++;
            }
            i++;
        }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
