#include<iostream>
#include<string>
using namespace std;
int main(){
    int age,tall,sap;
    string stat;
    cout << "Enter your age: ";
    cin >> age;
    if(age<=20){
        cout << "Enter your height: ";
        cin >> tall;
        if(tall<160)    stat = "UNFRIEND";
        else if(tall<175){
            stat = "FRIEND";
        }
        else{
            cout << "Enter your property: ";
            cin >> sap;
            if(sap > 69000000)  stat = "MARRIED";
            else stat = "ONE-NIGHT-STAND";
            }
        } 
    else if(age<30){
        cout << "Enter your property: ";
        cin >> sap;
        if(sap > 10000000)  stat = "BEST FRIEND";
        else    stat = "UNFRIEND";
    }
    else    stat = "UNFRIEND";
    cout << "Your status = " << stat;
    
}
/*
"Enter your age: "
"Enter your height: "
"Enter your property: "
"Your status = "
"UNFRIEND"
"FRIEND"
"BEST FRIEND"
"ONE-NIGHT-STAND"
"MARRIED"
*/
