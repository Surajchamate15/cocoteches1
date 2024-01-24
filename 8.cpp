//Given a list of students, each student has 5 subjects, and for each subject, we have, total
//marks, and marks scored. Find the top five students. For example Amit Sharma (English, 100,
//60 | Hindi, 100, 70 | Math 1, 70, 40 | Math 2, 70 60, Science, 100, 80)
//Please note you need to create random data of about 20 students with names like “Student1”,
//“Student2” and so on. Each student will have 5 subjects with random values for marks scored
//ranging from 0 to total marks for the subject.



#include <iostream>
using namespace std;

void student1() {
    
   int total_score=100;
    int english=60;
    int hindi=70;
    int Math1=60;
    int math2=60;
    int science=80;
     
}

 void student2{
     int total_score=100;
    int english=80;
    int hindi=90;
    int Math1=80;
    int math2=70;
    int science=60;
int main() {
    student
    float sub_1, sub_2, sub_3, sub_4, sub_5;

    float total = 0.00, average = 0.00, percentage = 0.00;
    char grade;

    cout << "Enter the marks of five subjects::\n";
    cin >> sub_1 >> sub_2 >> sub_3 >> sub_4 >> sub_5;

    total = sub_1 + sub_2 + sub_3 + sub_4 + sub_5;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    cout << "\nThe Total marks   = " << total << "/500\n";
    cout << "The Average marks = " << average << "\n";
    cout << "The Percentage    = " << percentage << "%\n";
    cout << "The Grade         = '" << grade << "'\n";
    return 0;
}
    
 }
