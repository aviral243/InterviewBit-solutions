//  https://www.interviewbit.com/problems/lru-cache/

#include "bits/stdc++.h"

list<pair<int, int>> dq;
unordered_map<int, list<pair<int, int>>::iterator> hash;
int cache = 0;

LRUCache::LRUCache(int capacity)
{
    cache = capacity;
    dq.clear();
    ::hash.clear();
}

int LRUCache::get(int key)
{
    if (::hash.find(key) == ::hash.end())
        return -1;
    else
    {
        list<pair<int, int>>::iterator it = ::hash[key];
        int val = it->second;
        dq.erase(it);
        dq.push_front(make_pair(key, val));
        ::hash[key] = dq.begin();
        return val;
    }
}

void LRUCache::set(int key, int value)
{
    if (::hash.find(key) == ::hash.end())
    {
        if (dq.size() == cache)
        {
            auto last = dq.back();
            dq.pop_back();
            ::hash.erase(last.first);
        }
    }
    else
    {
        list<pair<int, int>>::iterator it = ::hash[key];
        dq.erase(it);
    }
    dq.push_front(make_pair(key, value));
    ::hash[key] = dq.begin();
}
© 2020 GitHub, Inc.