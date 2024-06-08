#include <bits/stdc++.h>
using namespace std;

void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.emplace_front(3); //4,3,1,2,
    dq.push_front(4);

    dq.pop_back();
    dq.pop_front();

    // dq.back();
    // dq.front();

    for (auto i : dq)
    {
        std::cout << i << " ";
    }
}
int main()
{
    explainDeque();
    return 0;
}