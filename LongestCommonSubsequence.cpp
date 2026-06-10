#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s1,s2;
	cout<<"Enter string 1: ";
	cin>>s1;
	cout<<"\nEnter string 2: ";
	cin>>s2;
	int r=s1.size(),c=s2.size();
	int ar[r][c],l=0;
	for(int i=0;i<r;i++)
	ar[i][0]=0;
	for(int i=0;i<c;i++)
	ar[0][i]=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(s1[i]==s2[j]){
				if(i==0 || j==0){
					ar[i][j]=1;
				}
				else
				ar[i][j]=ar[i-1][j-1]+1;
				if(ar[i][j]>l)
				l=ar[i][j];
			}
			else{
				if(i==0 && j!=0){
					ar[i][j]=ar[i][j-1];
				}
				else if(i!=0 && j==0){
					ar[i][j]=ar[i-1][j];
				}
				else if(i==0 && j==0)
				ar[i][j]=0;
				else{
					if(ar[i][j-1]>ar[i-1][j])
					ar[i][j]=ar[i][j-1];
					else
					ar[i][j]=ar[i-1][j];
				}
				
			}
		}
	}
	cout<<"\nLongest Common Subsequence length: "<<l;
}
