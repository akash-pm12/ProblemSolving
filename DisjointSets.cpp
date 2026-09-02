#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int find(vector<int>& ld,int node){
	if(ld[node]!=node){
		ld[node]=find(ld,ld[node]);
	}
	return ld[node];
}
void join(vector<int> &ld,int lt,int rt){
	lt=find(ld,lt);
	rt=find(ld,rt);
	ld[rt]=lt;
}
int main(){
	int n;
	cin>>n;
	vector<int> ar(n+1);
	for(int i=0;i<=n;i++)
	ar[i]=i;
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		join(ar,a,b);
	}
	set<int> s;
	for(int i=1;i<=n;i++){
		s.insert(find(ar,i));
	}
	cout<<endl;
	for(int i=1;i<=n;i++){
		cout<<ar[i]<<" ";
	}
	cout<<"\n"<<s.size();
}
