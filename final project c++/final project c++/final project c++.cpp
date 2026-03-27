#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// Base Class
class Person
{
protected:
    string name;

public:
    Person(string n) : name(n) {}
};

// Derived Class
class Student : public Person
{
private:
    int id;
    double gpa;
    set<string> courses; // منع التكرار

public:
    Student(int i, string n, double g) : Person(n), id(i), gpa(g) {}

    int getId() const { return id; }
    string getName() const { return name; }
    double getGPA() const { return gpa; }

    void addCourse(string course)
    {
        courses.insert(course);
    }

    void showCourses() const
    {
        if (courses.empty())
        {
            cout << "No courses enrolled.\n";
            return;
        }
        for (auto c : courses)
        {
            cout << "- " << c << endl;
        }
    }

    void display() const
    {
        cout << "ID: " << id << ", Name: " << name << ", GPA: " << gpa << endl;
    }
};

// Global container
vector<Student> students;

// Functions
void addStudent()
{
    int id;
    string name;
    double gpa;

    cout << "Enter ID: ";
    cin >> id;

    // Check duplicate ID
    for (auto& s : students)
    {
        if (s.getId() == id)
        {
            cout << "ID already exists!\n";
            return;
        }
    }

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter GPA: ";
    cin >> gpa;

    if (gpa < 0.0 || gpa > 4.0)
    {
        cout << "Invalid GPA!\n";
        return;
    }

    students.push_back(Student(id, name, gpa));
    cout << "Student added successfully.\n";
}

void removeStudent()
{
    int id;
    cout << "Enter ID: ";
    cin >> id;

    auto it = remove_if(students.begin(), students.end(),
        [id](Student& s)
        { return s.getId() == id; });

    if (it != students.end())
    {
        students.erase(it, students.end());
        cout << "Student removed.\n";
    }
    else
    {
        cout << "Student not found.\n";
    }
}

void searchStudent()
{
    int id;
    cout << "Enter ID: ";
    cin >> id;

    for (auto& s : students)
    {
        if (s.getId() == id)
        {
            s.display();
            return;
        }
    }

    cout << "Student not found.\n";
}

void displayAll()
{
    if (students.empty())
    {
        cout << "No students available.\n";
        return;
    }

    for (auto& s : students)
    {
        s.display();
    }
}

void enrollCourse()
{
    int id;
    string course;

    cout << "Enter Student ID: ";
    cin >> id;

    for (auto& s : students)
    {
        if (s.getId() == id)
        {
            cout << "Enter Course: ";
            cin >> course;
            s.addCourse(course);
            cout << "Course added.\n";
            return;
        }
    }

    cout << "Student not found.\n";
}

void showCourses()
{
    int id;
    cout << "Enter Student ID: ";
    cin >> id;

    for (auto& s : students)
    {
        if (s.getId() == id)
        {
            s.showCourses();
            return;
        }
    }

    cout << "Student not found.\n";
}

void sortByGPA()
{
    sort(students.begin(), students.end(),
        [](Student& a, Student& b)
        {
            return a.getGPA() > b.getGPA();
        });

    cout << "Students sorted by GPA.\n";
}

// Main Menu
int main()
{
    int choice;

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Add Student\n";
        cout << "2. Remove Student\n";
        cout << "3. Search Student\n";
        cout << "4. Display All Students\n";
        cout << "5. Enroll Student in Course\n";
        cout << "6. Show Student Courses\n";
        cout << "7. Sort Students by GPA\n";
        cout << "8. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            removeStudent();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            displayAll();
            break;
        case 5:
            enrollCourse();
            break;
        case 6:
            showCourses();
            break;
        case 7:
            sortByGPA();
            break;
        case 8:
            cout << "Goodbye!\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 8);

    return 0;
}