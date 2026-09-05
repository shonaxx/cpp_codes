// program that demonstrates: 
// File Handling (read & write using file streams)  
// Exception Handling using try, catch, and throw 
 
#include <iostream> 
#include <fstream> 
using namespace std; 
 
int main() { 
    ofstream outFile; 
    ifstream inFile; 
    string data; 
 
    try { 
        // Writing to a file 
        outFile.open("student.txt"); 
 
        // Check if file opened successfully 
        if (!outFile) { 
            throw "Error: Unable to open file for writing!"; 
        } 
 
        cout << "Enter data to write into the file: "; 
        getline(cin, data); 
 
        outFile << data << endl; 
        outFile.close(); 
 
        cout << "Data has written successfully.\n"; 
 
        // Reading from the file 
        inFile.open("student.txt"); 
 
        // Check if file opened successfully 
        if (!inFile) { 
            throw "Error: Unable to open file for reading!"; 
        } 
 
        cout << "\nReading data from  your file:\n"; 
 
        while (getline(inFile, data)) { 
            cout << data << endl; 
        } 
 
        inFile.close(); 
    } 
 
    // Catch block for exception handling 
    catch (const char* msg) { 
        cout << msg << endl; 
    } 
 
    return 0; 
}