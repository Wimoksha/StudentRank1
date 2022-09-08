
#include <iostream>
#include <fstream>
#include <string>


using namespace std;
# define MAX 100
class Biology {


public:
    int b, c, p, tot;
    
   
   
    void input()
    {
        
        cout << "Enter your marks of Biology:";
        cin >> b;
        cout << "Enter your marks of Physics:";
        cin >> p;
        cout << "Enter your marks of Chemistry:";
        cin >> c;
        tot = b + c + p;
        cout << "Your total is :" << tot << endl;
        ofstream outf("Students.txt");
        outf << tot << "\n";
        outf.close();
        cout << endl;
    }
    
   

};
class Maths {
public:

    int m, c, p,tot;
    void input()
    {
        
        cout << "Enter your marks of Maths:";
        cin >> m;
        cout << "Enter your marks of Physics:";
        cin >> p;
        cout << "Enter your marks of Chemistry:";
        cin >> c;
        tot = m + c + p;
        cout << "Your total is :" << tot << endl;
        cout << endl;
        
    }
   
};
int main()
{
    int n,temp;
    string s;
    int arr[40];
    int i, j;
    string name[67];
    string v;
    cout << "Enter the number of students:";
    cin >> n;
    cout << endl;
    for (i = 0;i < n;i++)
    {
        cout << "Enter your name:";
        cin >> name[i];
        cout << "Enter your stream:";
        cin >> s;
        if (s == "Bio" || s == "Maths")
        {
            if (s == "Bio")
            {

                Biology obj;
                obj.input();
                arr[i] = obj.tot;
                
               
            }
            else
            {
                Maths obj;
                obj.input();
                arr[i] = obj.tot;
            }

            
        }

        else {
            cout << "Wrong input!";

        }
    }
    for (i = 0;i < n;i++)
    {
        for (j = i + 1;j < n;j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                v = name[i];
                arr[i] = arr[j];
                name[i] = name[j];
                arr[j] = temp;
                name[j] = v;
            }
        }
    }
    int c = n;
    cout << "------------------------------Your Rank-----------------------------------------------------" << endl;
    for (i = 0;i < n;i++)
    {
       
        cout << "The rank of " <<name[i]<<" ,the student with total of " << arr[i]<< " is "<<c<<endl;
        ofstream outf("Students.txt");
        outf << "The rank of " << name[i] << " ,the student with total of " << arr[i] << " is " << c << endl;
        outf.close();
        c--;
    }
        cout << endl;
    return 0;
}

