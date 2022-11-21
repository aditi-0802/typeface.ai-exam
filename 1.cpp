#include<iostream>
using namespace std;
void convertToBase(int x)
{
    if(x==0)
    {
        return;
    }
    int d=x%3;
    x=x/3;
    if(d<0)
    {
        x+=1;
    }
    convertToBase(x);
    if(d<0)
    {
        cout<<"d+(3*-1)";
    }
    else{
        cout<<d;
    }


}
int main()
{
    int n;
    cin>>n;

    if(n==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        convertToBase(n);
    }
    return 0;
}
