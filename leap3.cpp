#include <iostream>
//write and check that  a given year is leap or not 
using namespace std;
int main () {
int year;
cout<<"enter year"<<endl;
cin>>year;
year%4==0&&!year%100==0&&year%400==0? cout<<"leap year": cout<<"not leap year"<<endl;
return 0;
}
