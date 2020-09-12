#include <stdio.h>


class Connection {
    int SomeState;

public:
    Connection() {
        SomeState = 0;
        printf("Connection constructor\n");
    }

    // the filename variable does not need to change during execution of this method
    // so we can mark it as `const`
    void Open(const char * filename) {
        filename = "asdf";
        this->SomeState = 1;
    }

    // this method does not modify any internal state of the `Connection` object, so
    // we can mark it as const as well (in addition to the const `statement` arg)
    const void Execute(const char * statement) {
        printf("executing statement \"%s\"\n", statement);
    }

    void Close() {
        SomeState = 0;
    }

    ~Connection() {
        Close();
        printf("Connection destructor\n");
    }
};

const void PrepareSchema(Connection & db) {
    db.Execute("create table ...");
}

int main() {
    Connection db;
    PrepareSchema(db);
    db.Open("C:\\temp\\stuff.db");
    db.Execute("CREATE TABLE Hens (ID int, Name test)");
}