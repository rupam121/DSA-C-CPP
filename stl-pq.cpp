#include <bits/stdc++.h>
using namespace std;

void explainDQ()
{
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.emplace(3);

    cout << pq.top(); // 10
    pq.pop();         // 8,5,2
    cout << pq.top(); // 8

    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(5);
    pq.push(2);
    pq.push(8);

    pq.emplace(10);
    cout << pq.top(); // 2
}
int main()
{
    explainDQ();
    return 0;
}