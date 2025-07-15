// add two times

#include<iostream>
    using namespace std;

    class Time {
        int hour;
        int minute;
        int second;

    public:
        Time() {
            hour = 0;
            minute = 0;
            second = 0;
        }
        Time(int h, int m, int s) {
            hour = h;
            minute = m;
            second = s;
         }

        void display();
        void addTime(Time T1, Time T2);
    };

    int main() {

        Time time1(1, 65, 65);
        Time time2(1, 0, 0);
        
        Time totalTime;

        totalTime.addTime(time1, time2);

        totalTime.display();

        return 0;
    }
    
    void Time:: display() {
         cout<<"Time is : "<<hour<<" Hours "<<minute<<" Minutes and "<<second<<" Seconds"<<endl;
    }

    void Time:: addTime(Time T1, Time T2) {
        second = T1.second + T2.second;
        minute = T1.minute + T2.minute + (second/60);
        hour = T1.hour + T2.hour + (minute/60);
        minute = minute%60;
        second= second%60;

    }



