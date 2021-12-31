#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    //lcm
    int a;
    cin>>a;

    int b;
    cin>>b;

    int gcdn=__gcd(a,b);

    int lcm=(a*b)/gcdn;
    cout<<lcm<<endl;




}
