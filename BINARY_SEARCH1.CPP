

#include <iostream>

using namespace std;

int main()
{
  int arr[100],key,l,r,mid,size;
  cout<<"Enter Size of Array :";
  cin>>size;
  //***********************Array Input********************
  int i;
  cout<<"Enter Array : ";
  for(i=0;i<size;i++)
  {
      cin>>arr[i];
  }
  //**********************Sorting Array********************
  for(i=0;i<size;i++)
  {  
      int j;
      
      for(j=i+1;j<size;j++)
      {
        if(arr[i]>arr[j])
        {
            int temp;
            
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
      }
  }
  //**********************Finding Position*****************
  l=0;
  r=size-1;
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
