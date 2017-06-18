#include <iostream>
#include <string>


int main()
{
	std::string a, b;
	std::cin >> a >> b;

	std::string c(b.size(), '0');
	c += a;

	std::string d(a.size(), '0');
	d += b;

	cout << (c > d ? '>' : (c < d) ? '<' : '=');
}
	
