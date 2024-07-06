/*If the provided token has not already been #defined in the file or in an included file, #ifndef includes the code between it and the closing #else or, if no
#else is present, the #endif statement. */

#ifndef MOODLE_SIMULATOR_MAIN_H
#define MOODLE_SIMULATOR_MAIN_H
#include <string>

using namespace std;

class CStudent{                    //A class is a technique for tying together data members and methods into a single entity.

public:                            //public - members are accessible from outside the class.
    CStudent();
    void calculateGPA(int num),registerStudent(int loop,int b), getStudentInfo(int loop,int b);         //declaration of constructor, destructor, and other functions prototypes.
    float student_grades[5], student_score;
    string student_name;
    ~CStudent();

private:                          //private - members cannot be accessed (or viewed) from outside the class.
    string student_email_password, student_major, student_email_username;
    int student_ID;

};

class CCourse{                      //defining class course for adding and displaying courses of students.

public:
    CCourse();
    void AddCourse(int i),getCourseInfo(int loop);
    ~CCourse();

private:
    string course_name, course_code;
    float course_cost;
};

class CPG_Student: public CStudent         //Defining a class that inherits CStudent class which accesses it's public functions.
{
public:
    void GetTitle(int i);
    void SetTitle(int i);

private:
    string pg_student_job_title;
};

#endif //MOODLE_SIMULATOR_MAIN_H