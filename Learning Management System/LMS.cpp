#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
void now(); // class
class Student
{
    char suserName[20];
    char spassword[20];
    char section[10];
    int id, n;

  public:
    Student() {}
    static int Studentcount; //static integer is used to count
    void FromFile();
    void getFile();
    void updateData(long int idd);
    void deleteSectionassignment(char *k);
    void StudentData();
    char *getName();
    char *getSPassword();
    char *sec();
    int getIdOfStudent();
    void display();
    void storeDataInFile();
};
void Student::storeDataInFile()
{
    Student a;
    a.StudentData();
    ofstream fout;
    fout.open("studentData.bin", ios::app | ios::binary);
    fout.write((char *)&a, sizeof(class Student));
    fout.close();
}
void Student::getFile()
{
    Student a;
    ifstream fin;
    fin.open("studentData.bin", ios::in | ios::binary);
    fin.read((char *)&a, sizeof(class Student));
    while (!fin.eof())
    {
        a.display();
        fin.read((char *)&a, sizeof(class Student));
    }
    fin.close();
}
inline void Student::display() //inline keyword is used
{
    cout << suserName << " " << section << " " << id << endl;
}

//getting user from the admin
void Student::StudentData()
{
    Student s3;
    cout << "enter the username of the student" << endl;
    cin.getline(suserName, 19);
    cin.ignore();
    cout << "enter the pass word for the student" << endl;
    cin.getline(spassword, 19);
    cin.ignore();
    cout << "enter student section" << endl;
    cin.getline(section, 10);
    cin.ignore();
    cout << "enter id of the student" << endl;
    cin >> id;
    cin.ignore(1);
    s3.Studentcount = s3.Studentcount + 1;
}

//returnns the password of the student
inline char *Student::getSPassword() //inline keyword is used
{
    return spassword;
}
//returnds the username of the student
inline char *Student::getName() //inline keyword is used
{
    return suserName;
}
//returns the id of the partiuclar student
inline int Student::getIdOfStudent() //inline keyword is used
{
    return id;
}

class Lecturer
{
    char password[20];
    char userName[20];
    int lecturerId;

  public:
    //default constructor
    static int LecturerCount; //static interger used to count
    Lecturer() {}
    //member function to get data from the user
    void getData();
    //getters
    char *getPassword();
    char *getUserName();
    void display();
    void storeDataInFile();
    void getDataFromFile();
    void FromFile();
};
class AssignmentForAll
{
    char section[10];
    char assignmentforall[200];

  public:
    AssignmentForAll() //default constructor
    {
    }
    void getDataForAssignForAll();
    char *getSec();
    void display();
    void storeDataInFile();
    void searchDataInFile(char *s);
    //this function is just to check while creating the projetc this can be deleted by the client
    int getDataFromFile();
};
void AssignmentForAll::searchDataInFile(char *s)
{
    AssignmentForAll a;
    ifstream fin;
    fin.open("AssignmentForAll.bin", ios::in | ios::binary);
    fin.read((char *)&a, sizeof(class AssignmentForAll));

    while (!fin.eof())
    {
        if (!strcasecmp(a.section, s))
        {
            a.display();
        }
        fin.read((char *)&a, sizeof(class AssignmentForAll));
    }
    fin.close();
}
inline void AssignmentForAll::display() //inline keyword is used
{
    cout << section << endl;
    cout << assignmentforall << endl;
};
//returns section
char *AssignmentForAll::getSec() { return section; }
//for gettinf data from the user
void AssignmentForAll::getDataForAssignForAll()
{
    cout << "enter the name of the section" << endl;
    //do not enter morw tham 9 charecters
    cin.getline(section, 9);
    cin.ignore();
    cout << "enter assignment in 200 charecters" << endl;
    cin.getline(assignmentforall, 199);
    cin.ignore();
}
void AssignmentForAll::storeDataInFile()
{
    AssignmentForAll obj;
    obj.getDataForAssignForAll();
    ofstream fout;
    fout.open("AssignmentForAll.bin", ios::app | ios::binary);
    fout.write((char *)&obj, sizeof(class AssignmentForAll));
    fout.close();
}
int AssignmentForAll::getDataFromFile()
{
    AssignmentForAll a;
    ifstream fin;
    fin.open("AssingnmentForAll.bin", ios::in | ios::binary);
    if (!fin)
    {
        cerr << "that file is not created" << endl;
        return -1;
    }
    fin.read((char *)&a, sizeof(class AssignmentForAll));
    while (!fin.eof())
    {
        a.display();
        fin.read((char *)&a, sizeof(class AssignmentForAll));
    }
    fin.close();
    return 1;
}

class AssignmentForOne
{
    int id;
    char assignment[200];

  public:
    AssignmentForOne()
    {
    }
    int getId();
    void getData();
    void display();
    void storeDataInFile();
    void searchFromFile(int idd);
    //this function is just to check while creating the projetc this can be deleted by the client
    int getDataFromFile();
    int iddd();
};
void AssignmentForOne::searchFromFile(int idd)
{
    AssignmentForOne a;
    ifstream fin;
    fin.open("assignmentforone.bin", ios::in | ios::binary);
    fin.read((char *)&a, sizeof(class AssignmentForOne));
    while (!fin.eof())
    {
        if (a.id == idd)
        {
            a.display();
        }
        fin.read((char *)&a, sizeof(class AssignmentForOne));
    }
}
//getter for id

inline int AssignmentForOne::getId() { return id; } //inline keyword is used

void AssignmentForOne::getData()
{
    cout << "enter the assignment that u want to assign" << endl;
    cin.getline(assignment, 199);
    cin.ignore();
    cout << "enter the id of the student u want to assign the assignment" << endl;
    cin >> id;
    cin.ignore();
}
inline void AssignmentForOne::display() //inline keywird is used
{
    cout << assignment << id << endl;
}

void AssignmentForOne::storeDataInFile()
{
    ofstream fout;
    AssignmentForOne a;
    a.getData();
    fout.open("assignmentforone.bin", ios::app | ios::binary);
    fout.write((char *)&a, sizeof(class AssignmentForOne));
    fout.close();
}
int AssignmentForOne::getDataFromFile()
{
    AssignmentForOne a;
    ifstream fin;
    fin.open("assignmentforone.bin", ios::in | ios::binary);
    if (!fin)
    {
        cerr << "that file is not created" << endl;
        return -1;
    }
    fin.read((char *)&a, sizeof(class AssignmentForOne));
    while (!fin.eof())
    {
        a.display();
        fin.read((char *)&a, sizeof(class AssignmentForOne));
    }
    fin.close();
    return 1;
}

int Student::Studentcount = 0;

int AssignmentForOne::iddd()
{
    return id;
}
void DeleteDataForOne()
{
    ofstream file;
    file.open("assignmentforone.bin", ios::out | ios::binary | ios::trunc);
    file.close();
    cout << " All the file content  erase succesfully";
    exit(-1);
}
void DeleteDataForAll()
{
    ofstream file1;
    file1.open("AssignmentForAll.bin", ios::out | ios::binary | ios::trunc);
    file1.close();
    cout << " All the file content  erase succesfully";
    exit(-1);
}
char *Student::sec() { return section; }
void Student::FromFile()
{
    Student a;
    AssignmentForAll b;
    AssignmentForOne c;
    char ch;
    int i;
    char nameOfStudent[20];
    char passwordOfStudent[20];
    cout << "enter your username" << endl;
    cin.getline(nameOfStudent, 19);
    cin.ignore();
    ifstream fin;
    fin.open("studentData.bin", ios::in | ios::binary);
    fin.read((char *)&a, sizeof(class Student));
    while (!fin.eof())
    {
        if (!strcasecmp(a.suserName, nameOfStudent))
        {
            cout << "enter your password" << endl;
            cin.getline(passwordOfStudent, 19);
            cin.ignore();
            if (!strcmp(a.spassword, passwordOfStudent))
            {
                cout << "Welcome Student " << endl;

                do
                {
                    cout << "enter  1 for assignment for all" << endl;
                    cout << "enter  2 for assignment of you" << endl;
                    cin >> i;
                    cin.ignore();

                    switch (i)
                    {
                    case 1:
                        b.searchDataInFile(a.sec());
                        break;
                    case 2:
                        c.searchFromFile(a.id);
                        break;
                    default:
                        break;
                    }
                    cout << "do u want to continue" << endl
                         << "Enter Y||y for continue \n N||n for return to main menu" << endl;
                    cin >> ch;
                    cin.ignore(2);
                } while (ch == 'y' || ch == 'Y');
            }
        }
        fin.read((char *)&a, sizeof(class Student));
    }
    if (ch == 'n' || ch == 'N')
    {
        cout << "logged out" << endl;
        now();
    }
    fin.close();
}
// void AssignmentForOne::se

class RemoveTeacher
{
  public:
    void RemoveTeacher_()
    {
        ofstream file;
        file.open("LecturerData.bin", ios::out | ios::binary | ios::trunc);
        file.close();
        cout << "Teachers Remove succesfully";
        exit(-1);
    }
};
class Removestudent : public RemoveTeacher //inheritence is used which inherit teacher remove function
{
  public:
    void RemoveStudent()
    {
        ofstream file;
        file.open("studentData.bin", ios::out | ios::binary | ios::trunc);
        file.close();
        cout << endl
             << "Students Remove succesfully";
        exit(-1);
    }
};
class printdata //used for operator overloading
{
    Student s;

  public:
    void print(int i)
    {
        cout << "total no.  is-";
        exit(-1);
    }
};

int Lecturer::LecturerCount = 0;
void Student::deleteSectionassignment(char *k)
{
    AssignmentForAll a;
    fstream file;
    file.open("AssignmentForAll.bin", ios::in | ios::out | ios::ate | ios::binary);
    file.seekg(0);
    file.read((char *)&a, sizeof(class AssignmentForAll));
    while (!file.eof())
    {
        if (k == a.getSec())
        {
            file.seekp(file.tellp() - sizeof(class AssignmentForAll));
            cin.ignore();
            a.getDataForAssignForAll();
            file.write((char *)&a, sizeof(class AssignmentForAll));
            file.close();
            cout << "assignment updated succesfully" << endl;
        }
        file.read((char *)&a, sizeof(class AssignmentForAll));
    }
}
void Student::updateData(long int idd)
{
    AssignmentForOne a;
    fstream file;
    file.open("assignmentforone.bin", ios::in | ios::out | ios::ate | ios::binary);
    file.seekg(0);
    file.read((char *)&a, sizeof(class AssignmentForOne));
    while (!file.eof())
    {
        if (idd == a.iddd())
        {
            file.seekp(file.tellp() - sizeof(class AssignmentForOne));
            cin.ignore();
            a.getData();
            file.write((char *)&a, sizeof(class AssignmentForOne));
            file.close();
            cout << "assignment updated succesfully" << endl;
        }
        file.read((char *)&a, sizeof(class AssignmentForOne));
    }
}
void Decide(int i)
{
    printdata p1; //operator overloading is used for print the data
    AssignmentForAll a1;
    AssignmentForOne a2;
    Student s1;
    Lecturer L1;
    if (i == 13)
    {
        p1.print(s1.Studentcount);
    }
    else if (i == 14)
    {
        p1.print(L1.LecturerCount);
    }
}
int GetIdStudent()
{
    int m;
    cout << "Enter the id of student u want to update" << endl;
    cin >> m;
    return m;
}
void Lecturer::FromFile()
{
    Lecturer c;
    Student s;
    AssignmentForAll a;
    AssignmentForOne b;

    /********************/
    char currPass[20];
    char currUsername[20];
    char ch;
    cout << "please enter your username" << endl;
    cin.getline(currUsername, 20);
    cin.ignore();
    int swi;
    /********************/
    ifstream fin;
    fin.open("LecturerData.bin", ios::in | ios::binary);
    fin.read((char *)&c, sizeof(class Lecturer));

    while (!fin.eof())
    {

        if (!strcasecmp(c.userName, currUsername))
        {
            cout << "enter password" << endl;
            cin.getline(currPass, 20);
            cin.ignore();

            if (!strcmp(c.password, currPass))
            {
                cout << "succesful login" << endl;
                cout << endl;

                do
                {
                    cout << "enter 1 assigning assignment to all" << endl;
                    cout << "enter 2 for assigning for one" << endl;
                    cout << "enter 3 for deleteing all the individual assignment u assigned" << endl;
                    cout << "enter 4 for deleteing All the  assignment u assigned For All" << endl;
                    cout << "enter 5 for removing the saved student from the system" << endl;
                    cout << "enter 6 for removing the saved teacher from the system" << endl;

                    cout << "enter 7 for update the individual assinment" << endl;
                    cout << "enter 8 for update the sectionwise assignment" << endl;
                    cout << "enter 9 total no of student or teachers" << endl;
                    cout << "For counting the no. of student and teachers registers in our system" << endl;
                    cout << "enter 10 for exit the program" << endl;
                    cout << "enter your choice" << endl;
                    cin >> swi;
                    cin.ignore();
                    switch (swi)
                    {
                    case 1:

                        a.storeDataInFile();
                        break;
                    case 2:
                        b.storeDataInFile();
                        break;
                    case 3:
                        DeleteDataForOne();
                        break;
                    case 4:
                        DeleteDataForAll();
                        break;
                    case 5:
                        Removestudent r;
                        r.RemoveStudent();
                        break;
                    case 6:
                        r.RemoveTeacher_();
                    case 8:
                        s.deleteSectionassignment(a.getSec());
                        break;
                    case 10:
                        exit(-1);
                    case 7:
                        s.updateData(GetIdStudent());
                        break;
                    case 11:
                        cout << "For student enter 11 and For teacher enter 12";
                        int z;
                        cin >> z;
                        Decide(z);
                        break;
                    default:
                        break;
                    }
                    cout << "enter if u want to continue press y||Y  to end enter n||n" << endl;
                    cin >> ch;
                    cin.ignore(2);
                } while (ch == 'Y' || ch == 'y');
            }
        }
        fin.read((char *)&c, sizeof(class Lecturer));
    }

    if (ch == 'n' || ch == 'N')
    {
        cout << "logged out" << endl;
        now();
    }
    fin.close();
}
inline void Lecturer::display() //inline keyword is used
{
    cout << userName << " " << lecturerId << password << endl;
}
void Lecturer::getDataFromFile()
{
    Lecturer a;
    ifstream fin;
    fin.open("LecturerData.bin", ios::in | ios::binary);
    fin.read((char *)&a, sizeof(class Lecturer));
    while (!fin.eof())
    {
        a.display();
        fin.read((char *)&a, sizeof(class Lecturer));
    }
    fin.close();
}
void Lecturer::storeDataInFile()
{
    LecturerCount++;
    Lecturer a;
    a.getData();
    ofstream fout;
    fout.open("LecturerData.bin", ios::app | ios::binary);
    fout.write((char *)&a, sizeof(class Lecturer));
    fout.close();
}
//defination for password getter
char *Lecturer::getPassword() { return password; }
//defination for userName getter
char *Lecturer::getUserName() { return userName; }
//defination of member function to get details from the user
void Lecturer::getData()
{
    LecturerCount++;
    cout << "enter UserName" << endl;
    cin.getline(userName, 19);
    cout << "enter password" << endl;
    cin.getline(password, 19);
    cout << "enter lecturer id" << endl;
    // cin.getline(lecturerId,10);
    cin >> lecturerId;
    cin.ignore();
}

void now()
{
    Student s;
    Lecturer l;
    cout << "*********************************************\n*************--Class Calender--**************\n*************--Made BY ALI--*****************\n*********************************************\n";
    cout << "Register Student in our system enter 1" << endl;
    cout << "Register Teacher in our system enter 2" << endl;
    cout << "Student Sign in enter 3"
         << endl;
    cout << "Teacher Sign in enter 4"
         << endl;
    cout << "enter 5 for exit"
         << endl;
    int i;
    cin >> i;
    cin.ignore();
    switch (i)
    {
    case 1:
        s.storeDataInFile();
        break;
    case 2:
        l.storeDataInFile();
    case 3:
        s.FromFile();
        break;
    case 4:
        l.FromFile();
        break;
    case 5:
        exit(-1);
    default:
        break;
    }
}
int main()
{
    now();
    return 0;
}
