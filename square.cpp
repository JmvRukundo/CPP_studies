#include <iostream>
using namespace std;
int main() {
int rows,i,b,c;
cout<<"enter rows"<<endl;
cin>>rows;
for(i=0;i<=rows;i++){
for(b=0;b<i;b++)
cout<<'*';
cout<<endl;
}
return 0;
}
