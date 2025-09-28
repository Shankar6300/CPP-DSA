#include<bits/stdc++.h>
using namespace std;
void addstudent(){
    string name;
    int rollno;
    float marks;
    cout<<"Enter student Name: ";
    cin>>name;
    cout<<"Enter rollNo: ";
    cin>>rollno;
    cout<<"Enter the Marks: ";
    cin>>marks;
    ofstream outfile("students.txt",ios::app) ;
    if(!outfile){
        cout<<"Error while opening file"<<endl;
        return;
    }
    outfile<<name<<" "<<rollno<<" "<<marks<<endl;
    outfile.close();
    cout<<"Student added succesfully!"<<endl;

}
void displaystudent(){
    ifstream infile("students.txt");
    if(!infile){
        cout<<"No Student Records  found"<<endl;
        return;
    }
    string name;
    int rollno;
    float marks;
    while(infile >> name >> rollno >> marks){
        cout<<"Name: "<<name<<","<<" RollNo: "<<rollno<<","<<" Marks: "<<marks<<endl;
    }
    infile.close();
}
void searchstudent(){
    ifstream infile("students.txt");
    if(!infile){
        cout<<"student record not found"<<endl;
        return;
    }
    int targetrollno;
    cout<<"Enter rollno to search: ";
    cin>>targetrollno;
    bool found=false;
    string name;
    int rollno;
    float marks;
    while(infile >> name >> rollno >> marks){
        if(rollno==targetrollno){
            cout<<"\nStudent Found!"<<endl;
            cout<<"Name: "<<name<<","<<" Rollno: "<<rollno<<","<<" Marks: "<<marks<<endl;
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"Student with rollno "<<targetrollno<<" not found!"<<endl;
    }
    infile.close();

}

void deletestudent(){
    ifstream infile("students.txt");
    if(!infile){
        cout<<"Student record not found"<<endl;
        return;
    }
    int targetrollno;
    cout<<"Enter rollno to delete: ";
    cin>>targetrollno;
   
    ofstream outfile("temp.txt");
    
    string name;
    int rollno;
    float marks;
    bool deleted = false;
    while(infile >> name >> rollno >> marks){
        if(rollno==targetrollno){
            cout<<"Student Record of roll: "<<rollno<<endl;
            deleted=true;
            continue;
        }
        outfile << name << " "<<rollno<< " " << marks<<endl;
    }
    infile.close();
    outfile.close();
    remove("students.txt");
    rename("temp.txt","students.txt");
    if(deleted){
        cout<<"Student Record with target rollno Deleted succesfully!"<<endl;
    }
    else{
        cout<<"Student with target roll no "<<targetrollno<<" Not found!"<<endl;
    }

}

int main(){
    int choice;
    do{
        cout<<"\n=======Student Record Manager=========\n";
        cout<<"1. Add Student\n";
        cout<<"2. Display Students\n";
        cout<<"3. Search Student\n";
        cout<<"4. Delete Student\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1 :
               addstudent();
               break;
            case 2:
               displaystudent();
                break;
            case 3:
            searchstudent();
            break;
            case 4:
            deletestudent();
            break;
            case 5:
            cout<<"Exiting Program....\n";
            break;
            default:
            cout<<"Invalid choice\n";
            break;
        }
    }
        while(choice!=5);

    return 0;
    
    
}