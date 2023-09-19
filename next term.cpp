#include <iostream>
using namespace std;
int main(){
int a=0,b=1,nextterm;
int i;
cout<<a<<endl;
cout<<b<<endl;
for(i=0;i<=10;i++){
nextterm=a+b;
a=b;
b=nextterm;
cout<<nextterm<<endl;
}
return 0;
}
