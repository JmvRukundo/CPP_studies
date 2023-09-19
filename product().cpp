#include <iostream>
//to find sum by ousing function
using namespace std;
int product(int m,int n) {
int pro=m*n;
return pro;
}
int main(){
int m,n;
cout<<"enter m,n"<<endl;
cin>>m>>n;
cout<<product(m,n)<<endl;
}
