#include <iostream>
using namespace std;
int main() {
int arr[10];
int i;
cout<<"enter numbers"<<endl;
for(i=0;i<=9;i++){
cin>>arr[i];
}
for(i=1;i<=9;i++){
if(arr[0]<arr[i]){
arr[0] = arr[i];
}
}
cout<<"the largest is"<<arr[0]<<endl;

	return 0;
}
