#include<iostream>
using namespace std;
int main() {
	// int a, max1=-1e9, max2=-1e9; 
	// cin>>a;
	// int c[a][a];
	// for(int i=0; i<a; i++){
	// 	for (int j=0; j<a; j++){
	// 		cin>> c[i][j];
	// 		if (c[i][j]>max1)
	// 		max1= c[i][j]; 
	// 	}
	// }
	// for (int i=0; i<a; i++){
	// 	for(int j=0; j<a; j++){
	// 		if (c[i][j]> max2 and c[i][j]!=max1) 
	// 		max2 = c[i][j]; 
	// 	}
	// }
	// if (max2==-1e9)
	
	// cout<< 0 ;
	
	// else
	// cout<< max2 << endl; 





	int a; 
	cin>> a ;
	int max_1 = -1e9; 
	int max_2 = -1e9; 
	int arr[a][a] ; 
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			cin>> arr[i][j] ; 
			if (arr[i][j]>max_1)
			max_1 = arr[i][j] ; 
		}
	}

	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			if (arr[i][j]>max_2 && arr[i][j]!=max_1)
			max_2 = arr[i][j] ; 



		}
	}
	if (max_2 == -1e9){
		cout<< 0 ; 
	}else {
		cout<< max_2 ; 
	}
	return 0; 
}
