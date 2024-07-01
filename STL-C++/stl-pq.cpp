#include <bits/stdc++.h>
using namespace std;

void explainDQ()
{
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.emplace(3);

    cout << pq.top() << " "; // 3
    pq.pop();
    std::cout << pq.top() << " "; // 2

    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(5);
    pq1.push(2);
    pq1.push(8);

    pq1.emplace(10);
    std::cout << pq1.top() << " "; // 2
}
int main()
{
    explainDQ();
    return 0;
}