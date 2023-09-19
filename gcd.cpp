#include <iostream>
using namespace std;
int main(){
int num1,num2,gcd,i,temp;
cout<<"enter num1,num2"<<endl;
cin>>num1>>num2;
for(int i=1;i<=num1;i++)
if(num1%i==0&&num2%i==0)
gcd=i;
cout<<"gcd is"<<gcd<<endl;
return 0;
}
