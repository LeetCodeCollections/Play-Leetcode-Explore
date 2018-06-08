/// Source : https://leetcode.com/explore/learn/card/hash-table/182/practical-applications/1139/
/// Author : liuyubobobo
/// Time   : 2018-06-07

#include <iostream>
#include <set>

using namespace std;


class MyHashSet {

private:
    set<int> data[100001];

public:
    /** Initialize your data structure here. */
    MyHashSet() {

    }

    void add(int key) {
        data[key%10].insert(key);
    }

    void remove(int key) {
        data[key%10].erase(key);
    }

    /** Returns true if this set did not already contain the specified element */
    bool contains(int key) {
        return data[key%10].find(key) != data[key%10].end();
    }
};


int main() {

    return 0;
}