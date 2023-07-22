#include<iostream>
#include<cmath>
using namespace std; 
int main() {
// 	int a,b,m=0; 
// 	cin>> a>>b; 
// 	int c[a][b];
// 	for(int i=0; i<a; i++){
// 		for(int j=0; j<b; j++){
// 			cin>> c[i][j];  
// 		}
// 	}
// 	for(int i=0; i<a; i++){
// 		m=0;
// 		for(int j=0; j<b; j++){
// 			m+=c[i][j];
// 		}
// 		cout<< "The sum of row number "<< i+1<<" is "<< m<< endl; 
// 	}
// 	for (int i=0; i<b; i++){
// 		m=0; 
// 		for(int j=0; j<a; j++){
// 			m+= c[j][i]; 
// 		}
// 		cout<< "The sum of column number "<< i+1<< " is "<< m<< endl; 
// 	}





// int a, b ;
// 	cin>> a >> b; 
// 	int m=0; 
// 	int arr[a][b];
// 	for(int i=0; i<a; i++){
// 		for(int j=0; j<b; j++){
// 			cin>> arr[i][j] ;
// 		}
// 	}
// 	for(int i=0; i<a; i++){
// 		m = 0; 
// 		for(int j=0; j<b; j++){
// 			m+=arr[i][j]; 
// 		}
// 		cout<< "the sum of row number "<< i+1 << " is "<< m << endl ; 
// 	}
// 	for(int i=0; i<b; i++){
// 		m=0; 
// 		for(int j=0; j<a; j++){
// 			m+=arr[j][i]; 
// 		}
// 		cout<< "the sum of column number "<< i+1 << " is "<< m << endl ; 
// 	}

// 	return 0  ; 




	int a,b; 
	cin>> a >> b; 
	int cnt = 0; 
	int arr[a][b] ; 
	for(int i=0; i<a; i++){
		for(int j=0; j<b ; j++){
			cin>> arr[i][j] ; 
		}
	}
	for(int i=0; i<a; i++){
		cnt = 0; 
		for(int j=0; j<b; j++){
			cnt+= arr[i][j] ; 
		}
		cout<< "the sum of row number "<< i+1 << " is "<< cnt << endl ; 
	}
	for(int i=0; i<b ;i++){
		cnt=0; 
		for(int j=0; j<a; j++){
			cnt+= arr[j][i] ; 
		}
		cout<< "the sume of colum number " << i+1 << " is "<< cnt<< endl ; 
	}
	return 0; 




}
