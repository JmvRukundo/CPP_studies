#include <iostream>
using namespace std;
int main(){
int a=0,b=1;
int fibonacci,i;
cout<<a<<endl;
cout<<b<<endl;
while(i<10){
fibonacci=a+b;
a=b;
b=fibonacci;
i++;
cout<<fibonacci<<endl;
}
return 0;
}
