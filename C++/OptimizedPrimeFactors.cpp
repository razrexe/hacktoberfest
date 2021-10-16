#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n;
    cout<<"Enter a number"<<endl;
	cin>>n;
	int l=0;
	for(int i=2;i*i<=n; i++){
		if(n%i==0){
			while(n%i==0){
				cout<<i<<" ";
				n=n/i;
			}
		}
		l=n;
		
	}
		if(n!=1) cout<<l<<" ";
}
