#include<stdio.h>

int main(){
	FILE *rf, *wf;
	int n , m, a, x, y;
	
	rf = fopen("input.txt", "r");
	fscanf(rf, "%d %d %d", &n, &m, &a);
	
	fclose(rf);
	
	x = n/a;
	y = m/a;	
	if(n%a != 0) x = x + 1;	
	if(m%a != 0) y = y + 1;

	wf = fopen("output.txt","w");
	fprintf(wf, "%d", x*y);
	
	fclose(wf);

	return 0;
}
