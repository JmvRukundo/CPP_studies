#include <iostream>
//to find sum by ousing function
using namespace std;
float circumference(int radius){
float cir=2*3.14*radius;
return cir;
}
float are(int radius){
float are=3.14*radius*radius;
return are;
}
int main(){
float radius,circumference,area;
cout<<"enter radius"<<endl;
cin>>radius;
cout<<circumference<<endl;
cout<<area<<endl;
}
