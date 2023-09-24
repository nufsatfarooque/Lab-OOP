#include<bits/stdc++.h>
using namespace std;

class Student
{
    private:
    string firstName, lastName;
    int id;
    int birth_year;
    vector <pair<string, float>> vec;
    bool pass=true;
    static int total_students;
    double averageGrade;
    bool scholarship_status=false, internship_status=false;

    public:
    Student(string s, string f, int i)
    {
        firstName=s;
        lastName=f;
        id=i;
    } 
    void enrollInCourses(string courseName)
    {
        vec.push_back(make_pair(courseName, 0.0));
    }
    void obtainedMarks(string courseName, float marks)
    {
        for(int i=0; i<vec.size(); i++)
        {
            if(vec[i].first==courseName)
            {
                vec[i].second=marks;
            }
        }
    }
    float getGradePointForEachCourse(string courseName)
    {
        for(int i=0; i<vec.size(); i++)
        {
            if(vec[i].first==courseName)
            {
                if(vec[i].second>=80)
                {
                    vec[i].second=4.0;
                    return 4.0;
                }
                else if(vec[i].second<80 && vec[i].second>=65)
                {
                    vec[i].second=3.0;
                    return 3.0;
                }
                else if(vec[i].second<65 && vec[i].second>=50)
                {
                    vec[i].second=2.0;
                    return 2.0;
                }
                else if(vec[i].second<50 && vec[i].second>=35)
                {
                    vec[i].second=1.0;
                    return 1.0;
                }
                
                else
                {
                    pass=false;
                    vec[i].second=0.0;
                    return 0.0;
                } 
            }
        }
    }
    float displayAverageGradePoint()
    {
        double grades=0;
        for(int i=0; i<vec.size(); i++)
        {
            
           grades+=vec[i].second;
            
        }
        averageGrade=grades/vec.size();
        return averageGrade;
    }
    void willGraduate()
    {
        if(pass==false)
        {
            cout<<"student won't graduate"<<endl;
        }
        else{
            cout<<"Student will graduate"<<endl;
        }
    }
    void applyForScholarship()
    {
        if(averageGrade>3.8)
        {
            cout<<"Can apply for scholarship"<<endl;
            scholarship_status=true;
        }
        else{
            cout<<"Can't apply for scholarship"<<endl;
        }
    }
    void participateInInternship(string courseName, string company)
    {
        int temp=0;
        if(averageGrade>3.0)
        {
            for(int i=0; i<vec.size(); i++)
            {
                if(vec[i].first==courseName)
                {
                    cout<<"Can do internship in "<<company<<endl;
                    internship_status=true;
                    temp=1;
                    break;
                }
                
            }
            if(temp==0) cout<<"Can't do internship in :"<<company<<endl;
        }
        else cout<<"Can't do internship in :"<<company<<endl;
    }
    ~ Student ()
    {
        cout<<endl<<"*************************"<<endl;
        cout<<"Student full name :"<<firstName<<' '<<lastName<<endl;
        cout<<"Student ID :"<<id<<endl;
        cout<<"Courses taken by the student :";
        for(int i=0; i<vec.size(); i++)
        {
            cout<<vec[i].first<<", "<<endl;
            
        }
        willGraduate();
        applyForScholarship();


    }
};

int main()
{
    Student s1("Nufsat", "Farooque", 115);
    s1.enrollInCourses("DLD");
    s1.enrollInCourses("Linear Algebra");
    s1.obtainedMarks("DLD", 80);
    s1.obtainedMarks("Linear Algebra", 70);
    cout<<"DLD : "<<s1.getGradePointForEachCourse("DLD")<<' '<<
    "LA :"<<s1.getGradePointForEachCourse("Linear Algebra")<<endl;
    cout<<s1.displayAverageGradePoint()<<endl;
    s1.willGraduate();
    s1.applyForScholarship();
    s1.participateInInternship("Linear Algebra", "Robi");

    Student s2("Ayesha", "Khanom", 124);
    s2.enrollInCourses("OOP");
    s2.enrollInCourses("Linear Algebra");
    s2.enrollInCourses("Maths");
    s2.obtainedMarks("OOP", 80);
    s2.obtainedMarks("Linear Algebra", 30);
    s2.obtainedMarks("Maths", 50);
    cout<<"OOP :"<<s2.getGradePointForEachCourse("OOP")<<' '<<"Linear Algebra :"<<s2.getGradePointForEachCourse("Linear Algebra")<<' '<<"Maths :"<< s2.getGradePointForEachCourse("Maths")<<endl;
    cout<<s2.displayAverageGradePoint()<<endl;
    s2.willGraduate();
    s2.applyForScholarship();
    s2.participateInInternship("COA", "GP");
}
