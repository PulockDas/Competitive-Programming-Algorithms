#include <bits/stdc++.h>
using namespace std;

struct Node{
    string name;
    int roll, marks;
};

bool compareMarks(Node a, Node b)
{

    if(a.marks == b.marks)
        return (a.roll < b.roll);
    else
        return (a.marks > b.marks);
}

int main ()
{
    int n;
    cin >> n;
    Node students[n];

    for(int i=0; i<n; i++)
    {
        cin >> students[i].roll >> students[i].name >> students[i].marks;
    }

    sort(students, students+n, compareMarks);

    printf("Roll | Name       | Marks\n-------------------------\n");

    for(int i=0; i<n; i++){

        if(students[i].roll < 10) cout << "   ";
        else cout << "  ";

        cout << students[i].roll << " | " << students[i].name;

        int num = 11-students[i].name.length();
        for(int k=0; k<num; k++) cout << " ";

        cout << "| "<< students[i].marks<<"\n";
    }
    return 0;
}
