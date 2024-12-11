#include  <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};