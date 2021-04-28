#include <iostream>
#include <vector>

using namespace std;


template <typename T>
struct ListItem {
    vector<T> _item;
    int _location;
    ListItem(int location, vector<T> item = {}) {
        _location = location;
        _item = item;
    }
};

template <typename T>
// template <typename T>
class Sort {
    vector<ListItem<T>> sorter;
    vector<T> = {};
    public:
        Sort()
};

int main() {
    cout << "hello world!" << endl;
}