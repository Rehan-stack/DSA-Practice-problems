#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 

 int length(char input[]){
   int count = 0;
   for (int i = 0; input[i]!='\0'; i++)
   {
      count++;
   }
   cout<<count;
   
 }
int main()
{
    char name[100];
    cin.getline(name,100);
    cout<<name<<endl;
    length(name);




   return 0;
};