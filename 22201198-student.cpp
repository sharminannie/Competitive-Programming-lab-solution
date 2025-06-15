#include<bits/stdc++.h>
using namespace std;
struct student
{
    string fname,lname,course;
    int age,id,fees;
    float gpa;
    student():fname(""),lname(""),course(""),age(0),id(-1),gpa(0),fees(0){}

    void show_attributes()
    {
         cout<<"\n\nStudent's name: "<<fname<<" "<<lname<<"\nCourse: "<<course<<"\nAge: "<<age<<"\nID: "<<id<<"\nGPA: "<<gpa<<"\nTution fees: "<<fees<<"\n\n";
    }
   void update_name(string nfname,string nlname)
    {
        fname = nfname;
        lname = nlname;
    }
    void update_age(int new_age)
    {
       age=new_age;
    }

     void show_tutionfees()
    {
        cout<<"Tution fees is : "<<fees<<endl;
    }
     void update_amount(int new_amount)
    {
        fees=new_amount;
    }

};
void welcome()
{
    cout<<"\t\t\t\tStudent Record \t\t\t\t"<<endl;
}
int find_acc(struct student acc[],int sz,int key)
{
   for(int j=0;j<sz;j++)
   {
       if(acc[j].id==key)
       {
           return j;
       }
   }
   return -1;
}
int main()
{
    struct student b[50];
    int opt1,opt2,u1=1234,p1=7519,u2,p2,id,x,idx,opt_update,age,Fees;
    string fname,lname,course;
    float GPA;
    int i=0;
    b[i].fname="Misir",b[i].lname="Ali",b[i].age=20,b[i].id=23201999,b[i].course="Computer Science",b[i].gpa=3.85,b[i].fees=20250;i++;
    b[i].fname="annie",b[i].lname="any",b[i].age=21,b[i].id=23201991,b[i].course="Computer Science",b[i].gpa=3.82,b[i].fees=20250;i++;
    b[i].fname="afrah",b[i].lname="amin",b[i].age=22,b[i].id=23201992,b[i].course="Computer Science",b[i].gpa=3.86,b[i].fees=20250;i++;

    welcome();

    cout<<"<<--Please log in-->>"<<endl;
    cout<<"Enter user id: ";
    cin>>u2;
    cout<<"Enter user password: ";
    cin>>p2;
   if((u1==u2) && (p1==p2))
   {
       while(true)
       {
        cout<<"\nPlease select an option from the menu below.\n";
        cout<<"\n0.Exit\n1.Proceed with app\n2.Registration"<<endl;

        cin>>opt1;
        if(opt1==0)
        {
            cout<<"<<----------------------Program Terminated------------------------->>"<<endl;
        }
        else if(opt1==1)
        {
            cout<<"Enter your ID Number: ";
            cin>>id;
            idx=find_acc(b,50,id);
            if(idx==-1)
            {
                 cout<<"Account not found\nTry again"<<endl;
            }
            else
            {
                cout<<"\nPlease select an option from the menu below.\n";
                cout<<"\n\n1.Show Student Information\n2.Update Student name\n3.Update Student Age\n4.Pay Tution Fee\n5.Add Tution Fee\n6.Show Tution Fee\n";
                cout<<"Press: ";
                cin>>opt2;
                if(opt2==1)
                {
                    b[idx].show_attributes();
                }
                else if(opt2==2)
                {
                     cout<<"Enter first name: ";
                        cin>>fname;
                     cout<<"Enter last name: ";
                     cin>>lname;
                    b[idx].update_name(fname,lname);
                }
                else if(opt2==3)
                {
                     cout<<"Enter new age: ";
                        cin>>age;
                        b[idx].update_age(age);
                }
                else if(opt2==4)
                {
                      cout<<"Enter amount: ";
                    cin>>Fees;
                    int namnt=b[idx].fees-Fees;
                    b[idx].update_amount(namnt);
                }
                else if(opt2==5)
                {
                    cout<<"Enter amount: ";
                    cin>>Fees;
                    int namnt=b[idx].fees+Fees;
                    b[idx].update_amount(namnt);
                }
                else if(opt2==6)
                {
                   b[idx].show_tutionfees();
                }
                 else
                    {
                        cout<<"Invalid input"<<endl;
                    }
            }
        }
        else if(opt1==2)
        {
            cout<<"Enter first name: ";
              cin>>fname;
              cout<<"Enter last name: ";
              cin>>lname;

              b[i].update_name(fname,lname);
              cout<<"Enter your age: ";
              cin>>age;
              b[i].age=age;
            cout<<"Enter your ID(Any):";
            cin>>x;
            b[i].id=x;
            cout<<"Enter Course name: ";
            cin>>course;
            cout<<"Enter gpa: ";
            cin>>GPA;
            cout<<"Fees: ";
            cin>>Fees;

            cout<<"\n";
            i++;

        }
        else
        {
             cout<<"Invalid input"<<endl;
        }



       }

   }
   else
   {
       cout<<"Wrong Password"<<endl;
   }
   return 0;

}
