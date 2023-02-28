#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;


int length(char input[]){
    int count=0;
    for(int i = 0; input[i] ; i++)

    {
        count++;
       
    }
    cout<<count;
    
}
int main(){
    char ai[100];
    cin>>ai;
    length(ai);


    return 0;
}