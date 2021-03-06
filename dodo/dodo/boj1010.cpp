#include<iostream>
using namespace std;
long long dp[31][31];
int N;
int main() {
	for (int i = 1; i < 30; i++) {
		dp[i][i] = 1;
		dp[1][i] = i;
	}
	for (int i = 2; i < 30; i++) {
		for (int j = i + 1; j < 30; j++) {
			for (int k = 1; k < j; k++) {
				dp[i][j] += dp[i - 1][k];
			}
		}
	}
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		cout << dp[a][b] << '\n';
	}
	return 0;
}