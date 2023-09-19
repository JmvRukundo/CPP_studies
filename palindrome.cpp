#include <iostream>
using namespace std;
int main(){
int num,rev=0,rem,temp;
cout<<"enter the number"<<endl;
cin>>num;
temp=num;
while(temp>0){
rem=temp%10;
rev=(rev*10)+rem;
temp=temp/10;
}
rev==num? cout<<"it is palindrome"<<endl:cout<<"it isn't palindrome"<<endl;
	return 0;
}
