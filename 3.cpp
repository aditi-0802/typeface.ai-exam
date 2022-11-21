#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;


void Nth(int num)
{
    
    int nums[7]= {0,1,2,5,6,8,9};
    vector<int> res;
    int x;
    
    while(num>0)
    {
       
        x = num % 7;
        num /=7;
        
        
        res.push_back(x);
        
    }
   
    
    long long int l = res.size();
    for(long long int i = l-1;i>=0;i--)
    {
        x = res[i];
        cout<<nums[x];
    }
    cout << endl;

}

int main()
{
    int num;
    cin >> num;
    
    Nth(num);
    return 0;
}
