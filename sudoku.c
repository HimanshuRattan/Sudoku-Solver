#include<stdio.h>
int i,k;
int sameColumn(int, int, int);
int sameRow(int, int, int);
int sameSquare(int, int, int);
int solve(int, int);
int arr[9][9]={1, 2, 0, 0, 4, 5, 0, 0, 0,
				   0, 3, 7, 0, 0, 0, 0, 2, 0,
				   6, 8, 5, 2, 0, 0, 0, 3, 4,
				   0, 9, 8, 1, 5, 0, 0, 6, 0,
				   0, 0, 0, 0, 0, 0, 0, 0, 0, 
				   0, 7, 0, 0, 3, 2, 4, 9, 0,
				   7, 5, 0, 0, 0, 9, 3, 8, 2,
				   0, 1, 0, 0, 0, 0, 6, 4, 0,
				   0, 0, 0, 8, 6, 0, 0, 1, 7};

int main()
{
	int x=0, y=0;
	int i, k;
			
	for(i=0;i<9;i++)
	{
		for(k=0;k<9;k++)
		{	
			printf("%d ", arr[i][k]);
		}

			printf("\n");
	}
	
	printf("\n\n");
	solve(x,y);
		for(i=0;i<9;i++)
	{
		for(k=0;k<9;k++)
		{	
			printf("%d ", arr[i][k]);
		}

			printf("\n");
	}
	

}

int sameColumn(int x, int y, int num){
		for( i=0;i<9;i++){
			if(arr[x][i]==num){
				return 1;
			}
			
		}
		return 0;
	}
int sameRow(int x, int y, int num){
		for(i=0;i<9;i++){
			if(arr[i][y]==num){
				return 1;
			}
			
		}
		return 0;
	}
int sameSquare(int x, int y, int num){
	if(x<3){
		x=0;
	}
	else if(x>2 && x<6){
		x=3;
	}
	else
		x=6;
	if(y<3){
		y=0;
	}
	else if(y>2 && y<6){
		y=3;
	}
	else
		y=6;				
		for(i=x;i<3+x;i++){
			for(k=y;k<y+3;k++){
				if(arr[i][k]==num){
				return 1;
				
			}

			}
			
		}
		return 0;
	}
	int solve(int x, int y){
		int num=1, tx=0,ty=0;
		if(arr[x][y]!=0){
			if(x==8 && y==8){
				return 1;
			}
			if(x<8){
				x++;
			}
			else {
				if(y<8){
				
				x=0;
				y++;
				}
				}
			if(solve(x,y)){
				return 1;
			}
			else {
				return 0;
			}
			
		}
			
		if (arr[x][y]==0) {
		while(num<10){
			if(!sameSquare(x, y, num) && !sameRow(x, y, num) && !sameColumn(x, y, num)){

					arr[x][y]=num;
			if(x==8 && y==8){
				return 1;
			}
					
			if(x<8){
				tx=x+1;
			
			}
			else {
				if(y<8){
				
				tx=0;
				ty=y+1;
			}
			}
			if(solve(tx,ty)){
				return 1;
			}

				}
					num++;
			}
			arr[x][y]=0;
			return 0;
			
		}	
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

