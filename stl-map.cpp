#include <bits/stdc++.h>
using namespacestd;

void explainMap()
{
    map<int> mp;
    map<int, pair<int, int>> mp;
    map<pair<int, int>, int> mp;

    mp[1] = 2;
    mp.emplace({3, 1});
    mp.insert({2, 4});
    mp.({2, 3}) = 10;

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mp[1];
    cout << mp[2];

    auto it = map.find(3);
    cout << *(it).second;

    auto it = mp.find(5);

    // this is the syntax
    auto it = mp.lower_bound(2);
    auto it = mp.upper_bound(3);


}

void explainMultiMap(){
    // everything same as map, it can store multiple keys
}
void explainUnorderMap(){
    // 
}
int main()
{
    return 0;
}