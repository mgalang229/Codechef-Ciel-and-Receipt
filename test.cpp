#include <bits/stdc++.h>

using namespace std;

void decode(){
	int n, res = 0, d = 0;
	cin >> n;
	for (int i = 11; i >= 0; i--){
		d = pow(2, i);
		res = res + (n / d);
		n = n % d;
	}
	cout << res << "\n";
}
int main(){
   	ios::sync_with_stdio(false);
   	cin.tie(0);
   	int t;
   	cin >> t;
   	while (t--){
   		decode();
   	}
    return 0;
}
