#include <iostream>
#define INF 100000+5
using namespace std;

bool dragon[INF] = {false};
int k, l, m, n, d, res = 0;

void load()
{
    cin >> k >> l >> m >> n >> d;
}
void cal(int a)
{
    for (int i = a; i <= d; i += a) dragon[i] = true;
}
void solve()
{
    cal(k);
    cal(l);
    cal(m);
    cal(n);

    for (int i = 1; i <= d; i++)
        if (dragon[i])
             res++;
}
void out()
{
    cout << res <<endl;
}
int main()
{
    load();
    solve();
    out();
    return 0;
}
