#include <iostream>
using namespace std;
int main(){
int n=10,temp,i;
int arr[10]={0,1,2,3,4,5,6,7,8,9};
for(i=0;i<=9/2;i++){
temp=arr[i];
arr[i]=arr[n-i-1];
arr[n-i-1]=temp;
}
for(i=0;i<=9;i++){
cout<<arr[i]<<endl;
}
return 0;
}
