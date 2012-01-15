#include <iostream>
#include <fstream>
#include <cstring>
#include <stdio.h>

using namespace std;

char qua[4][10005];
int n, k, p[4];
bool rs[2501][4] = {false}, ans[4] = {false};
bool let[125] = {false}, flag = false;
const char str[][5] = {"aaaa", "aabb", "abab", "abba"};

void init()
{
    let['a'] = let['e'] = let['i'] = let['o'] = let['u'] = true;
}
bool solve(int j)
{
    int num = 0;
    for (int i = strlen(qua[j]); i >= 0; i--)
    {
        if (let[ qua[j][i] ]) num++;
        if (num == k)
        {
            p[j] = i;
            return true;
        }
    }
    if (num < k) return false;
}
bool is_rs(int i, int a, int b)
{
    if (strlen(qua[a])-p[a] != strlen(qua[b])-p[b])
        return false;

    int ai = p[a], bi = p[b];
    while(ai < strlen(qua[a]))
    {
        if (qua[a][ai] != qua[b][bi])
            return false;
        ai++, bi++;
    }
    return true;
}
void find_rs(int i)
{

    if (is_rs(i, 0, 1) && is_rs(i, 0, 2) && is_rs(i, 0, 3))
        rs[i][0] = rs[i][1] = rs[i][2] = rs[i][3] = true;
    else if (is_rs(i, 0, 1) && is_rs(i, 2, 3))
        rs[i][1] = true;
    else if (is_rs(i, 0, 2) && is_rs(i, 1, 3))
        rs[i][2] = true;
    else if (is_rs(i, 0, 3) && is_rs(i, 1, 2))
        rs[i][3] = true;
    else
        flag = true;
}
void load()
{
 //   freopen("data.txt", "r", stdin);
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>qua[j];
            if (!solve(j))
            {
                flag = true;
                return;
            }
        }
        find_rs(i);
    }
}
void work()
{
    if (flag) return;
    for (int i = 0;i < 4; i++) ans[i] = rs[0][i];
    for (int i = 1;i < n; i++)
        for (int j = 0; j < 4; j++)
            if (!(ans[j]&&rs[i][j]))
                ans[j] = false;
}
void out()
{
    for (int i = 0;i < 4; i++)
        if (ans[i])
        {
            cout<<str[i]<<endl;
            return;
        }
    cout<<"NO"<<endl;

}
int main()
{
    init();
    load();
    work();
    out();
    return 0;
}
