#include <iostream>
#include <vector>
#include <algorithm>

struct Student {
    std::string name;
    std::string roll_number;
    float cgpa;
};

// Custom comparison function to sort students by CGPA in descending order
bool compareByCGPA(const Student& student1, const Student& student2) {
    return student1.cgpa > student2.cgpa;
}

void sort_students(std::vector<Student>& students) {
    std::sort(students.begin(), students.end(), compareByCGPA);
}

int main() {
    // Example usage
    std::vector<Student> student_list = {
        {"Alice", "A123", 3.9},
        {"Bob", "B456", 3.7},
        {"Charlie", "C789", 3.8},
        {"David", "D012", 3.6}
    };

    // Before sorting
    std::cout << "Before sorting:" << std::endl;
    for (const Student& student : student_list) {
        std::cout << "Name: " << student.name << ", Roll Number: " << student.roll_number << ", CGPA: " << student.cgpa << std::endl;
    }

    // Sort the students by CGPA in descending order
    sort_students(student_list);

    // After sorting
    std::cout << "\nAfter sorting by CGPA in descending order:" << std::endl;
    for (const Student& student : student_list) {
        std::cout << "Name: " << student.name << ", Roll Number: " << student.roll_number << ", CGPA: " << student.cgpa << std::endl;
    }

    return 0;
}
