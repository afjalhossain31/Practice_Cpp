#include <iostream>
using namespace std;

int count(int coin[], int n, int sum)
{
	if (sum == 0)
		return 1;

	if (sum < 0)
		return 0;

	if (n <= 0)
		return 0;

	return count(coin, n, sum - coin[n - 1])+ count(coin, n - 1, sum);
}

int main()
{
	
	int coin[] = { 1, 2, 3,5};
	int n = sizeof(coin) / sizeof(coin[0]);
	int sum = 11;

	cout << " " << count(coin, n, sum);

	return 0;
}
