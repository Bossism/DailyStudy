#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
#define maxn 1002
/****************************  这个返回结点层数记一下   *****************************************/
int d(int x) {//返回结点所在的层数
	int tmp = 1;
	while (x > 1) {
		tmp++;
		x /= 2;
	}
	return tmp;
}
int num[maxn];
int main() {
	int n;
	while (cin >> n) {
		int t;
		for (int i = 1; i <= n; i++)
			cin >> num[i];
		int a = d(n);
		cin >> t;
		if (t > a) {
			cout << "EMPTY" << endl;
			continue;
		}
		int tmp = pow(2, t-1);
		int r = min((int)pow(2,t) - 1, n);
		for (int i = tmp; i < r; i++) {
			cout << num[i] << " ";
		}
		cout << num[r] << endl;
	}
}
