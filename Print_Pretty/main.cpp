#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */
        int len=0;
        double AA=A;
        while(AA>1){
            len+=1;
            AA/=16;
        }
        len+=2;
        int length=0;
        double BB = B;
        if(B<0)
            BB=B*(-1);
        while(BB>1){
            length+=1;
            BB/=10;
        }
        length=15-length-3;
        cout<<showbase;
        cout<<hex<<nouppercase<<setw(len)<<(long long int)A <<endl;
        cout.unsetf ( std::ios::floatfield );
        cout<< fixed <<  setprecision(2);
        cout << showbase // show the 0x prefix
        << internal // fill between the prefix and the number
        << setfill('_'); // fill with 0s
        if(B>0){
            cout<<setw(length)<<"+"<<B<<endl;
        }else{
            cout<<setw(length)<<"-"<<(-1)*B<<endl;
        }
        cout.precision(9);
        cout<<scientific<<uppercase<<C<<endl;


	}
	return 0;

}
