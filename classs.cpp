#include <iostream>
using namespace std;
class Multiplication{
public:
int m;
int n;
public:
void getvalue(){
cout<<"enter m,n"<<endl;
cin>>m>>n;
}
void product(){
int result=m*n;
cout<<result<<endl;
}
};
int main(){
Multiplication pro;
pro.getvalue();
pro.product();
	return 0;
}
