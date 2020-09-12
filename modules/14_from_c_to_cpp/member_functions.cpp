#include <stdio.h>

struct Connection { // C++ doesn't need "typedef" when defining structs
    // represents some SQL database connection
    int SomeState;

    // can now define "member functions" belonging to the struct
    void Open(char * filename) {
        // can reference the struct itself as `this` (similar to `self` in python)
        this->SomeState = 1; // this is equivalent to `(*this).Somestate = 1`
    }

    void Execute(char * statement) {
    }

    void Close() {
        // you can even refer to the struct attributes without invoking `this`
        SomeState = 0; // equivalent to `this->SomeState = 0`
    }
};


int main() {
    Connection db;
    db.Open("C:\\temp\\stuff.db");
    db.Execute("CREATE TABLE Hens (ID int, Name test)");
    db.Close();
}