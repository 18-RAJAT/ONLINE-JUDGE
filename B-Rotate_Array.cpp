#include<bits/stdc++.h>
using namespace std;

int main()
{
	int size;cin>>size;int arr[size];
	for(int i=0;i<size;++i){cin>>arr[i];}
	int ct;cin>>ct;
	for(int i=ct;i<size;++i){cout<<arr[i]<<" ";}
	for(int i=0;i<ct;++i){cout<<arr[i]<<" ";}
	return 0;
}