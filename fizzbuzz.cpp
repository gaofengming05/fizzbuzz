#include <iostream>
#include <string>
using namespace std;
typedef int myIn;
typedef string myOut;
bool check(myOut out, myOut Out) {
	if (out != Out) {
		return 0;
	}
	else return 1;
}
void analysis(myIn in, myOut& out) {
	if (in % 3 == 0 && in % 5 == 0) { out = "FizzBuzz"; }
	if (in % 3 == 0) { out = "Fizz"; }
	if (in % 5 == 0) { out = "Buzz"; }
	else { out = to_string(in); }
}
bool test01() {
	myIn in = 4;
	myOut out;
	analysis(in, out);
	myOut Out = "1";
	check(out, Out);
}










