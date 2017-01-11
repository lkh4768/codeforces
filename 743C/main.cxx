#include<iostream>
#include<iomanip>

int main()
{
	long double n = 0, y = 3, z = 0, max;
	std::cin >> n;

	if(n == 1){
		std::cout << "-1\n";
		return 0;
	}

	z = n * y * n;
	max = 1000000000;

	for(y = n+1; y < max; y++)
	{
		for(int i = 1; (z = n*y*i) < max && z != n && z != y; i++)
		{
			if((2*n*y*z) / ((n*z) + (y*z) + (n*y)) == n)
			{
				std::cout << std::fixed << std::setprecision(0) << n << " " << y << " " << z << "\n";
				return 0;
			}
		}
	}

	std::cout << "-1\n";
	return 0;
}
