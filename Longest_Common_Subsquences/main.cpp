#include <iostream>
#include <vector>
using namespace std;
int count(string a, string b, int m, int n)
{
	if (m > a.size()-1 || n > b.size()-1 ||m<0||n<0) return 0;
	if (a[m] == b[n]) {
		return 1 + count(a, b, m + 1, n + 1);
	}
	else
	{
		if (count(a, b, m + 1, n) > count(a, b, m, n + 1))
		{
			return count(a, b, m + 1, n);
		}
		else
		{
			return count(a, b, m, n + 1);
		}
	}
}
int dem(string a, string b,vector<vector<int>> &d) {
	if (a.size() > b.size())
	{
		int i = 0;
		int j = b.size() - 1;
		while(i < j)
		{
				if (a[i] != b[j]) {
					d[i][j] = d[i][j - 1];
				}
			}
		}
	}
}
int main() {
	string a;
	string b;
	cin >> a >> b;
	cout << count(a, b, 0, 0);
}
