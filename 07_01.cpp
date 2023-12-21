#include <opencv2/opencv.hpp>
int main() 
{
    // (1)：加载并显示一张图像，等待键盘输入
    cv::Mat image = cv::imread("path/to/your/image.jpg"); // 用户自主定义路径后读取图像文件
    if (image.empty()) 
    {
        std::cerr << "错误：无法加载图像！" << std::endl;
        return -1;
    }

    cv::imshow("图像", image);//显示图像窗口
    int key = cv::waitKey(0);//等待键盘输入，0表示等待任意键，返回ASCII码

    if (key == 27) 
    {   //ASCII码27对应'Esc'键
        cv::destroyAllWindows();//关闭所有OpenCV窗口
        return 0;
    }

    //(2)：加载一个视频，使用while循环读取视频帧，输入“Esc”退出
    cv::VideoCapture video("path/to/your/video.mp4");//打开视频文件
    if (!video.isOpened()) 
    {
        std::cerr << "错误：无法打开视频文件！" << std::endl;
        return -1;
    }

    while (true) 
    {
        cv::Mat frame;
        video >> frame;//读取视频帧

        if (frame.empty()) 
        {
            std::cerr << "视频结束" << std::endl;
            break;
        }

        cv::imshow("视频", frame);//显示视频帧
        key = cv::waitKey(30);//等待30毫秒，可以根据视频帧率调整

        if (key == 27) 
        {   
            //ASCII码27对应'Esc'键
            cv::destroyAllWindows();//关闭所有OpenCV窗口
            break;
        }
    }

    // (3) 开启计算机摄像头捕获视频，使用while循环读取视频帧，输入“Esc”退出
    cv::VideoCapture camera(0);  // 0表示默认摄像头
    if (!camera.isOpened()) {
        std::cerr << "错误：无法打开摄像头！" << std::endl;
        return -1;
    }

    while (true) 
    {
        cv::Mat frame;
        camera >> frame;//读取摄像头帧

        if (frame.empty()) 
        {
            std::cerr << "错误：无法从摄像头捕获帧！" << std::endl;
            break;
        }

        cv::imshow("摄像头", frame);//显示摄像头帧
        key = cv::waitKey(30);//等待30毫秒，可以根据摄像头帧率调整

        if (key == 27) 
        {   //ASCII码27对应'Esc'键
            cv::destroyAllWindows();//关闭所有OpenCV窗口
            break;
        }
    }

    return 0;
}
