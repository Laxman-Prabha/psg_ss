

#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <algorithm>

int main() {

	int o,ch,a;
	std::map<std::string, int> wordMap = {
			{ "a",1 }, { "b", 2 },
			{ "c", 3 }, { "d", 4 }
										};
std::cout<<"Enterthe char:";
std::cin>>ch;
std::cout<<"Enter the offset:";
std::cin>>o;


	std::map<std::string, int>::iterator it;


	it = wordMap.find(ch);


	if (it != wordMap.end()) {



		std::string key = it->first;

		int value = it->second;

		std::cout << "key = " << key << " :: Value = " << value << std::endl;
	} else {

		a=ch+o;
		std::cout<<a;
	}


}
