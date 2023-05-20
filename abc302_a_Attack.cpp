// Problem: A - Attack
// Contest: AtCoder - TOYOTA MOTOR CORPORATION Programming Contest 2023#2
// (AtCoder Beginner Contest 302) URL:
// https://atcoder.jp/contests/abc302/tasks/abc302_a Memory Limit: 1024 MB Time
// Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

/*//*Anup Ghosh*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pi acos(-1)
#define ull unsigned long long
#define nl printf("\n")
#define MAXN 1000005
#define gcd(a, b) __gcd(a, b)
#define pb push_back
#define all(x) x.begin(), x.end()
#define fio()                   \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define Erase(s) s.erase(unique(s.begin(), s.end()), s.end())

#define sp(n) fixed << setprecision(n)
#define mod 998244353
#define no cout << "NO\n";

#define yes cout << "YES\n";

void solve(int tc) {
  ll a, b;
  cin >> a >> b;
  ll ans = a / b;
  if (a % b) ans++;
  cout << ans << endl;
}

int main() {
  int t;
  t = 1;
  // cin >> t;
  int x = 1;
  while (t--) {
    solve(x);
    x++;
  }

  return 0;
}