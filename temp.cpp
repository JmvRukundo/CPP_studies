#include <iostream>
using namespace std;
int main() {
int arr[5]={1,2,3,4,5},num,temp;
int i,n;
for(i=1;i<=num;i++){
temp=arr[i];
arr[i]=arr[i];
arr[i]=temp;
}
cout<<arr[i]<<endl;
return 0;
}
