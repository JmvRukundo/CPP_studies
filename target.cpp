#include <iostream>
using namespace std;
int main(){
int binarysearch,arr[10],target=7,low=1,high=10,i;
cout<<"enter binarysearch"<<endl;
cin>>binarysearch;
while(low<=high){
int mid=low+(high-low)/2;
if(arr[mid]==target)
return mid;
if(arr[mid]<target)
low=mid+1;
else
high=mid-1;
cout<<"element in index"<<binarysearch<<endl;
}
return 0;
}
