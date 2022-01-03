#include<bits/stdc++.h>
using namespace std;
class student{

public:
    map<int,pair<string,float>>mp;
    void putdetails(){
        int n;
 cout<<"Enter the number of student you want in the database"<<endl;
 cin>>n;
        cout<<"Enter details"<<endl;
      for(int i=1; i<=n;i++){
          cout<<"Enter Roll number"<<endl;
          int rol;
          cin>>rol;
          cout<<"Enter name "<<endl;
          string s;
          cin>>s;
          cout<<"Enter marks of student"<<endl;
          float f;
          cin>>f;
          mp[rol]={s,f};
      }
    }
       void deletedetails(int n){
           if(mp.find(n)==mp.end()){
            cout<<"NO SUCH ROLL NUMBER EXITS!!!"<<endl;
           }
           else {  mp.erase(n);
               cout<<"Details deleted successfully!!!"<<endl;}
        }
    void updatedetails(int n){
        if(mp.find(n)==mp.end()){
            cout<<"NO SUCH ROLL NUMBER EXITS!!!"<<endl;
           }
        else{
            cout<<"Update details"<<endl;
            cout<<"Enter updated name "<<endl;
          string s;
          cin>>s;
          cout<<"Enter updated marks of the student"<<endl;
          float f;
          cin>>f;
          mp[n]={s,f};
          cout<<"Details Updated Successfully!!!"<<endl;
        }
    }
      void showdetails(){
          auto it=mp.begin();
          if(mp.size()==0) {cout<<"SORRY, DATABASE IS EMPTY TRY TO PUT SOME DATA!!!"<<endl; return;}
           cout<<"*******STUDENT DATABASE*******"<<endl;
           cout<<endl;
            cout<<"***ROLL NUMBER***"<<"       "<<"***NAME***"<<"       "<<"***MARKS***"<<endl;

         while(it!=mp.end()){


            cout<<"       "<<it->first<<"                  "<<(it->second).first<<"               "<<(it->second).second<<" "<<endl;
            ++it;
         }
      }

};
int main(){   system("color 3E");
    cout<<"*************************STUDENT MANAGEMENT SYSTEM*************************"<<endl;
    cout<<endl;
    string pass="123";
    cout<<"Enter the password to access the Database"<<endl;
    string s;
    cin>>s;
    if(s==pass)
    {

     cout<<"***********************WELCOME TO THE STUDENT DATABASE********************"<<endl;
     cout<<endl;
     cout<<"*******CHOICES*******"<<endl;
 cout<<"1)ENTER THE DETAILS OF STUDENT"<<endl;
 cout<<"2)DELETE THE DETAILS OF STUDENT"<<endl;
 cout<<"3)UPDATE THE DETAILS OF STUDENT"<<endl;
 cout<<"4)SHOW THE DETAILS OF STUDENT"<<endl;
 cout<<"5)EXIT"<<endl;
 student s;
 while(true){

 int ch;
 cout<<endl;
 cout<<"Enter Choice Number"<<endl;
 cin>>ch;
    if(ch==1){  s.putdetails();}
    if(ch==2){  cout<<"Enter the roll number of the student that you want to delete"<<endl; int x;
               cin>>x;
               s.deletedetails(x);}
    if(ch==3)  {cout<<"Enter the roll number of the student that you want to update"<<endl; int x;
               cin>>x;
               s.updatedetails(x);}
    if(ch==4)   {
               s.showdetails();
    }
    if(ch==5) { cout<<"Exiting...";break;}
 }
    }
    else cout<<"WARNING!!!"<<endl<<"YOU HAVE ENTERED WRONG PASSWORD!!!"<<endl<<"PROGRAM TERMINATED..."<<endl;
return 0;
}
