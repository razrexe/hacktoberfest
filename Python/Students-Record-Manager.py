
'''
[Students Record Manager]:
A system to maintain student's record.
    A student has following attributes:
    Name, Roll number, Year, Department, CGPA.
    This system provides following functionalities:
    A. Add a student
    B. Update information of a student (value of any attribute could be changed)
    C. Delete a student
    D. Search a student on the basis of a name or roll number
    E. Display data of all the students
    F. Display data of students belonging to the same department
    G. Display data of student having CGP less than n, take n as input.
    H. Display data of student having CGP greater than or equal to n. take n as input.
    I. Display count of students enrolled in a given year Y. Take Y as input.
    J. Display data of student having roll number R. Take R as input.
    K. Display count of Student's objects.
    L. Exit the program.
    
'''

class Student:
    # intitially declared class variable with a value -1 to compensate for the first object
    ob_count = -1
    # Constructor
    def __init__(self, name, rollno, year, department, cgpa):
        self.name = name
        self.rollno = rollno
        self.year = year
        self.department = department
        self.cgpa = cgpa
        Student.ob_count += 1


    # Function to create and append new student
    def accept(self, Name, Rollno, Year, Department, Cgpa):
        Name = input('Name : ')
        Rollno = int(input('Roll : '))
        Year = int(input('Year : '))
        Department = input('Dept : ')
        Cgpa = float(input('Cgpa : '))
        obj = Student(Name, Rollno, Year, Department, Cgpa)
        ls.append(obj)


    # Function to display student details
    def display(self, obj):
        print("Name : ", obj.name)
        print("RollNo : ", obj.rollno)
        print("Year : ", obj.year)
        print("Department : ", obj.department)
        print("Cgpa : ",obj.cgpa)
        print("\n")


    # Search Function
    def search(self, value):
        for i in range(len(ls)):
            try:
                for i in range(len(ls)):
                    if ls[i].rollno == int(value):
                        return i
                    else:
                        return -1
            except:
                for i in range(len(ls)):
                    if ls[i].name == value:
                        return i
                    else:
                        return -1


    # Delete Function
    def delete(self,value):
        i = obj.search(value)
        if i != -1:
            del ls[i]
        else:
            print('The given student is not present in the list')

    # Update Function
    def update(self, rn, parameter):
        i = obj.search(rn)
        if parameter == 'roll no':
            new = int(input('Enter new value: '))
            ls[i].rollno = new
        elif parameter == 'name':
            new = input('Enter new value: ')
            ls[i].name = new
        elif parameter == 'year':
            new = int(input('Enter new value: '))
            ls[i].year = new
        elif parameter == 'cgpa':
            new = float(input('Enter new value: '))
            ls[i].cgpa = new
        else:
            new = input('Enter new value: ')
            ls[i].department = new


# Create a list to add Students
ls = []
# an object of Student class
obj = Student('', 0, 0, '', 0)

while True:
    #Classic menu driven program , here we go!
    print("\nOperations used ")
    print("\nA. Add a student\nB. Update information of a student\nC. Delete a student")
    print("D. Search a student on the basis of a name or roll number\nE. Display data of all the students")
    print("F. Display data of students belonging to the same department\nG. Display data of student having CGP less than n.")
    print("H. Display data of student having CGP greater than or equal to n.\nI. Display count of students enrolled in a given year Y")
    print("J. Display data of student having roll number R.\nK. Display count of Student's objects.\nL. Exit the program.")
    ch = input("Enter choice: ").lower()

    if(ch == 'a'):
        n = int(input('How many students : '))
        for i in range(n):
            obj.accept("A", 1, 100, 'me', 100)

    elif(ch == 'b'):
        rn = input('Which roll number or name to update details: ')
        i = obj.search(rn)
        if i == -1:
            print('Student not found in the list')
        else:
            print('Parameters available: roll no ,name , year , department , cgpa ')
            parameter = input('Which parameter to change: ')
            obj.update(rn, parameter)
            print("List after updation")
            for i in range(len(ls)):
                obj.display(ls[i])

    elif(ch == 'c'):
        value = input('Which roll no. or name to delete ?: ')
        obj.delete(value)
        print("List after deletion")
        for i in range(len(ls)):
            obj.display(ls[i])

    elif(ch == 'd'):
        rn = input('Enter the roll no or name : ')
        print("\nStudent Found, ")
        s = obj.search(rn)
        if s != -1:
            obj.display(ls[s])
        else:
            print('The given student is not present in the list')

    elif(ch == 'e'):
        print("\n")
        print("List of Students\n")
        for i in range(len(ls)):
            obj.display(ls[i])

    elif(ch == 'f'):
        branch = input('Which department to show: ')
        for i in range(len(ls)):
            if ls[i].department == branch:
                obj.display(ls[i])

    elif(ch == 'g'):
        n = float(input('Enter CGPA: '))
        for i in range(len(ls)):
            if ls[i].cgpa < n:
                obj.display(ls[i])
                
    elif(ch == 'h'):
        n = float(input('Enter CGPA: '))
        for i in range(len(ls)):
            if ls[i].cgpa >= n:
                obj.display(ls[i])

    elif(ch == 'i'):
        count = 0
        Y = int(input('Enter year Y: '))
        for i in range(len(ls)):
            if ls[i].year == Y:
                count += 1
        print(f'{count} students were enrolled that year')

    elif(ch == 'j'):
        R = int(input('Enter roll number R: '))
        for i in range(len(ls)):
            if ls[i].rollno == R:
                obj.display(ls[i])
            else:
                print('The given student is not present in the list')

    elif(ch == 'k'):
        ob_count = Student.ob_count
        print(ob_count) # I dont know what else

    elif(ch == 'l'):
        print("Thank You !")
        break

    else:
        print('Please enter a valid operation')
