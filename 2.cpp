#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=0,n=0,count=0;
    vector<char> str1,str2;
    char c;
    int i=0;
    cout<<"enter string 1"<<endl;
    c = cin.get();
    while(c == ' ' or c!='\n')
    {
     
     str1.push_back(c);
     c= cin.get();
     m++;
     if(c == '\n')
     break;
    }
   
    
    i=0;
    cout<<"enter string 2"<<endl;
    c = cin.get();
    while(c == ' ' or c!='\n')
    {
     str2.push_back(c);
     c = cin.get();
     n++;
     if(c == '\n')
     break;
    }
   //cout << m << " "<< n << endl;
    c = str2[n-1];
    for(i=0;i<m;i++)
    {
        if(str1[i]==c)
        count++;
    }
    cout<<count<<endl;
    return 0;
}
