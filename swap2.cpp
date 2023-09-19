#include <iostream>
using namespace std;
int main () {
int num1=10,num2=15,swap;
cout<<"before swapping"<<endl;
cout<<"num1="<<num1<<"num2="<<num2<<endl;
swap=num1;
num1=num2;
num2=swap;
cout<<"after swapping"<<endl;
cout<<"num1="<<num1<<"num2="<<num2<<endl;
return 0;
}
