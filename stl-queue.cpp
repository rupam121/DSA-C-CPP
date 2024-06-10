#include <bits/stdc++.h>
using namespace std;

void explainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back() += 6;

    cout << q.back() << " "; // 10

    std::cout << q.front() << " "; // 1
    q.pop();
    std::cout << q.front();
}
int main()
{
    explainQueue();
    return 0;
}