#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
bool is_sorted(int a[],int n){
    if(n==0 || n==1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }

    bool small_sorted = is_sorted(a+1,n-1);

    return small_sorted;
}


int main()
{

int a[] = {1,2,3,4,9,6,7};

if(is_sorted(a,6)){
    cout<<"sorted"<<endl;
}
else{
    cout<<"un sorted"<<endl;
}
   return 0;
};