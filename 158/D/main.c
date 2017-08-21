#include<stdio.h>

int group[100000];

int main(){
	int n = 0, i, r = 0, a1 = 0, a2 = 0, a3 = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &group[i]);
	}

	for(i = 0; i < n; i++){
		if(group[i] == 4) r = r+1;
		if(group[i] == 3) a3 = a3+1;
		if(group[i] == 2) a2 = a2+1;
		if(group[i] == 1) a1 = a1+1;
	}
	
	if(a3 > a1){
		a3 = a3-a1;
		r = r+a1;
		a1 = 0;
		r = r+a3;
		a3 = 0;
	}else{
		a1 = a1-a3;
		r = r+a3;
		a3 = 0;
	}

	r = r+(a2/2);
	a2 = a2%2;

	if(a2 > 0){
		if(a1 > 1){
			a2 = 0;
			a1 = a1-2;
			r = r+1;
		}else if(a1 == 1){
			a2 = 0;
			a1 = 0;
			r = r+1;
		}else{
			a2 = 0;
			r = r+1;
		}
	}
	
	if(a1 > 0){
		r = r+(a1/4);
		if(a1%4 != 0) r = r+1;
	}

	printf("%d\n", r);

	return 0;
}
