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
	myOut Out = "4";
	return check(out, Out);
}
bool test02() {
	myIn in = 6;
	myOut out;
	analysis(in, out);
	myOut Out = "Fizz";
	return check(out, Out);
}
bool test03() {
	myIn in = 5;
	myOut out;
	analysis(in, out);
	myOut Out = "Buzz";
	return check(out, Out);
}
bool test04() {
	myIn in = 15;
	myOut out;
	analysis(in, out);
	myOut Out = "FizzBuzz";
	return check(out, Out);
}
int main(int argc, char** argv) {
	cout << "test01:" << test01() << endl;
	cout << "test02:" << test02() << endl;
	cout << "test03:" << test02() << endl;
	cout << "test04:" << test02() << endl;
}








