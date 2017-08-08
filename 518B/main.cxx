#include<cstdio>
#include<algorithm>

int s[100], t[100];

void getStrCnt(int* strCnt)
{
	char c;
	while(true)
	{
		scanf("%c", &c);
		if(c == '\n') break;
		strCnt[c - 'A']++;
	}
}

int main()
{
	int yay = 0, whoops = 0;
	
	getStrCnt(s);
	getStrCnt(t);

	for(int i = 0; i < 100; i++)
	{
		if(s[i] <= t[i]){
			yay +=s[i];
			t[i] = t[i] - s[i];
		}
		else
		{
			yay += t[i];
			s[i] = s[i] - t[i];
		}
	}

	for(int i = 0; i <= 'z'-'A'; i++)
		whoops += std::min(t[i], s[i]);

	printf("%d %d\n", yay, whoops);
	return 0;
}
