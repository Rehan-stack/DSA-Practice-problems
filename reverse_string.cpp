#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int length(char na[]){
    int count = 0;
    for (int i = 0; na[i] !='\0'; i++)
    {
        count++;
    }
    return count;
    
}
int reverse_name(char name[]){

    int s = 0;
    int e = length(name) - 1;

    while (s < e)
    {
        swap(name[s], name[e]);
        s++;
        e--;

    };
    cout<<name;

    
} 


int main()
{
    char name[100];
    cin.getline(name,100);

    reverse_name(name);



   return 0;
};