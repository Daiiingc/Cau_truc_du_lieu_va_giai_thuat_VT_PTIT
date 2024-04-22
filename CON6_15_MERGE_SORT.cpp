#include<iostream>
#include<vector>
using namespace std;
void merge(int a[],int l,int m,int r){
	vector<int> x(a+l, a+m+1);
	vector<int> y(a+m+1,a+r+1);
	int i=0,j=0;
	while(l<=r){
		 if(i>=x.size()){
			a[l]=y[j];
			j++; 
		}
		else if(j>=y.size()){
		a[l]=x[i];
			i++; 
	} 
		else if(x[i]<=y[j]){
			a[l]=x[i];
			i++; 
		}else if(x[i]>y[j]){
			a[l]=y[j];
			j++; 
		} 
        

		                                             
		l++;
		 
	} 
	
} 
void mergesort(int a[],int l,int r){
	if(l>=r) return;
	int m=(l+r)/2;
	mergesort(a,l,m);
	mergesort(a,m+1,r);
	merge(a,l,m,r); 
} 

int main(){
	int t; cin >> t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int &x:a)cin>>x;
        mergesort(a,0,n-1);
        for(int &x:a)cout<<x<<" ";
        cout<<"\n";
    }
}