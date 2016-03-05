#include<iostream>
#include<string>

void IntToStr(int num, int base)
{
	if(base > 0 and base < 36)
	{
		std::string str_num;
		char c;
		int remainder;
		while(num != 0)
		{
			remainder = num % base;
			num /= base;

			// [0-9]
			if(remainder >= 0 and remainder <= 9)
			{
				c = remainder + 48;
				str_num += c;
			}
			// [A-Z]
			else
			{
				c = remainder + 55;
				str_num += c;
			}
		}

		int len = str_num.length();

		// Output the string number
		for(int i = len-1; i > -1; --i)
			std::cout<<str_num[i];
		std::cout<<std::endl;
	}
	else
	{
		std::cerr<<__LINE__<<": Invalid base. \n";
		exit(1);
	}
}

int main()
{
	int num, base;
	std::cout<<"Input number: ";
	std::cin>>num;
	std::cout<<"Input base: ";
	std::cin>>base;
	std::cout<<"Output: ";
	IntToStr(num, base);
	return 0;
}
