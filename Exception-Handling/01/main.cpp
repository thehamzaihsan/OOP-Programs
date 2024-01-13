#include <iostream>

class InvalidRange {
public:
    InvalidRange(const std::string& message, const std::string& functionName, int invalidValue)
        : message(message), functionName(functionName), invalidValue(invalidValue) {}

    const std::string& getMessage() const {
        return message;
    }

    const std::string& getFunctionName() const {
        return functionName;
    }

    int getInvalidValue() const {
        return invalidValue;
    }

private:
    std::string message;
    std::string functionName;
    int invalidValue;
};

class Student {
public:
    Student(int age, int marks) {
        setAge(age);
        setMarks(marks);
    }

    void setAge(int age) {
        if (age < 15 || age > 40) {
            throw InvalidRange("Invalid age range! Age should be between 15 and 40.", "setAge", age);
        }
        this->age = age;
    }

    void setMarks(int marks) {
        if (marks < 0 || marks > 100) {
            throw InvalidRange("Invalid marks range! Marks should be between 0 and 100.", "setMarks", marks);
        }
        this->marks = marks;
    }

private:
    int age;
    int marks;
};

int main() {
    try {
        Student student1(20, 85);
        Student student2(10, 75); // This will throw an exception
    } catch (const InvalidRange& e) {
        std::cout << "Exception caught: " << e.getMessage() << std::endl;
        std::cout << "Function Name: " << e.getFunctionName() << std::endl;
        std::cout << "Invalid Value: " << e.getInvalidValue() << std::endl;
    }

    return 0;
}

