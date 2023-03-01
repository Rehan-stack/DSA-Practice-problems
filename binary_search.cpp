#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int binary_search(int a[],int n,int key){
    int mid,start,end;

    start =0;
    end = n-1;

    mid = (start+ end)/2;

    if(mid == key){
        return -1;
    }else{
        return 1;
    }
    if (mid>key)
    {
        end = mid-1;
        for (int i = 0; i < end; i++)
        {
            if(a[i]==key){
                cout<<a[i];
            }

        }     
        return -1;
    }else{
        return 1;
    }
    if (mid<key)
    {
        start = mid+1;
        for (int i = start; i < end; i++)
        {
            if(a[i]==key){
                cout<<a[i];
            }
        }
        return -1;
    }else{
        return 1;
    }
}

int main()
{

     int a[6] = {1,2,5,3,4,6};
  int pos = binary_search(a,6,10);
  if(pos==-1){
    cout<<"number found"<<endl;

  }else if (pos==1)
 
  {
    cout<<"not found"<<endl;
  }

   return 0;
};