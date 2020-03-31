#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
using namespace std;

int main() {
	char a[201];
	while(scanf("%s",a)!=EOF){
		sort(a, a + strlen(a));
		puts(a);
	}
	return 0;
}
