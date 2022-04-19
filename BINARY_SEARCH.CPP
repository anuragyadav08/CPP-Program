

#include <iostream>

using namespace std;

int main()
{
  int arr[]={12,13,34,56,58,67,68,82,86,95};
  int key,l,r,mid;
  l=0;
  r=(sizeof(arr)/sizeof(int))-1;
  cout<<"Enter Elements To Search : ";
  cin>>key;
  while(l<=r)
  {
    mid=(l+r)/2;
    if(arr[mid]==key)
    {
        cout<<"Found At Position : "<<mid+1;
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
  

    return 0;
}
