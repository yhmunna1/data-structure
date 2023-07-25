#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }

    bool operator<(const Student &other) const
    {
        if (marks == other.marks)
            return roll > other.roll;
        return marks < other.marks;
    }
};

int main()
{
    int N;
    cin >> N;

    priority_queue<Student> maxHeap;

    for (int i = 0; i < N; ++i)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student student(name, roll, marks);
        maxHeap.push(student);
    }

    int Q;
    cin >> Q;

    while (Q--)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student newStudent(name, roll, marks);
            maxHeap.push(newStudent);
            Student topStudent = maxHeap.top();
            cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
        }
        else if (command == 1)
        {
            if (maxHeap.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                Student topStudent = maxHeap.top();
                cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
            }
        }
        else if (command == 2)
        {
            if (maxHeap.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                maxHeap.pop();
                if (maxHeap.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    Student topStudent = maxHeap.top();
                    cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
                }
            }
        }
    }

    return 0;
}
