

#include <iostream>

using namespace std;

void binary( int arr[],int key,int l,int r)
{
    int mid;
     while(l<=r)
  {
    mid=(l+r)/2;
    if(arr[mid]==key)
    {
        cout<<"Element Found At Position : "<<mid+1;
        break;
    }
    else if(arr[mid]<key)
    {
        l=mid+1;
    }
    else
    {
        r=mid-1;
    }
  }
  if(l>r)
  {
      cout<<"Element Not Found";
  }
  
}
int main()
{
  int arr[]={12,13,34,56,58,67,68,82,86,95};
  int key,l,r;
  l=0;
  r=(sizeof(arr)/sizeof(int))-1;
  cout<<"Enter Elements To Search : ";
  cin>>key;
 
  binary(arr,key,l,r);
    return 0;
}
