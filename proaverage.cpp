#include <iostream>
using namespace std;
int main () {
int num1,num2,num3,sum,average,product;
cout<<"enter num1"<<endl;
cin>>num1;
cout<<"enter num2"<<endl;
cin>>num2;
cout<<"enter num3"<<endl;
cin>>num3;
sum=num1+num2+num3;
product=num1*num2*num3;
average=sum/3;
cout<<"sum is"<<sum<<endl;
cout<<"product is"<<product<<endl;
cout<<"average is"<<average<<endl;
return 0;
}
