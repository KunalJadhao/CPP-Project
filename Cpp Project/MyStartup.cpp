#include <iostream>
#include <string>

using namespace std;

class Work {
public:
    int ID;
    string title;
    string description;
    string postedby;

    Work(int id, string t, string d, string p) :
        ID(id), title(t), description(d), postedby(p) {}
    
    void displayDetails() {
        cout << "Work ID: " << ID << endl;
        cout << "Title: " << title << endl;
        cout << "Description: " << description << endl;
        cout << "Posted By: " << postedby << endl;
    }
};

class Applicant {
public:
    string name;
    string password;

    Applicant(string n, string p) : name(n), password(p) {}
};

class Purple {
public:
    void Details() {
        int id;
        string title, description, postedby;

        cout << "Enter Work ID: ";
        cin >> id;
        cin.ignore();  

        cout << "Enter Title: ";
        getline(cin, title);

        cout << "Enter Description: ";
        getline(cin, description);

        cout << "Enter Posted By: ";
        getline(cin, postedby);

        Work P(id, title, description, postedby);
        P.displayDetails();
    }
};

int main() {
    Purple L;
    L.Details();

    return 0;
}
