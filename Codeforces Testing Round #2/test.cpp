#include <iostream>
#include <algorithm>
using namespace std;int n;int X[30000];int Y[30000];int Z[30000];int y,z,ly;bool test(int d) {        ly=y;        int k;        int pred=Z[z-1];        for (k=z-2;k>=0;) {                if (pred-Z[k]==d)                        pred=Z[k],k--;                else if (pred-Y[ly-1]==d)                        pred=Y[ly-1],ly--;                else                        return false;        }        return true;}void print(int d) {        for (int i=0;i<ly;i++)                cout<<Y[i]<<" ";        cout<<endl;        int pred=Z[0];        cout<<Z[0]<<" ";        for (int i=1;i<z;) {                if (Z[i]-pred==d) {                        cout<<Z[i]<<" ";                        pred=Z[i];                        i++;                } else {                        cout<<Y[ly]<<" ";                        pred=Y[ly];                        ly++;                }        }}bool split(int a,int d) {        z=0,y=0;        for (int i=0;i<a;i++)                Z[z++]=X[i];        Y[y++]=X[a];        int pred=X[a];        for (int i=a+1;i<n;i++)                if (X[i]-pred==d) {                        Y[y++]=X[i];                        pred=X[i];                } else                        Z[z++]=X[i];        if (z==0) {                for (int i=1;i<n;i++)                        cout<<X[i]<<" ";                cout<<endl;                cout<<X[0];                return true;        }        else if (z==1) {                for (int i=0;i<y;i++)                        cout<<Y[i]<<" ";                cout<<endl;                cout<<Z[0];                return true;        } else {                if (test(Z[z-1]-Z[z-2])) {                        print(Z[z-1]-Z[z-2]);                        return true;                } else if (test(Z[z-1]-Y[y-1])) {                                print(Z[z-1]-Y[y-1]);                                return true;                        }        }        return false;}int main(){        cin>>n;        for (int i=0;i<n;i++)                cin>>X[i];        if (n==2) {                cout<<X[0]<<endl;                cout<<X[1];        } else {                if (!split(0,X[1]-X[0]))                        if (!split(0,X[2]-X[0]))                                if (!split(1,X[2]-X[1]))                                        cout<<"No solution"<<endl;        }        return 0;}