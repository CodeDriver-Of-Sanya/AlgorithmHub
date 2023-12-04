#include<iostream>
using namespace std;
int main()
{
	int n;
	scanf_s("%d", &n);
	while (n--)
	{
		int x, s = 0;
		scanf_s("%d", &x);
		for (int i = x; i; i -= i & -i)s++;
		printf("%d ", s);

	}
	return 0;
}