#include <iostream>
#include <cmath>
using namespace std;
bool checkrakhsaktehai(int num,int i,int j,int n,int mat[9][9]){
	// vertical
	for(int k=0;k<n;k++){
		if(mat[k][j]==num){
			return false;
		}
	}
	// horizoontal check
	for(int k=0;k<n;k++){
		if(mat[i][k]==num){
			return false;
		}
	}
	
	// root n * root n
	int srn=sqrt(n);//3
	int si=(i/srn)*srn;//3
	int sj=(j/srn)*srn;////3

	for(int u=si;u<si+srn;u++){//4
	for(int v=sj;v<sj+srn;v++){//4
	if(mat[u][v]==num){
		return false;
	}
}
}


return true;


}
bool sudukosolver(int mat[9][9],int i,int j,int n){
	// base  case
	if(i==n){
		for(int l=0;l<n;l++){
			for(int k=0;k<n;k++){
				cout<<mat[l][k]<<" ";
			}
			cout<<endl;
		}
		return true;
		
	}


	// rec case
	if(j==n){
		return sudukosolver(mat,i+1,0,n);
	}
	if(mat[i][j]!=0){
		return sudukosolver(mat,i,j+1,n);

	}
	else{
		for(int num=1;num<=n;num++){
			if(checkrakhsaktehai(num,i,j,n,mat)){
				mat[i][j]=num;
				bool aagekaans=sudukosolver(mat,i,j+1,n);
				if(aagekaans==true){
					return true;
				}
				mat[i][j]=0;//backtrack
			}

		}
		return false;
	}
	
}
int main(){
	
	int mat[9][9] =
	{{5,3,0,0,7,0,0,0,0},
	{6,0,0,1,9,5,0,0,0},
	{0,9,8,0,0,0,0,6,0},
	{8,0,0,0,6,0,0,0,3},
	{4,0,0,8,0,3,0,0,1},
	{7,0,0,0,2,0,0,0,6},
	{0,6,0,0,0,0,2,8,0},
	{0,0,0,4,1,9,0,0,5},
	{0,0,0,0,8,0,0,7,9}};
	sudukosolver(mat,0,0,9);
	
	

	return 0;
}