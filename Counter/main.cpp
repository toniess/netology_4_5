#include <iostream>
#include <algorithm>
using namespace std;

class Counter {
private:
    int sum;
    int count;
public:
    Counter() {
        sum = 0;
        count = 0;
    }
    void operator()(const int num) {
        if (num % 3 == 0) {
            sum += num;
            count++;
        }
    }
    int get_sum() const {
        return sum;
    }
    int get_count() const {
        return count;
    }
};

int main() {
    int lst[] = {4, 1, 3, 6, 25, 54};
    Counter counter;

    counter = std::for_each(lst, lst + 6, counter);

    cout << "get_sum() = " << counter.get_sum() << endl;
    cout << "get_count() = " << counter.get_count() << endl;

    return 0;
}
