#include <iostream>
using namespace std;
int main()
{
    float fq;
    float sq;
    float tq;
    float midterm;
    float Final;
    float qt;
    float Total;

    cout<<"==========QUIZZES=========="<<endl;
    cout<<"Enter fisrt quizz (10) :";
    cin>>fq;
    cout<<"Enter second quizz (10) :";
    cin>>sq;
    cout<<"Enter third quizz (10) :";
    cin>>tq;
    cout<<"==========MID-TERM=========="<<endl;
    cout<<"Enter mid-term (40) :";
    cin>>midterm;
    cout<<"==========FINAL=========="<<endl;
    cout<<"Enter final (50) :";
    cin>>Final;
    qt = (fq+sq+tq)/3;
    cout<<"Quizz total :"<<qt<<endl;
    cout<<"MidTerm:"<<midterm<<endl;
    cout<<"Final:"<<Final<<endl;
    Total = (qt+midterm+Final);
    cout<<"Total:"<<Total<<endl;
    cout<< (Total>=50?"Your score isPASS":"Your score isn'tPASS")<<endl;



    return 0;
}


