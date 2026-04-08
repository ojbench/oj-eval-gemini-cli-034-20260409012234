#include "SkipList.hpp"
#include <iostream>

int main() {
    SkipList<int> sl;
    sl.insert(1);
    if (sl.search(1)) {
        sl.deleteItem(1);
    }
    return 0;
}
