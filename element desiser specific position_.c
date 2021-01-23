#include <stdio.h>

int main() {
	int arr[100]={0};
	int i,x,pos,n;
	scanf("%d%d%d",&n,&x,&pos);
	for (i=0;i<10;i++)
	     arr[i] =i+i;
	 for (i=0;i<n;i++)
	 {
	     printf("%d",arr[i]);
	 }
	 for(i=n-1;i>=pos;i--)
	    arr[i]=arr[i-1];
	    arr[pos-1]=x;
	 for(i=0; i<n; i++)
	 {
	     printf("%d",arr[i]);
	     
	 }
	 
	return 0;
}

