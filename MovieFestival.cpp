#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, start, end, curr_end=0, total=0;
	vector<pair<int, int>> movies;
	cin >> n;
	for (int i=0;i<n;i++)
	{
		cin >> start >> end;
		movies.push_back(make_pair(end, start));

        //cin >> movies[i].second >> movies[i].first;
	}
	// sorting by ending times
	sort(movies.begin(), movies.end());
	for (auto time : movies)
	{
		if (time.second >= curr_end)
		{
			curr_end = time.first;
			total++;
		}
	}
	cout << total;
	return 0;
}