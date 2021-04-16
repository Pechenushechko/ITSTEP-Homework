#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <stdio.h>

using namespace cv;
using namespace std;

class My_video {
public:
   int init();
   int checker();
   int checkpoint(/*int checkpoint*/);
   void show();
   

Mat frame;
VideoCapture cap;
private:
    int deviceID;
    int apiID;
    int check_point;
};

int My_video::init() {
    int deviceID = 0;            
    int apiID = cv::CAP_ANY; 
    return this->deviceID, apiID;
}

int My_video::checker(){
if (!cap.isOpened()) {
        cerr << "ERROR! Unable to open camera\n";
        check_point = 1;
    }
        return this->check_point;
}

int My_video::checkpoint() {
    if (check_point == 1) {
        exit(0);
    }
}

void My_video::show() {
    cout << "Start grabbing" << endl
        << "Press any key to terminate" << endl;
    for (;;)
    {
        
        cap.read(frame);
       
        if (frame.empty()) {
            cerr << "ERROR! blank frame grabbed\n";
            break;
        }
        
        imshow("Live", frame);
        if (waitKey(5) >= 0)
            break;
    }
}

int main(int, char**)
{
    
    My_video ope;
    ope.init();
    ope.cap.open(ope.init());
    ope.checker();
    ope.checkpoint();
    while(true){
        ope.show();
    }
    
    
    return 0;
}
