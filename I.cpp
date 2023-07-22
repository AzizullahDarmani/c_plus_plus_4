
#include<bits/stdc++.h>

using namespace std;
int main(){
	// int a,b,done; 
	// cin>>a>>b; 
	// int c[a][b]; 
	// for(int i=0; i<a; i++){
	// 	for(int j=0; j<b; j++){
	// 		cin>> c[i][j]; 
	// 		done = sqrt(c[i][j]);
	// 		if (done*done==c[i][j]) 
	// 		c[i][j]= sqrt(c[i][j]); 
			
	// 	}
	// }
	// for(int i=0; i<a; i++){
	// 	for(int j=0; j<b; j++){
	// 		cout<< c[i][j]<< " "; 
			
	// 	}
	// 	cout<< endl; 
	// }

	// int a,b,done ; 
	// cin>> a >> b; 
	// int arr[a][b] ; 
	// for(int i=0; i<a; i++){
	// 	for(int j=0; j<b; j++){
	// 		cin>> arr[i][j] ; 
	// 		done = sqrt(arr[i][j]) ;
	// 		if (done*done == arr[i][j])
	// 		arr[i][j] = done; 
	// 	}
	// }
	// for(int i=0; i<a; i++){
	// 	for(int j=0; j<b; j++){
	// 		cout<< arr[i][j] << " " ; 
	// 	}
	// 	cout<< endl ;
	// }
	 


	int a, b , sqr; 
	cin>> a >> b; 
	int arr[a][b];
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			cin>> arr[i][j] ; 
			sqr = sqrt(arr[i][j]) ; 
			if (sqr*sqr == arr[i][j])
			arr[i][j] = sqr ; 
		}
	}
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			cout << arr[i][j] << " " ; 
		}
		cout<< endl; 
	}





}
