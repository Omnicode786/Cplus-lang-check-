#include <iostream>
#include <string>
using namespace std;

class Teacher 
{
    private:
    double salary;
    public: // these are access modiefiers
    // 
    string name;
    string department;
    string subject;
    Teacher() // non paramerterized constructor
    {
        cout << "Hi I am constructor\n"; 
        department = "Computer Science";
    }
    // Teacher (string n, string d,string sub, double sal)
    Teacher (string name, string department,string subject, double salary)
    {
        // now one is the variable that is declared in class and the other one is passed through the function to counter this we use this syvmbol
        this->name  = name;
        this->department = department;
        this->subject = subject;
        this->salary = salary;
        // this-> will indicate that this is the parameter of the object / class
    } // this->prop is same as *(this).prop
    
    // copy constructor pass by reference
    Teacher (Teacher &orgobj)
    {
        cout << "I am a custom copy contructor....\n";
        this->name  = orgobj.name;
        this->department  = orgobj.department;
        this->subject  = orgobj.subject;       this->name  = orgobj.name;
        this->salary  = orgobj.salary;
    }
  
    // these are methds or you could also tell them as member functions
    void changeDept(string newDept)
    {
        department  = newDept;
    }
    // setter modifier = private value set indirectly
    void setSalary(double s)
    { 
        salary = s;
    }
    // accessor getter = private value get indirectly
    double getSalary()
    {
        return salary;
    }
    void getinfo()
    {
        cout << "name: " <<name <<endl;
        cout << "subject: " <<subject<<endl;
        cout << "department: " <<department<<endl;
        cout << "Salary: " << salary<<endl;
    }
    };
    class Student
    {
        public:
        string name;
        double *cgpa;

        Student(string name, double cgpa1)
        {
            this->name = name;
            cgpa = new double;
           *cgpa = cgpa1;
        }
        // we will have to make the deep copy myself
        Student(Student &orgobj)
        {
            this->name = orgobj.name;
           cgpa = new double;
            *cgpa = *orgobj.cgpa; // after ading * in front this will now create a deep copy
            // this copy constructor and the above one will work great until we have data in heap also these were shallow copy 

        }
        void getInfo()
        {
            cout << name << endl;
            cout << *cgpa << endl;
        }
    };
    class Account
    {
    private:
        double balance;
        string password; // data hiding
    public:
       string accountid;
       string username;
    };

    
 
    


int main()
{
    Teacher t1; // here how t1 object is called a contructor is called automatically
    // even thoguh above no function is called but since the object of the class teacher is created henc econstructor function will always be called this will happen for every object created for thast class
    t1.name = "Muzammil";
    t1.subject = "Programming";
    t1.department = "Software Engineering";
    t1.changeDept("Computer systems engineering");
    t1.setSalary(250000);
    cout << t1.name << '\n' << t1.subject << '\n' << t1.department << '\n' << t1.getSalary() << '\n';
    Teacher t2;
    t2.name = "Suman";
    t2.subject = "Programming Fundamentals";
    t2.setSalary(30000);
     cout << t2.name << '\n' << t2.subject << '\n' << t2.department << '\n' << t2.getSalary() << '\n';
    Teacher t3("Taha", "Electrical", "BEE", 40000);
    t3.getinfo() ;
    //Teacher t4(t3); // default copy constructor was called here
    // the above wouldve used default copy constructor which is pass by value but now I have made a slight change in the above code my making an actual custom copy contructor which accepts data via pass by reference
    Teacher t4(t3);// now t4 has direct access to t3 data so if we were to change the dat
    t4.getinfo();
   Student s1("Muzamil Alam", 4.0);
   s1.getInfo();
    Student s2(s1);
    *(s2.cgpa) = 3.6;
    // even s1 would be changed here this is shallow copy
    s1.getInfo();
    s2.getInfo();
    return 0;


}