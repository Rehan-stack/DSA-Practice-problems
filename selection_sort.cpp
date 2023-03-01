#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 

int selection_sort(int a[],int n){
    for (int i = 0; i <= n-1; i++)
    {
        for (int j = i+1; j <= n-2; j++)
        {
            if (a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
            
        }
        
    }    
    
}


int main()
{

    int a[6] = {1,2,5,3,4,6};
    selection_sort(a,6);
    for (int i = 0; i <6; i++)
    {
        cout<<a[i];
    }
    

   return 0;
};