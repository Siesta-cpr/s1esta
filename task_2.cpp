#include <iostream.h>
using namespace std;

int main() {
	list<int> numbers{ 1, 2, 3, 4, 5, 6 };
}


#include <vector>
#include <iostream>

class Stack {
private:
    std::vector<int> items;
public:
    void push(int item) { items.push_back(item); }
    int pop() { int top = items.back(); items.pop_back(); return top; }
    int peek() const { return items.back(); }
    size_t size() const { return items.size(); }
};

