#include<bits/stdc++.h>
using namespace std;
int main(){
	// int a,b; 
	// cin>>a>>b; 
	// int c[a][b];
	// for(int i=0; i<a; i++){
	// 	for(int j=0; j<b; j++){
	// 		cin>> c[i][j]; 
	// 		if ((i+j)%2==0)
	// 			c[i][j]+=1;
	// 		else
	// 			c[i][j]-=1;
	// 		}
	// 		}
	// for(int i=0; i<a; i++){
	// 	for(int j=0; j<b; j++){
	// 		cout<< c[i][j] << " "; 
	// 	}
	// 	cout<< endl; 
	// }
			


int a, b ;
	cin>> a >> b; 
	int arr[a][b];
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			cin>> arr[i][j] ; 
			if ((i+j)%2==0){
				arr[i][j]+=1; 
			}else {
				arr[i][j]-=1; 
			}
		}
	}
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			cout << arr[i][j] << " " ; 
		}
		cout<< endl; 
	}







	}
	

