#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while (test--){
		long long int n;
		cin >> n;
		int ans = 0;
		vector<int>v(n+1);
		for(int i=1;i<=n;i++){
			cin >> v[i];
		}
		for(int i=1;i<=n;i++){
			if(v[i] > i + ans) {
				ans += v[i] - i - ans ;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}