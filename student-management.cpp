#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

void project();
void addData();
void displayData();
void deleteData();
void getTrash();

class Student
{
    int admissionNo;
    char sname[20];
    char sgender;
    int std;
    float smarks;
    double spercentage;

public:
    void getData();
    void showData();
    int getAdmno()
    {
        return admissionNo;
    }
}s;

int main()
{
    project();
    return 0;
}

void project()
{
    int ch;
    do
    {
        system("cls");//clear screen
        cout<<"******STUDENT MANAGEMENT SYSTEM*******"<<endl;
        cout<<"1. Write student record"<<endl;
        cout<<"2. Read student record"<<endl;
        cout<<"3. Delete sudent record"<<endl;
        cout<<"4. Get deleted record"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<" Enter your choice";

        cin>>ch;

        system("cls");
        switch (ch)
        {
        case 1: addData();
            break;
        case 2: displayData();
            break;
        case 3: deleteData();
            break;
        case 4: getTrash();
            break;
        }
        system("pause");

    } while (ch);   
}

void addData()
{
    ofstream fout;
    fout.open("Stu.txt",ios::out | ios::app | ios::binary);
    s.getData();
    fout.write((char*)&s,sizeof(s));
    fout.close();
    cout<<"*****DATA SUCCESSFULLY SAVED TO FILE*****"<<endl;
}
void displayData()
{
    ifstream fin;
    fin.open("Stu.txt",ios::in | ios::binary);
    while(fin.read((char*)&s,sizeof(s)))
    {
        s.showData();
    }
    fin.close();
    cout<<"*****DATA READING FROM FILE SUCCESSFULLY DONE******"<<endl;
}

void deleteData()
{
    int n,flag=0;
    ifstream fin;
    ofstream fout,tout;
    fin.open("Stu.txt",ios::in|ios::binary);
    fout.open("Temp.txt",ios::out|ios::app|ios::binary);
    fout.open("Trasg.txt",ios::out|ios::app|ios::binary);
    cout<<"Enter admission number: ";
    cin>>n;

    while(fin.read((char*)&s,sizeof(s)))
    {
        if(n==s.getAdmno())
        {
            cout<<"this record"<<n<<"has been sent to trash"<<endl;
            s.showData();
            tout.write((char*)&s,sizeof(s));
            flag++;
        }
        else
        {
            fout.write((char*)&s,sizeof(s));
        }

    }
    fout.close();
    tout.close();
    fin.close();
    if (flag==0)
    {
        cout<<"   "<<n<<"no record found*****"<<endl;
    }
    remove("Stu.txt");
    rename("Temp.txt","Stu.txt");
}

void getTrash()
{
    ifstream fin;
    fin.open("Trash.txt",ios::in|ios::binary);
    while(fin.read((char*)&s,sizeof(s)))
    {
        s.showData();
    }
    fin.close();
    cout<<"****Data reading from trash file succesfully****"<<endl;
}

void Student::showData()
{
    cout<<"***Student Details****"<<endl;
    cout<<"Admisssion no: "<<admissionNo<<endl;
    cout<<"Full name: "<<sname<<endl;
    cout<<"Gender: "<<sgender<<endl;
    cout<<"Class: "<<std<<endl;
    cout<<"Total marks: "<<smarks<<endl;
    cout<<"Percentage: "<<spercentage<<endl;
    cout<<endl;
}

void Student::getData() // will get data from console
{

	cout << "\n\n*******Enter Student Data*******\n";
	cout << "Admission No.: "; cin >> admissionNo;
	cout << "Full Name: "; cin.ignore(); cin.getline(sname, 20);
	cout << "Gender (M/F): "; cin >> sgender;
	cout << "Class: "; cin >> std;
	cout << "Total Marks (/500): "; cin >> smarks;
	cout << endl;
	spercentage = smarks * 100.0 / 500.00;

}




 