#include <iostream>
using namespace std;

//University Class
class CookedUniversity {
public:
    int courseNumber = 0;
    string courseID = "No ID Number Available";
    int numCredit = 0;
    int sectNum = 0;
    string days = "No Days Selected";
    string time = "No Time Selected";
    string room = "No Room Selected";
    string building = "No Building Selected";
    int maxcourseEnroll = 0;
    string campus = "No Campus Selected";
    int numStudents = 0;
    int studentID = 0;
    string courseStatus = "Course Status Not Available";
    string instructor = "No Instructor Selected";

    void courseNumberFunc(int courseNo, string idNo, int section);
    void numCreditFunc(int numCred);
    void daystimeFuct(string courDays, string courTime);
    void courseRoom(string courseRoom, string courseBuilding);
    void maxcourseEnrollFunc(int maxEnroll);
    void campusFunc(string campusLocation);
    void instructorFunc(string professor);
    void studentinfoFunc(int studEnroll, int stuID);
    void coursestatusFunc(string statusEnroll);
    void Print();//tester function
};

//Functions that passes the variables
void CookedUniversity::courseNumberFunc(int courseNo, string idNo, int section) {
    courseNumber = courseNo;
    courseID = idNo;
    sectNum = section;
}
void CookedUniversity::numCreditFunc(int numCred) {
    numCredit = numCred;
}
void CookedUniversity::daystimeFuct(string courDays, string courTime) {
    days = courDays;
    time = courTime;
}
void CookedUniversity::courseRoom(string courseRoom, string courseBuilding) {
    room = courseRoom;
    building = courseBuilding;
}
void CookedUniversity::maxcourseEnrollFunc(int maxEnroll) {
    maxcourseEnroll = maxEnroll;
}
void CookedUniversity::campusFunc(string campusLocation) {
    campus = campusLocation;

}
void CookedUniversity::instructorFunc(string professor) {
    instructor = professor;
}
void CookedUniversity::studentinfoFunc(int studEnroll, int stuID) {
    numStudents = studEnroll;
    studentID = stuID;
}
void CookedUniversity::coursestatusFunc(string statusEnroll) {
    courseStatus = statusEnroll;
}

//Prints out input from parameters
void CookedUniversity::Print() {

    cout << endl;
    cout << "Course Number: " << courseNumber << endl;
    cout << "Department Course ID: " << courseID << endl;
    cout << "Section Number: " << sectNum << endl;
    cout << "Credit Numbers: " << numCredit << endl;
    cout << "Days It's Available: " << days << " & " << "Times It's Available: " << time << endl;
    cout << "Room Number: " << room << " & " << "Building: " << building << endl;
    cout << "Max Enrollment: " << maxcourseEnroll << endl;
    cout << "Campus Location: " << campus << endl;
    cout << "Instructor Name: " << instructor << endl;
    cout << "Students Enrolled: " << numStudents << " & " << "Student ID:" << studentID << endl;
    cout << "Course Status: " << courseStatus << endl;
}

int main() {
    string userInput;
    CookedUniversity mycoursenumber;

    while (userInput != "done") {
        cout << "Input 'done' to stop the course registration entirely." << endl;
        cout << "Welcome to Cooked University." << endl;

        // Displaying menu option
        cout << "Type a number option:" << endl;
        cout << "0. Set Course Number" << endl;
        cout << "1. Set Number of Credits" << endl;
        cout << "2. Set Days and Time" << endl;
        cout << "3. Set Course Room and Building" << endl;
        cout << "4. Set Maximum Course Enrollment" << endl;
        cout << "5. Set Campus Location" << endl;
        cout << "6. Set Instructor Name" << endl;
        cout << "7. Set Student Information" << endl;
        cout << "8. Set Course Status" << endl;
        cout << "9. Print Course Information" << endl;
        cout << "Enter your choice: ";
        cin >> userInput;

        // Switch statement to handle user input
        switch (userInput[0]) {
        case '0':
            mycoursenumber.courseNumberFunc(10, "CS101", 2);
            cout << endl;
            break;
        case '1':
            mycoursenumber.numCreditFunc(3);
            cout << endl;
            break;
        case '2':
            mycoursenumber.daystimeFuct("Monday", "9:00 AM");
            cout << endl;
            break;
        case '3':
            mycoursenumber.courseRoom("Room 101", "Main Building");
            cout << endl;
            break;
        case '4':
            mycoursenumber.maxcourseEnrollFunc(30);
            cout << endl;
            break;
        case '5':
            mycoursenumber.campusFunc("Downtown");
            cout << endl;
            break;
        case '6':
            mycoursenumber.instructorFunc("Dr. Smith");
            cout << endl;
            break;
        case '7':
            mycoursenumber.studentinfoFunc(25, 123456);
            cout << endl;
            break;
        case '8':
            mycoursenumber.coursestatusFunc("Open for Enrollment");
            cout << endl;
            break;
        case '9':
            mycoursenumber.Print();
            cout << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
            break;
        }//switch loop
    }//while loop
    return 0;
}
