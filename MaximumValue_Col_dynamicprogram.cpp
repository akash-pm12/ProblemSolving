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
	for(int i=1;i<c;i++){
		int h=ar[0][i-1],sh=ar[1][i-1],hi=0;
		for(int k=0;k<r;k++){
			if(ar[k][i-1]>h){
				sh=h;
				h=ar[k][i-1];
				hi=k;
			}
			else if(ar[k][i-1]<h && ar[k][i-1]>sh){
				sh=ar[k][i-1];
			}
		}
		for(int j=0;j<r;j++){
			ar[j][i]+=(hi==j)?sh:h;
		}
	}
	int h=-9999;
	for(int i=0;i<r;i++){
		if(ar[i][c-1]>h)
		h=ar[i][c-1];
	}
	cout<<"The Maximum value: "<<h;
	return 0;
}
