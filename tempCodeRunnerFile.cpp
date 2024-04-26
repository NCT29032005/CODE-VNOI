#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    for (int i = 1 ; i <= n  ;i++)
    {
        long long m; 
        cin>>m;
        for (int i = 2 ; i <= m ; i ++)
        {
            int dem = 0;
            while (m%i == 0)
            {
                m/=2;
                dem++;
            }
            if (dem != 0)
            cout<<i<<" "<<dem<<" ";
        }
        cout<<endl;
    }
}
