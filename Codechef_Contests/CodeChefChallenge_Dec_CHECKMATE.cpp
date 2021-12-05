// #include<iostream>
// #include<cmath>
// #include<climits>
// #include<queue>
// #include<stack>
// #include<cstring>//<--strings
// #include<algorithm>//<--sort
// #include<unordered_map>
// #include<map>
// #include<list>
// #include<cstring>

// using namespace std;

// #define ll long long int
// #define pb push_back
// #define mp make_pair





// int main()
// {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif


// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		int a, b, p, q, m, n;
// 		cin >> a >> b >> p >> q >> m >> n;

// 		string ans;

// 		if ((a >= 2 and a <= 7) and (b >= 2 and b <= 7))
// 		{
// 			ans = "NO";
// 		}
// 		else
// 		{
// 			if ((abs(p - a) == 1 and abs(q - b) == 1) || (abs(m - a) == 1 and abs(n - b) == 1))
// 			{
// 				ans = "NO";
// 				cout << ans << endl;
// 				continue;
// 			}
// 			if (a == 1 || b == 1)
// 			{
// 				int check;
// 				if (a == 1 and b == 1)
// 				{
// 					check = 0;
// 				}
// 				else if (a == 1)
// 				{
// 					check = 1;
// 				}
// 				else
// 				{
// 					check = 2;
// 				}

// 				if (check == 0 || check == 1)
// 				{
// 					if (p == 2 || m == 2)
// 					{
// 						if (p == 2)
// 						{
// 							if (n == b + 1 || n == b - 1 || n == q)
// 							{
// 								ans = "NO";
// 							}
// 							else
// 							{
// 								ans = "YES";
// 								cout << ans << endl;
// 								continue;
// 							}
// 						}
// 						else
// 						{
// 							if (q == b + 1 || q == b - 1 || q == n)
// 							{
// 								ans = "NO";
// 							}
// 							else
// 							{
// 								ans = "YES";
// 								cout << ans << endl;
// 								continue;
// 							}
// 						}
// 					}
// 					else
// 					{
// 						ans = "NO";
// 					}
// 				}

// 				if (check == 0 || check == 2) //(i,1)
// 				{
// 					if (n == 2 || q == 2)
// 					{
// 						if (q == 2)
// 						{
// 							if (m == a + 1 || m == a - 1 || m == p || n == q)
// 							{
// 								ans = "NO";
// 							}
// 							else
// 							{
// 								ans = "YES";
// 								cout << ans << endl;
// 								continue;
// 							}
// 						}
// 						else
// 						{
// 							if (p == a + 1 || p == a - 1 || p == m || n == q)
// 							{
// 								ans = "NO";
// 							}
// 							else
// 							{
// 								ans = "YES";
// 								cout << ans << endl;
// 								continue;
// 							}
// 						}
// 					}
// 					else
// 					{
// 						ans = "NO";
// 					}
// 				}
// 			}
// 			else if (a == 8 || b == 7)
// 			{
// 				int check;
// 				if (a == 7 and b == 7)
// 				{
// 					check = 0;
// 				}
// 				else if (a == 7)
// 				{
// 					check = 1;
// 				}
// 				else
// 				{
// 					check = 2;
// 				}

// 				string ans;
// 				if (check == 0 || check == 1)
// 				{
// 					if (p == 7 || m == 7)
// 					{
// 						if (p == 7)
// 						{
// 							if (n == b + 1 || n == b - 1 || n == q || p == m)
// 							{
// 								ans = "NO";
// 							}
// 							else
// 							{
// 								ans = "YES";
// 								cout << ans << endl;
// 								continue;
// 							}
// 						}
// 						else
// 						{
// 							if (q == b + 1 || q == b - 1 || q == n || p == m)
// 							{
// 								ans = "NO";
// 							}
// 							else
// 							{
// 								ans = "YES";
// 								cout << ans << endl;
// 								continue;
// 							}
// 						}
// 					}
// 					else
// 					{
// 						ans = "NO";
// 					}
// 				}

// 				if (check == 0 || check == 2)
// 				{
// 					if (n == 7 || q == 7)
// 					{
// 						if (n == 7)
// 						{
// 							if (m == a + 1 || m == a - 1 || m == p)
// 							{
// 								ans = "NO";
// 							}
// 							else
// 							{
// 								ans = "YES";
// 								cout << ans << endl;
// 								continue;
// 							}
// 						}
// 						else
// 						{
// 							if (p == a + 1 || p == a - 1 || m == p)
// 							{
// 								cout << "NO" << endl;
// 							}
// 							else
// 							{
// 								ans = "YES";
// 								cout << ans << endl;
// 								continue;
// 							}
// 						}
// 					}
// 					else
// 					{
// 						ans = "NO";
// 					}
// 				}
// 			}

// 			cout << ans << endl;
// 		}

// 	}

// 	return 0;
// }



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
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

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
			if ((abs(p - a) == 1 and abs(q - b) == 1) || (abs(m - a) == 1 and abs(n - b) == 1))
			{
				ans = "NO";
				cout << ans << endl;
				continue;
			}
			if (a == 1 || b == 1)
			{
				int check;
				if (a == 1 and b == 1)
				{
					check = 0;
				}
				else if (a == 1)
				{
					check = 1;
				}
				else
				{
					check = 2;
				}

				if (check == 0 || check == 1)
				{
					if (p == 2 || m == 2)
					{
						if (p == 2)
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
						else
						{
							if (q == b + 1 || q == b - 1 || q == n)
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
						ans = "NO";
					}
				}

				if (check == 0 || check == 2) //(i,1)
				{
					if (n == 2 || q == 2)
					{
						if (q == 2)
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
					else
					{
						ans = "NO";
					}
				}
			}
			else if (a == 8 || b == 8)
			{
				int check;
				if (a == 8 and b == 8)
				{
					check = 0;
				}
				else if (a == 8)
				{
					check = 1;
				}
				else
				{
					check = 2;
				}

				// string ans;
				if (check == 0 || check == 1)
				{
					if (p == 7 || m == 7)
					{
						if (p == 7)
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
						else
						{
							if (q == b + 1 || q == b - 1 || q == n)
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
						ans = "NO";
					}
				}

				if (check == 0 || check == 2)
				{
					if (n == 7 || q == 7)
					{
						if (n == 7)
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
						ans = "NO";
					}
				}
			}
			cout << ans << endl;
		}

	}

	return 0;
}
