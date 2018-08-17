#include <iostream>
#include <string>
using namespace std;

string i1;
int i;
// a 97. e 101 i 105 o 111 u 117
int main() {
	getline(cin, i1);
	while(i < i1.size()) {
		cout << i1.at(i);
		switch (i1.at(i)) {
			case 'a': case 'e': case 'i': case 'o': case 'u':
				i += 2;
		}
		i++;
	}
	return 0;
}