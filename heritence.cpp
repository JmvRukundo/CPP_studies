#include <iostream>
using namespace std;
class Result{
protected:
int num1,num2;
public:
void getdata(){
cout<<"enter num1,num2"<<endl;
cin>>num1>>num2;
}
};
class Swap:public Result{
int temp;
public:
void data(){
temp=num1;
num1=num2;
num2=temp;
cout<<num1<<num2<<endl;
}
};
class Multipliction:public Result{
int product;
public:
void value(){
cout<<"enter num1,num2"<<endl;
cin>>num1>>num2;
product=num1*num2;
cout<<product;
}
};
int main() {
Swap res;
res.getdata();
res.data();
Multipliction pro;
pro.value();
	return 0;
}
