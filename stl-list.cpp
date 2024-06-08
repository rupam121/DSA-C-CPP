#include <bits/stdc++.h>
#include <iostream> //read write input output
#include <list>
using namespace std;

void explainList()
{
    list<int> ls;

    ls.push_back(10);    //{10}
    ls.emplace_back(20); // {10,20}

    ls.push_front(5); // {5,10,20}

    ls.emplace_front();

    for (auto i : ls)
    {
        std::cout << i << " ";
    }
}

int main()
{
    explainList();
    return 0;
}