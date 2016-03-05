#include<iostream>
#include<cmath>
#include<string>

int StrToInt(std::string str_num, int base)
{
	if(base > 0 and base < 36)
	{
		char c;
		int digit;
		int sum = 0;
		int len = str_num.length();

		for(int i = 0; i < len; ++i)
		{
			c = str_num[i];
			// [0-9]
			if(c >= 48 and c <= 57)
				digit = c - 48;
			// [A-Z]
			else if(c >= 65 and c <= 90)
				digit = c - 55;
			// [a-z]
			else if(c >= 97 and c <= 122)
				digit = c - 87;
			else
			{
				std::cerr<<__LINE__<<": Invalid num.\n";
				exit(1);
			}

			if(digit < base)
			{
				sum += digit * pow(base,len-1-i);
			}
			else
			{
				std::cerr<<__LINE__<<": Invalid num.";
				exit(1);
			}
		}

		return sum;
	}
	else
	{
		std::cerr<<"StrToInt() error.\n";
		exit(1);
	}

}

int main()
{
	std::string str_num;
	int base;
	std::cout<<"Input string number: ";
	std::cin>>str_num;
	std::cout<<"Input base: ";
	std::cin>>base;
	std::cout<<"Output: "<<StrToInt(str_num, base)<<"\n";
	return 0;
}
