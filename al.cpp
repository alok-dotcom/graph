#include<iostream>
using namespace std;
int GCD(int A, int B) {
    int m = min(A, B), gcd;
    for(int i = m; i > 0; --i)
        if(A % i == 0 && B % i == 0) {
            gcd = i;
            return gcd;
        }
}
int main()
{

int x=10,y=20;
cout<<GCD(10,20);
cout<<min(10,20);
	return 0;
}
