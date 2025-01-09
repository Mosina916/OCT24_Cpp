#include<iostream>
using namespace std;
int sol[100][100]={0};
bool ratinamaze(char maze[5][5],int i,int j,int n,int m){
	// b case
	if(i==n-1 and j==m-1){
		sol[i][j]=1;
		for (int l = 0; l <=n-1; l++)
		{
			for(int k=0;k<=m-1;k++){
				cout<<sol[l][k]<<" ";
			}
			cout<<endl;
		}
		// return true;
		cout<<endl;
		return false;
	}
	// rec case
	sol[i][j]=1;
	if(j<=m-2 and maze[i][j+1]!='X'){
		bool aagekaans=ratinamaze(maze,i,j+1,n,m);
		if(aagekaans==true){
			// return true;
		}
	}

	if(i<=n-2 and maze[i+1][j]!='X'){
		bool aagekaans=ratinamaze(maze,i+1,j,n,m);
		if(aagekaans==true){
			return true;
		}
	}

	sol[i][j]=0;
	return false;

}

int main(){
	// int r,c;
	// cin>>r>>c;//5 4
	char maze[5][5]={
		"OXOO",
		"OOOX",
		"OOXO",
		"XOOO",
		"XXOO"
	};

	int n=5,m=4;
	ratinamaze(maze,0,0,n,m);


	return 0;
}