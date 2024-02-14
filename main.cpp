#include <iostream>
using namespace std;

class Person {

    private:
        string name;
        std::string sirName;
        int age;
    public:
        Person() {}

        const std::string &getName() const {
            return name;
        }

        void setName(const std::string &name) {
            this->name = name;
        }

        const std::string &getSirName() const {
            return sirName;
        }

        void setSirName(const std::string &sirName) {
            Person::sirName = sirName;
        }

        int getAge() const {
            return age;
        }

        void setAge(int age) {
            Person::age = age;
        }
};


int main() {

    Person jecka("Evgeny", "Kost");
    std::cout << jecka.getSirName();
    return 0;
}

