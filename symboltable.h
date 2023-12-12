// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023

// Necessary includes
#include <string>
#include <vector>
using namespace std;

class SymbolTable {
public:
    SymbolTable() {}
    void insert(string variable, double value);
    double lookUp(string variable) const;
    void clear();  // Add the clear method declaration

private:
    struct Symbol {
        Symbol(string variable, double value) {
            this->variable = variable;
            this->value = value;
        }
        string variable;
        double value;
    };
    vector<Symbol> elements;
};
