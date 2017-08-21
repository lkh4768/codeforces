#include<cstdio>
#include<bitset>

#define MAX_SIZE 1001000

int main()
{
	int n, w;
	std::bitset<MAX_SIZE> b;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{ 
		scanf("%d", &w);
		while(b[w] == 1){ b[w++] = 0; } 
		b[w] = 1;
	} 

	printf("%lu\n", b.count());

	return 0;
}
