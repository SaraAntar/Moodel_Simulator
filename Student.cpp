#include <iostream>
#include "Student.h"
#include <string>

using namespace std;               //we use this statement to prevent repetition of std::.

CStudent::CStudent() {            // defining the Constructor of the CStudent class.

    student_name=student_email_password= student_major= student_email_username= "";
    student_ID=0;                 //initializing the variables that should be used in th following functions.
    student_score=0.0;
    student_grades[0]=student_grades[1]=student_grades[2]=student_grades[3]=student_grades[4]=0.0;

}

//defining function that registers students info by receiving them from the user and storing them in the private variable in CStudent class.

void CStudent::registerStudent(int loop,int b){

        string x;
        getline(cin,x);

        cout<<"Enter Name of Student: "<<endl;
        getline(cin,student_name);

        cout<<"Enter email username: "<<endl;;
        getline(cin,student_email_username);

        cout<<"Enter email password: "<<endl;
        getline(cin,student_email_password);

        cout<<"Enter Student Major: "<<endl;
        getline(cin,student_major);

        cout<<"Enter Student ID: "<<endl;
        cin>>student_ID;

        cout<<"\n\t\t\t\t\t\t~ Each course is out of 100 ~\n"<<endl;
        cout<<"Enter grades of student number "<<loop+1<<" in the "<<b<<" courses:"<<endl;
        for (int i=0; i<b;) {                             //loop for receiving grades of certain no.of courses of no.of students from the user.

            cin >> student_grades[i];
            if (student_grades[i] > 100){                // condition that prevents the user from entering a no. greater than 100.

                cout << "Invalid grade! Please try again!\n";          //if the user entered a no. greater than 100 it wil print out this statement.
                continue;
            }
            else {
                i++;
            }
        }
        cout<<"\nStudent's data are registered successfully!\n";
}

void CStudent::getStudentInfo(int loop,int b) {        //defining function for displaying all student's info .

    float total=0.0;                                  //initializing variables .
    int total_score;
    total_score=b*100;                               //a statement which indicates that each course is out of 100.

    //statements for displaying students' info.

    cout<<"\nName of student number "<<loop+1<<" is: "<<student_name<<endl;
    cout<<"ID is: "<<student_ID<<endl;
    cout<<"Email username is: "<<student_email_username<<endl;
    cout<<"Email password is: "<<student_email_password<<endl;
    cout<<"Student's major is: "<<student_major<<endl;
    cout<<"Student's grades are: "<<endl;

    for(int i=0;i<b;i++){                           //loop for printing out the students grades.

        cout<<student_grades[i]<<endl;
        total+=student_grades[i];                  // calculating grades and storing them in total.
    }

    cout<<"\nStudent's total score in all courses is: "<<total<<" out of "<<total_score<<endl;       //statement for calculating the total score of the students.
    calculateGPA(b);                              //calling the function which calculates the gpa .
}

void CStudent::calculateGPA(int num) {           //it is a function that receives the grades from getStudentInfo function and takes the average for calculating the GPA

    float sum=0.0, GPA=0.0, passingGpa=2.00,changingGpa=0.05;

    for (int i = 0; i <num; i++){               //loop for summation of the students' grades.
        sum += student_grades[i];
    }
    student_score=sum/num;                      // storing the average of grades in student score variable.

    if(student_score>=90 && student_score<=100)             //a condition for checking whether the average of the students is between 90 and 100.
    {
        cout<<"GPA of the student= 4";
    }

    if(student_score<50)
    {
        cout<<"\nGPA of the Student= "<<student_score/100<<endl;             //if the average is less than 50 then the gpa will be calculated by dividing the average by 100.
    }

    else
    {
        for(int i=50;i<90;i++)                          //loop for calculating and displaying the gpa of the students.
        {
            if(i==student_score)
            {
                GPA=passingGpa;
                cout<<"GPA of the Student= "<<GPA<<endl;
            }
            passingGpa +=changingGpa;
        }
    }
}

CStudent::~CStudent() {                         // defining the destructor of the CStudent class.

    //re-initializing of CStudent class variables.

    student_name=student_email_password= student_major= student_email_username= "";
    student_ID=0;
    student_score=0.0;
    student_grades[0]=student_grades[1]=student_grades[2]=student_grades[3]=student_grades[4]={0.0};
}

CCourse::CCourse(){                              // defining the Constructor of the CCourse class.

    course_name = course_code = "";             //initializing of CCourse class variables.
    course_cost= 0.0;
}

CCourse::~CCourse() {                          // defining the destructor of the CCourse class.

    course_name = course_code = "";
    course_cost= 0.0;
}

void CCourse::AddCourse(int i){               // defining function that accepts the courses info from the user and stores them in CCourse class variables.

        cout<<"\n\t\t\t\t\t\t   ~ For course number "<<i+1<<" ~\n"<<endl;

        string x;
        getline(cin, x);
        cout << "Please enter course name:" << endl;
        getline(cin, course_name);
        cout << "Please enter course code:" << endl;
        getline(cin, course_code);
        cout << "please enter course cost:" << endl;
        cin >> course_cost;

}

void CCourse::getCourseInfo(int loop){                      //defining function that displays the courses info that the user stored in the previous function .

    cout<<"\n~ For course number "<<loop+1<<" ~\n"<<endl;
    cout << "The course name is: " <<course_name <<endl;
    cout << "The course code is: " <<course_code <<endl;
    cout << "The course cost is: " <<course_cost <<endl;

}

void CPG_Student::SetTitle(int i){                         //defining function for receiving and storing job title of post graduate students in CPG_Student.

    string x;
    getline(cin, x);
    cout<<"\nPlease enter job title of student number "<<i+1<<" :"<<endl;
    getline(cin,pg_student_job_title);

}

void CPG_Student::GetTitle(int i){                       //defining function that displays the job title of the post graduate students .

    cout<<"Job title of student number "<<i+1<<" is: "<<pg_student_job_title<<endl;
}