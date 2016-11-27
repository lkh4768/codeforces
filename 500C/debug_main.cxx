#include <iostream>
#include <sstream>

void printDebug(std::string& str)
{
	std::cout << "DEBUG : " << str;
}

void printAry(int ary[], int size)
{
	std::stringstream ss;
	for(int i = 0; i < size; i++)
		ss << i << "(" << ary[i] << "), ";

	std::string str = ss.str();
	str.replace(str.length()-2, 2, "\n");
	printDebug(str);
}

int main()
{
	int n, m, minW = 0, ws[501] = {0}, stemp[501] = {0}, bs[1001] ={0};

	std::cin >> n >> m;

	for(int i = 1; i <= n; i++)
		std::cin >> ws[i];

	for(int i = 1; i <= m; i++)
	{
		int b;
		std::cin >> b;
		bs[i] = b;
		if(stemp[b] != 0) bs[stemp[b]] = 0;
		for(int j = stemp[b]; j < i; j++) minW += ws[bs[j]];
		stemp[b] = i;

		std::cout << "============B\n";
		std::cout << "DEBUG : " << b << "\n";
		std::cout << "============BS\n";
		printAry(bs, m+1);
		std::cout << "============STEMP\n";
		printAry(stemp, n+1);
		std::cout << "============MINW\n";
		std::cout << "DEBUG : " << minW << "\n\n";
	}

	std::cout << minW <<'\n';

	return 0;
}
