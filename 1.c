#include<stdio.h>

int main(void){
	int n;

	printf("n=");
	scanf("%d",&n);
	if((n&1)==0){//=の方が＆よりも演算における優先順位が高いので、先に行うように()を用いた。
		printf("%dは偶数です\n",n);
	}else{
		printf("%dは奇数です\n",n);
	}
	return 0;
}
