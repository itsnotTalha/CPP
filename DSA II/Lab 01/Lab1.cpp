#include<iostream>
using namespace std;
class Student{
public :
    int roll;
    int day;
    int month;
    int year;

    //Constructor
    Student(){
        cout<<"A student1 obj has been created."<<endl;
    }
    Student(int roll, int day, int month, int year){
        this->roll = roll;
        this->day = day;
        this->month = month;
        this->year = year;
        cout<<"A student2 obj has been created."<<endl;
    }
    //Destructor
    ~Student(){
        cout<<"A student obj has been destroyed."<<endl;
    }

    void printinfo(){
        cout<<"Roll -> "<<roll<<endl;
        cout<<"Day -> "<<day<<endl;
        cout<<"Month -> "<<month<<endl;
        cout<<"Year -> "<<year<<endl;
    }
};

void compareYears(Student a, Student b){
    if(a.year==b.year){
        cout<<"Same Year"<<endl;
    }
    else if(a.year>b.year){
        cout<<a.roll<<" is greater"<<endl;
    }else{
        cout<<b.roll<<" is greater"<<endl;
    }

}
void changeYears(Student *a){
    a->year = 2000;
}

int main(){
    Student student1;
    Student student2(1,1,2,2005);
    student1.printinfo();
    student2.printinfo();
    changeYears(&student1);
    return 0;
}

