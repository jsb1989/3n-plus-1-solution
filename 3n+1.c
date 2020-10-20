#include <stdio.h>
int maxnum(int i,int j){
	int k,n,count,max=0;
	for(k=i; k<=j; k++){
		n=k;
		count=1;
		while(n!=1){
			if(n%2==0){
				n=n/2;
				count++;
			} else {
				n=3*n+1;
				count++;
			}
		}
		if(count>max){
			max=count;
		} 
	}
	return max;
}
int main(){	
	int i,j,temp,tempi,tempj;
	while(scanf("%d %d",&i,&j)==2){
		tempi=i;
		tempj=j;	
		if(i>j){
			temp=i;
			i=j;
			j=temp;
		}
		printf("%d %d %d\n",tempi,tempj,maxnum(i,j));
	}
return 0;		
}		
