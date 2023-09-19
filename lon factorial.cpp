#include <iostream>
//write a c++ program to display the sum of all even numbers from 1 to 10?
using namespace std;
long factorial(long n){
if(n-1)
return n*factorial(n-1);
else
return 1;
}
int main(){
long number;
cout<<"please type a number";
cin>>number;
cout<<"number"<<"!="<<factorial(number);
return 0;
}
