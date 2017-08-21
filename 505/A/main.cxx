#include <iostream>
#include <cstring>

char s[256];
char tmpC = '0';

int main()
{
	s[0] = tmpC;
	std::cin.getline(&s[1], 255);

	int len = strlen(s);
	for(int i = 0; i < len; i++)
	{
		bool sw = true;
		for(int j = 0; j < len/2; j++)
		{
			if(j != i && len-1-i != j && s[j] != s[len-1-j]) 
					sw = false;
		}

		if(sw)
		{
			s[i] = s[len - 1 - i];
			std::cout << s << "\n";
			return 0;
		}

		s[i] = s[i+1];
		s[i+1] = tmpC;
	}

	std::cout << "NA\n";
	return 0;
}
