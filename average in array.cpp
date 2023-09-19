#include <iostream>
using namespace std;
int main(){
int num[5];
int sum=0,average,i;
cout<<"enter num"<<endl;
for(i=0;i<=4;i++){
cin>>num[i];
}
for(i=0;i<=4;i++){
sum=sum+num[i];
}
average=sum/5;
cout<<sum<<endl;
cout<<average<<endl; 
return 0;
}
