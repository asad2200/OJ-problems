// Problem: Sammy Rocket Burger Store
// Contest: HAckerRank - Codemaniacs-sammy 
// URL: https://www.hackerrank.com/contests/codemaniacs-sammy/challenges/sammy-rocket-burger-store
#include <bits/stdc++.h>
using namespace std;
bool fun(pair<int, int> a, pair<int, int> b)
{
    if (a.first > b.first)
        return false;
    return true;
}
bool fun2(pair<int, int> a, pair<int, int> b)
{
    if (a.first + b.second < b.first)
        return true;
    else if (a.second < b.second)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    int a, b;
    while (cin >> a >> b)
    {
        if(a>=0 && b>= 0)
        v.push_back(make_pair(a, b));
    }
    if (v.size() == n && n != 0)
    {
        sort(v.begin(), v.end(), fun);
        sort(v.begin(), v.end(), fun2);
        int ans = v[0].second;
        int time = v[0].second;
        for (int i = 1; i < n; i++)
        {
            time += v[i].second;
            ans += (time - v[i].first);
        }
        cout << ans / n << endl;
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
    return 0;
}
