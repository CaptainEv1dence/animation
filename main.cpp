#include <iostream>

class Animation {
private:
    int const state;

public:
    DiscreteState(int state): state(state) { }

    bool contains(int s) const {
        return s == state;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
