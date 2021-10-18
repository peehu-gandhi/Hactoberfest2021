#include<iostream>
using namespace std;
class date
{
        private:
                        int dd,mm,yyyy;
        public:
                void input();
                void display();
};
void date::input()
{
        cout<<"Enter Year:";
        cin>>yyyy;
        cout<<"Enter Month:";
        cin>>mm;
        cout<<"Enter Day:";
        cin>>dd;
}
void date::display()
{
        cout<<"Today's Date in dd/mm/yyyy format:"<<dd<<"/"<<mm<<"/"<<yyyy;
}
int main ()
{
 date d;
 d.input();
 d.display();
}
