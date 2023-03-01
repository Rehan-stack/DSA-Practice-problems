#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int bubble_sort(int a[],int n){
    for (int i=1; i<=n-1; i++)
    {
        for (int j = 0; j < n-2; j++)
        {
            if (a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
            
        }
        
    }
    
}



int main()
{

    int a[6] = {1,2,5,3,4,6};
    bubble_sort(a,6);
    for (int i = 0; i <6; i++)
    {
        cout<<a[i];
    }
    
   return 0;
};