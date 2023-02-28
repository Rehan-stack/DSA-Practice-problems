#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 

long long int pairwise(int a[],int n){
    int i,j;

int max1=-1;
int max2=-1;

for ( i = 0; i < n; i++)
{
    
    if((max1==-1)|| (a[i]>a[max1])){
        max1 = i;
       
    }
}

for ( j = 0; j < n; j++)
{
    
    if((j!=max1) && ((max2 ==-1)||(a[max2]<a[j]))){
        max2 = j;
        
    }
}
   return((long long)(a[max1])) * a[max2];
}


int main()
{
    int n;
    cin>>n;
    int amb[n];


    for (int i=0; i<n; i++)
    {
        
        cin>>amb[i];
    }

    cout<<pairwise(amb,n);
   
};