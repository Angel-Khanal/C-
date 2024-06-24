#include<iostream>
using namespace std;
class Distance
{
    float feet,inch;
    public:
    void input(){
        cout<<"Enter distance in feet"<<endl;
        cin>>feet;
        cout<<"enter distance in inch"<<endl;
        cin>>inch;
    }
        void output(){
            cout<<"the distance is "<<feet<<"'"<<inch<<endl;
        }
    Distance sum(Distance d){
         Distance temp;
         temp.feet=feet+d.feet;
         temp.inch=inch+d.inch;
         if(temp.inch>=12)
         {
            temp.feet=temp.feet+int(temp.inch/12);
            temp.inch=temp.inch-int(temp.inch/12)*12;
         }
         return temp;
    }
};
int main()
{
     Distance d1,d2,d3;

    d1.input();
    d2.input();
    d3=d1.sum(d2);
    d3.output();


}