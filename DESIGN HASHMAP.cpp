#include<bits/stdc++.h>
using namespace std;
class MyHashMap
{
public:
     vector<int> a;

     MyHashMap()
     {
          a.resize(1000001, -1);
     }

     void put(int key, int value)
     {
          a[key] = value;
     }

     int get(int key)
     {
          if (a[key] == -1)
               return -1;
          return a[key];
     }

     void remove(int key)
     {
          if (a[key] != -1)
               a[key] = -1;
     }
};

// PROBLEM LEETCODE - 706