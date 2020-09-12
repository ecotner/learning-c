#include <stdio.h>

struct Connection {
    int SomeState;

    // this defines a "constructor" that is called whenever the object is initialized
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

    // this defines a "destructor" that is called whenever the object goes out of scope
    ~Connection() {
        Close();
        printf("Connection destructor\n");
    }
};

int main() {
    Connection db;
    db.Open("C:\\temp\\stuff.db");
    db.Execute("CREATE TABLE Hens (ID int, Name test)");
    // db.Close(); // don't need this anymore because of destructor
}