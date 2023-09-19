#include <iostream>
using namespace std;
class Calculator{
public:
int m=10;
int n=5;
};
class Division:public Calculator{
public:
void qoutient(){
int divisor;
divisor=m/n;
cout<<divisor<<endl;
}
};
class Multipliction:public Calculator{
public:
void product(){
int multiple;
multiple=m*n;
cout<<multiple<<endl;
}
};
class Addition:public Calculator{
public:
void add(){
int sum;
sum=m+n;
cout<<sum<<endl;
}
};
class Subtraction:public Calculator{
public:
void minus(){
int sub;
sub=m-n;
cout<<sub<<endl;
}
};
class Modilus:public Calculator{
public:
void remainder(){
int rem;
rem=m%n;
cout<<rem<<endl;
}
};
int main(){
Division div;
div.qoutient();
Multipliction pro;
pro.product();
Addition ad;
ad.add();
Subtraction min;
min.minus();
Modilus mod;
mod.remainder();
	return 0;
}
