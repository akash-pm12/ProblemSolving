#include <iostream>
using namespace std;
int main(){
	int r,c;
	cout<<"Enter number of rows: ";
	cin>>r;
	cout<<"\nEnter number of columns: ";
	cin>>c;
	int ar[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>ar[i][j];
		}
	}
	for(int i=1;i<r;i++){
		int h=ar[i-1][0],sh=ar[i-1][1],hi=0;
		for(int k=0;k<c;k++){
			if(ar[i-1][k]>h){
				sh=h;
				h=ar[i-1][k];
				hi=k;
			}
			else if(ar[i-1][k]<h && ar[i-1][k]>sh){
				sh=ar[i-1][k];
			}
		}
		for(int j=0;j<c;j++){
			ar[i][j]+=(hi==j)?sh:h;
		}
	}
	int h=-9999;
	for(int i=0;i<c;i++){
		if(ar[r-1][i]>h)
		h=ar[r-1][i];
	}
	cout<<"The Maximum value: "<<h;
	return 0;
}
