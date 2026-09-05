//Lab 2

#include <iostream>
using namespace std;

int main(){
    cout << "Name : Sanket Madhav Sasane" << endl;
    cout << "Roll No : ACT_39" << endl;
    cout << "Branch : Computer Technology" << endl;
    cout << "Batch : A2" << endl;

    cout << "==================================================" << endl;
    int choice;
     //========================================
     //SWITCH SATEMENT
     //========================================
    cout << "Select an option :" << endl;
    cout << "1. For Loop (print 1 to 5)" << endl;
    cout << "2. While Loop (print 5 to 1)" << endl;
    cout << "3. Do-while Loop (Print even numbers up to 10)" << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    switch(choice){

        case 1:{
            cout << "\n Using For Loop" << endl;
    
            //FOR LOOP        
            for(int i = 1; i <= 5; i++){
                //IF-ELSE INSIDE LOOP
                if(i % 2 == 0)
                    cout << i << " is Even" << endl;
                else
                    cout << i << " is Odd" << endl;
            }
            break;
        }
        case 2:{
            cout << "\nUsing While Loop" << endl;
            int i = 5;
            while(i >= 1){
                cout << i << endl;
                i--;
            }
            break;
        }
        case 3:{
            cout << "\nUsing Do-While Loop" << endl;
            int i = 2;
            do{
                cout << i << endl;
                i += 2;
            }
            while(i <= 10);
            break;
        }
        default:
            cout << "Invalid Choice!";
    }
    return 0;
}