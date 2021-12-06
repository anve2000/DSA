#include<iostream>
#include<cmath>
#include<climits>
#include<queue>
#include<stack>
#include<cstring>//<--strings
#include<algorithm>//<--sort
#include<unordered_map>
#include<map>
#include<list>
#include<cstring>

using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair



int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int a, b, p, q, m, n;
		cin >> a >> b >> p >> q >> m >> n;
		string ans;
		if ((a >= 2 and a <= 7) and (b >= 2 and b <= 7))
		{
			ans = "NO";
		}
		else
		{
			if (a == 1 || b == 1)
			{
				if (a == 1)
				{
					if (p == 2 or m == 2)
					{
						if (p == 2)
						{
							if (abs(q - b) == 1)
							{
								ans = "NO";
							}
							else
							{
								if (n == b + 1 || n == b - 1 || n == q)
								{
									ans = "NO";
								}
								else
								{
									ans = "YES";
									cout << ans << endl;
									continue;
								}
							}
						}
						else
						{
							if (abs(n - b) == 1)
							{
								ans = "NO";
							}
							else
							{
								if (q == b + 1 || q == b - 1 || n == q)
								{
									ans = "NO";
								}
								else
								{
									ans = "YES";
									cout << ans << endl;
									continue;
								}
							}
						}
					}
					else
					{
						ans = "NO";
					}
				}


				if (b == 1)
				{
					if (q == 2 || n == 2)
					{
						if (q == 2)
						{
							if (abs(p - a) == 1)
							{
								ans = "NO";
							}
							else
							{
								if (m == a + 1 || m == a - 1 || m == p)
								{
									ans = "NO";
								}
								else
								{
									ans = "YES";
									cout << ans << endl;
									continue;
								}
							}
						}
						else
						{
							if (abs(m - a) == 1)
							{
								ans = "NO";
							}
							else
							{
								if (p == a + 1 || p == a - 1 || p == m)
								{
									ans = "NO";
								}
								else
								{
									ans = "YES";
									cout << ans << endl;
									continue;
								}
							}
						}
					}
					else
					{
						ans = "NO";
					}
				}
			}
			else
			{
				if (a == 8)
				{
					if (p == 7 || m == 7)
					{
						if (p == 7)
						{
							if (abs(q - b) == 1)
							{
								ans = "NO";
							}
							else
							{
								if (n == b + 1 || n == b - 1 || n == q)
								{
									ans = "NO";
								}
								else
								{
									ans = "YES";
									cout << ans << endl;
									continue;
								}
							}
						}
						else
						{
							if (abs(n - b) == 1)
							{
								ans = "NO";
							}
							else
							{
								if (q == a + 1 || q == a - 1 || n == q)
								{
									ans = "NO";
								}
								else
								{
									ans = "YES";
									cout << ans << endl;
									continue;
								}
							}
						}
					}
				}

				if (b == 8)
				{
					if (q == 7 || n == 7)
					{
						if (q == 7)
						{
							if (abs(p - a) == 1)
							{
								ans = "NO";
							}
							else
							{
								if (m == a + 1 || m == a - 1 || m == p)
								{
									ans = "NO";
								}
								else
								{
									ans = "YES";
									cout << ans << endl;
									continue;
								}
							}
						}
						else
						{
							if (abs(m - a) == 1)
							{
								ans = "NO";
							}
							else
							{
								if (p == a + 1 || p == a - 1 || m == p)
								{
									ans = "NO";
								}
								else
								{
									ans = "YES";
									cout << ans << endl;
									continue;
								}
							}
						}
					}
				}
			}
		}

		cout << ans << endl;
	}

	return 0;
}
