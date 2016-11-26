#include<stdio.h>

int l[100000][2];

int main()
{
	int n, i, min, mini;
	
	scanf("%d", &n);
	
	scanf("%d %d", &l[0][0], &l[0][1]);
	
	min = l[0][0] - l[0][1];
	mini = 0;
	
	for(i=1; i<n; i++){
		scanf("%d %d", &l[i][0], &l[i][1]);
		
		if(min > l[i][0]-l[i][1]){
			min = l[i][0]-l[i][1];
			mini = i;
		}
	}
	
	for(i=0; i<n; i++){
		if(l[mini][0] < l[i][0] && l[mini][1] > l[i][1]){
			printf("Happy Alex\n");
			return 0;
		}
	}
	
	printf("Poor Alex\n");
	return 0;
}
