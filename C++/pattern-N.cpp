#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size: ";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j==i || j==0 || j==n-1){
				cout<<'*';
			}
			else{
				cout<<' ';
			}
		}
		cout<<"\n";
	}
}
