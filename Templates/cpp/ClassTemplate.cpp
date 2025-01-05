#include <iostream>
#include <string>

class MyClass {
public:
    MyClass(const std::string& name) : name(name) {}
    void greet() const {
        std::cout << "Hello, " << name << "!" << std::endl;
    }

private:
    std::string name;
};

int main() {
    MyClass obj("User");
    obj.greet();
    return 0;
}

