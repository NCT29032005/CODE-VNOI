#include <bits/stdc++.h>
using namespace std;

bool checkNTO (bool *&arr[] , int m)
{
    arr = new int [m];
    memset(arr , true , sizeof(arr));
    arr[0] = arr[1] = false ;
    for(int i = 2 ; i <= m ; i ++)
    {
        if (arr[i])
        for (int j = i+i ; j <= m ; j)

    }
}

int main()
{
    long long n,m;
    cin>>n>>m;
    bool *arr;
    checkNTO( arr , m)
}