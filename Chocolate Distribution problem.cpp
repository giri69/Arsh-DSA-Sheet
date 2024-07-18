#include<bits/stdc++.h>
using namespace std;
long long findMinDiff(vector<long long> a, long long n, long long m){
    
    sort(a.begin(),a.end());
      long long minDiff = LLONG_MAX;
    for (long long i = 0; i + m - 1 < n; ++i) {
        long long currentDiff = a[i + m - 1] - a[i];
        minDiff = min(minDiff, currentDiff);
    }

    return minDiff;
    }   