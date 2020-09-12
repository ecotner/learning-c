#include <stdio.h>

class Connection { // `class` is very similar to `struct`
// one of the main differences is that `class` assumes members
// are "private" by default, and `struct` assumes "public" by
// default. we can always be explicit though

private: // "private" means that this member is not accessable
         // from outside the class. i.e. `db.SomeState` does not
         // work
    int SomeState;

public: // "public" means that this member IS accessable from
        // outside the class
    Connection() {
        SomeState = 0;
        printf("Connection constructor\n");
    }

    void Open(char * filename) {
        this->SomeState = 1;
    }

    void Execute(char * statement) {
    }

    void Close() {
        SomeState = 0;
    }

    ~Connection() {
        Close();
        printf("Connection destructor\n");
    }
};

int main() {
    Connection db;
    db.Open("C:\\temp\\stuff.db");
    db.Execute("CREATE TABLE Hens (ID int, Name test)");
    // db.SomeState; // this member is now not accessible because of the "private" declaration
}