#include <bits/stdc++.h>
using namespace std;

void explainMultipleSet()
{
    // everything same as set
    // its stores duplicate element also.

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1); // al 1 erase.

    int cnt = ms.count(1); // 0

    ms.erase(ms.find(1)); // single 1 erase

    ms.erase(ms.find(1), ms.find(1) + 2); // start , end prop are passing and middle 1 are erase..
}
int main()
{

    explainMultipleSet();
    return 0;
}