#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    int len_a,len_b, i, j;
    char c0, c1;
    string a, b, a1, b1;
    cin>>a>>b;
    len_a = a.size();
    len_b = b.size();
    cout<<len_a<<" "<<len_b<<endl;
    cout<<a+b<<endl;
    a1=a;
    b1=b;
    a1[0] = b[0];
    b1[0] = a[0];
    cout<<a1<<" "<<b1<<endl;
    return 0;
}

