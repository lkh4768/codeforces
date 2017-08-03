#include<iostream>
#include<sstream>
#include<string>

#include<cmath>

int s(long int x)
{
	int ret = 0, size;
	std::stringstream ss;
	std::string strX;
	ss << x;
	strX = ss.str();
	size = strX.length();
	for(int i = 0; i < size; i++)
		ret += strX[i] - '0';

	return ret;
}

int main()
{
	long int xs[100] = {0}, x;
	int a, b, c, n = 0;
	std::cin >> a >> b >> c;
	for(int sx = 1; sx < 82; sx++)
	{
		x = (b*pow(sx, a)) + c;
		if(s(x) == sx && x > 0 && x < 1000000000)
		{
			xs[n]=x;
			n++;
		}
	}

	std::cout << n << std::endl;
	for(int i = 0; i < n; i++)
		std::cout << xs[i] << ' ';
	return 0;
}
