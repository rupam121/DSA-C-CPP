#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

void explainSet()
{
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);

    // 1,2,3,4,5
    auto it = st.find(3);
    auto it = st.find(6);

    st.erase(5); // erase 5

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it);

    auto it1 = st.find(3);
    st.erase(it);

    auto it1 = st.find(2);
    auto it2 = st.find(4);

    st.erase(it1, it2);
}

int main()
{
    explainSet();
    return 0;
}