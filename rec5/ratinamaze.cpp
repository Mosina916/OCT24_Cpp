#include <iostream>
using namespace std;
bool checkrakhsaktehai(int sol[100][100],int i,int j,int n){
	// vertical
	for(int k=i-1;k>=0;k--){
		if(sol[k][j]==1){
			return false;
		}
	}

	// right dia
	int u=i-1;//2
	int v=j+1;//3
	while(u>=0 and v<n){
	if(sol[u][v]==1){
			return false;
		}
		u--;
		v++;
	}
	// left
	int x=i-1;//2
	int y=j-1;//3
	while(x>=0 and y>=0){
	if(sol[x][y]==1){
			return false;
		}
		x--;
		y--;
	}


	return true;


}
bool nqueen(int sol[100][100],int i,int n){
	// base  case
	if(i==n){
		for(int l=0;l<n;l++){
			for(int k=0;k<n;k++){
				cout<<sol[l][k]<<" ";
			}
			cout<<endl;
		}
		// return true;
		return false;
	}


	// rec case
	for(int j=0;j<n;j++){
		if(checkrakhsaktehai(sol,i,j,n)){
			sol[i][j]=1;
			bool aagekaans=nqueen(sol,i+1,n);
			if(aagekaans==true){
				return true;
			}
			sol[i][j]=0;//backtracking
		}
	}
	return false;
}
int main(){
	int n;
	cin>>n;
	int sol[100][100]={0};
	nqueen(sol,0,n);
	
	

	return 0;
}