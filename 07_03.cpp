#include <opencv2/opencv.hpp>
int main() 
{
    //读取图像文件
    cv::Mat image = cv::imread("path/to/your/image.jpg");
    if (image.empty()) 
    {
        std::cerr << "错误：无法加载图像！" << std::endl;
        return -1;
    }

    //显示原始图像
    cv::imshow("原始图像", image);

    //(1):检测图像边缘
    cv::Mat edges;
    cv::Canny(image, edges, 50, 150);

    //(2):进行膨胀操作
    cv::Mat dilatedImage;
    cv::dilate(edges, dilatedImage, cv::Mat(), cv::Point(-1, -1), 2);

    //(3):进行侵蚀操作
    cv::Mat erodedImage;
    cv::erode(dilatedImage, erodedImage, cv::Mat(), cv::Point(-1, -1), 2);

    //(4):改变图像大小，缩放为50%
    cv::Mat resizedImage;
    cv::resize(image, resizedImage, cv::Size(), 0.5, 0.5);

    //显示处理后的图像
    cv::imshow("边缘检测图像", edges);
    cv::imshow("膨胀后图像", dilatedImage);
    cv::imshow("侵蚀后图像", erodedImage);
    cv::imshow("缩放后图像", resizedImage);

    //等待按下任意键退出程序
    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}
