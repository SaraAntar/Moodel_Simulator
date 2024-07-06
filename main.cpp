#include <iostream>
#include "Student.h"
#include "Student.cpp"

using namespace std;                    //we use this statement in order not to repeat using the std:: function throughout the codes

int main() {                                                                                                             //Zahraa Omar Elzeiry: 18102297
                                                                                                                         //Amira Ahmed Elsharaby: 202000674
    int std_size=20,courses_size=10,students_num,loop;           //initializing variables
    int courses_num,pg_num,pg_size=20,c_taken;                                                                           //Rawan Ayman Saied: 202001710
    CStudent Students[std_size];               //defining variables from Student class type                              //Farah Amr Mohamed: 202001483
    CCourse Courses[courses_size];             //defining variables from courses class type                              //Dina Yahia Zahran: 202001218
    CPG_Student CPG[pg_size];                 //defining variables from CPG class type                                   //Silvana Nageh Mansy: 202001817

    cout<<"\t\t\t\t\t---------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t| WELCOME TO OUR STUDENTS MANAGEMENT SYSTEM |\n";
    cout<<"\t\t\t\t\t---------------------------------------------"<<endl;

    cout<<"\t\t\t\t\t\t --------------------------"<<endl;
    cout<<"\t\t\t\t\t\t | UNDERGRADUATE STUDENTS |\n";
    cout<<"\t\t\t\t\t\t --------------------------"<<endl;

    cout<<"\nEnter number of undergraduate students you want to register: "<<endl;          // receiving number of undergraduate students from the user
    cin>>students_num;                                                                      // storing number of students in students_num variable

    cout<<"\nEnter the number of courses you want to add: "<<endl;                          // receiving number of courses from the user
    cin>>courses_num;                                                                       // storing number of students in students_num variable

    for(loop=0; loop<students_num;loop++)                                                   // loop for registering students info
    {
        cout<<"\n\n\t\t\t\t\t\t  ~ For student number "<<loop+1<<" ~"<<endl;
        Students[loop].registerStudent(loop,courses_num);                     // statement for calling register function from CStudent class and storing data in Students array
    }

    cout<<"\n\t\t\t\t\t\t   -----------------------"<<endl;
    cout<<"\t\t\t\t\t\t   | Courses of students |\n";
    cout<<"\t\t\t\t\t\t   -----------------------"<<endl;

    for(int i=0; i<courses_num;i++)           //loop for adding courses of students and storing them in Courses array by calling addcourse function from CCourse class
    {
        Courses[i].AddCourse(i);
    }

    cout<<"\n\t\t\t\t   ------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t   | Displaying Undergraduate Students And Courses Info |\n";
    cout<<"\t\t\t\t   ------------------------------------------------------"<<endl;

    for (loop=0; loop<students_num;loop++)                         // loop for printing and displaying students info to the user
    {
        Students[loop].getStudentInfo(loop,courses_num);   // calling getStudentInfo function from CStudent class and  displaying students info stored in Students array
    }

    for(int i=0; i<courses_num;i++)                              // loop for displaying courses info of undergraduate students to the user
    {
        Courses[i].getCourseInfo(i);                     // calling getCourseInfo function from CCourse class and displaying courses info stored in Courses array
    }

    cout<<"\n\t\t\t\t\t\t -------------------------"<<endl;
    cout<<"\t\t\t\t\t\t | POSTGRADUATE STUDENTS |\n";
    cout<<"\t\t\t\t\t\t -------------------------"<<endl;

    cout<<"\nEnter the number of postgraduate students: "<<endl;                       // receiving number of postgraduate students from the user
    cin>>pg_num;                                                                       // storing number of students in pg_num variable

    cout<<"\nEnter the number of courses taken: "<<endl;                               // receiving number of courses taken from the user
    cin>>c_taken;                                                                      // storing number of courses taken bye postgraduates in c_taken variable

    for(int i=0; i<pg_num;i++)                                                         // loop for registering postgraduate students info
    {
        cout<<"\n\n\t\t\t\t\t\t  ~ For student number "<<i+1<<" ~"<<endl;
        CPG[i].registerStudent(i,c_taken);
        CPG[i].SetTitle(i);
    }
    for(int i=0; i<pg_num;i++){                                                        // loop for displaying postgraduate students info

        cout<<"\n\n\t\t\t\t\t\t  ~ For student number "<<i+1<<" ~"<<endl;
        CPG[i].getStudentInfo(i,c_taken);
        CPG[i].GetTitle(i);
    }

    cout<<"\n\t\t\t\t\t\t-----------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t| THANK YOU FOR USING OUR SYSTEM! |\n";
    cout<<"\t\t\t\t\t\t-----------------------------------"<<endl;

    return 0;
}