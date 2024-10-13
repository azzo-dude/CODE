#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, res = 0;
	cin >> n;
	while (n--) {
		string a; cin >> a;
		if (a == "X++" || a == "++X") {
			res++;
		}
		else res--;
	}

	cout << res;
	return 0;
}
