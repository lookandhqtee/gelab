#include <iostream>
#include <regex>
using namespace std;



int main() {
	regex reg(R"([_A-Za-z0-9-]+@[A-Za-z0-9-]+(\.[a-z]{2,4}))");
	string data = "\n\n peoGeps@mail.ru \n s0 - 0 - s@lego.com \n 74637 & 486039@skan.com \n kikimeow@gmail.com \n sokol#@mail.ru \n psohkspdohkp@link.com \n";
	for (auto it = sregex_iterator(data.begin(), data.end(), reg); it != sregex_iterator(); ++it) {
		smatch itMatch = *it;
		cout << itMatch[0] << "\n";
	}
	return 0;
}