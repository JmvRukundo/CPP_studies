#include <iostream>
using namespace std;
int main(){
int revnum,rem,num;
cout<<"enter num"<<endl;
cin>>num;
while(num!=0){
rem=num%10;
revnum=revnum*10+rem;
num=num/10;
} 
cout<<"revnum ="<<revnum<<endl;
return 0;
}
