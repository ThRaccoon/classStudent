#include <iostream>
#include <sstream>
#include <string>

class Student {
private:

    int age = 0;
    int standard = 0;
    std::string first_name;
    std::string last_name;

public:
    
    Student(int Age, int Standard, std::string first_Name, std::string last_Name)
        :age(Age)
        ,standard(Standard)
        ,first_name(first_Name)
        ,last_name(last_Name)
    {
    }

    Student() {}

    void set_age(int a)
    {
        age = a;
    }
    void set_standard(int s)
    {
        standard = s;
    }
    void set_first_name(std::string f_N)
    {
        first_name = f_N;
    }
    void set_last_name(std::string l_N)
    {
        last_name = l_N;
    }

    int get_age() { return age; }
    int get_standard() { return standard; }
    std::string get_first_name() { return first_name; }
    std::string get_last_name() { return last_name; }

    std::string to_string()
    {
        return std::to_string(age) + "," + first_name + "," + last_name + "," +
            std::to_string(standard);
    }
};

int main() {

    int age, standard;
    std::string first_name, last_name;

    std::cout << "Enter student age: " << std::endl;
    std::cin >> age;

    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Please enter only digits!" << std::endl;
        std::cin >> age;
    }

    std::cout << "Enter student first name: " << std::endl;
    std::cin >> first_name;
    std::cout << "Enter student last name: " << std::endl;
    std::cin >> last_name;
    std::cout << "Enter studen standard: " << std::endl;
    std::cin >> standard;

    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Please enter only digits!" << std::endl;
        std::cin >> age;
    }

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    std::cout << "Student age: " << st.get_age() << std::endl;
    std::cout << "Student last name: " << st.get_last_name() << ", " << "first name: " << st.get_first_name() << std::endl;
    std::cout << "Student standart: " << st.get_standard() << std::endl;
    std::cout << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << st.to_string() << std::endl;
    std::cout << "-----------------" << std::endl;

    return 0;
}