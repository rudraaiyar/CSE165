#include <math.h>
#include <stdlib.h>
using namespace std;

class Time{
    int hours, minutes, seconds;
public:
    Time(int h, int m, int s){
        seconds = s;
        minutes = m;
        hours = h;
    }
    int getMinutes(){
        return minutes;
    }
    int getSeconds(){
        return seconds;
    }
    int getHours(){
        return hours;
    }
    void setMinutes(int m){
        minutes = m;
    }
    void setSeconds(int s){
        seconds = s;
    }
    void setHours(int h){
        hours = h;
    }
    void add(const Time&t){
        hours += t.hours;
        minutes += t.minutes;
        seconds += t.seconds;
        if(hours > 24){
            hours -= 23;
        }
        if(minutes > 59){
            minutes -= 59;
            hours ++;
        }
        if(seconds > 59){
            seconds -= 60;
        }
    }
    
    //////continueeeeeee part 2

    /*          12
            9       3
                6
    */
    void getAngles(float&a, float&b, float&c){
        
        if(getSeconds() > 15 && getSeconds() < 45){
            c = -1*((getSeconds()-15.0f)/60.0f)*M_PI*2;
        }else if ((getSeconds() >= 0 && getSeconds() <= 15)||(getSeconds() >=45 && getSeconds() < 60)){
            int asec = getSeconds() + 15;
            
            if(asec > 59){
                asec -= 60;
            }
            c = M_PI - ((asec)/30.0f)*M_PI;
        }
        
        
        if(getMinutes() > 15 && getMinutes() < 45){
            b = -1*((getMinutes()-15.0f)/60.0f)*M_PI*2;
        }
        else if ((getMinutes() >= 0 && getMinutes() <= 15)||(getMinutes() >=45 && getMinutes() < 60)){
            int amin = getMinutes() + 15;
            if(amin > 59){
                amin -= 60;
            }
            b = M_PI - ((amin)/30.0f)*M_PI;
        }
        
        float ahr = getHours() + getMinutes()/60.0f;

        if(ahr > 3 && ahr < 9){
            
            float scale = (ahr + 9);
            if(scale > 11){
                scale -= 12;
            }
            a = -1*(scale/12.0f)*2*M_PI;
        }
        else if ((ahr >= 0 && ahr <= 3)||(ahr >=9 && ahr < 12)){
            
            float scale = (ahr - 3);
            
            if (scale > 11){
                scale -= 12;
            }
            if(scale == 0){
                a = 0;
            }
            else{
                a = 2*M_PI - (scale/12.0f)*2*M_PI;
            }
        }
    }
    
    //continueeee part 3
    
    //use getangles
    //x cos     y sin
    // 
    
    void getHourCoords ( float & x, float& y ){
        float a_h = 0, a_m = 0, a_s = 0;
        getAngles(a_h, a_m, a_s);
        x = cos(a_h);
        y = sin(a_h);
    }
    
    void getMinuteCoords ( float& x, float& y ){
        float a_h = 0, a_m = 0, a_s = 0;
        getAngles(a_h, a_m, a_s);
        x = cos(a_m);
        y = sin(a_m);
    }
    
    void getSecondsCoords ( float& x, float& y ){
        float a_h = 0, a_m = 0, a_s = 0;
        getAngles(a_h, a_m, a_s);
        x = cos(a_s);
        y = sin(a_s);
    }
    
};
