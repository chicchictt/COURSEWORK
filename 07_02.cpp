#include <opencv2/opencv.hpp>

int main() 
{
    //读取图像文件
    cv::Mat image = cv::imread("path/to/your/image.jpg");
    if (image.empty()) {
        std::cerr << "错误：无法加载图像！" << std::endl;
        return -1;
    }

    //显示原始图像
    cv::imshow("原始图像", image);

    //(1)：将图像转换为灰度图
    cv::Mat grayImage;
    cv::cvtColor(image, grayImage, cv::COLOR_BGR2GRAY);

    //(2)：将灰度图像二值化
    cv::Mat binaryImage;
    cv::threshold(grayImage, binaryImage, 128, 255, cv::THRESH_BINARY);

    //(3)：将灰度图像进行高斯模糊处理
    cv::Mat blurredImage;
    cv::GaussianBlur(grayImage, blurredImage, cv::Size(5, 5), 0);

    //显示处理后的图像
    cv::imshow("灰度图像", grayImage);
    cv::imshow("二值化图像", binaryImage);
    cv::imshow("高斯模糊图像", blurredImage);

    //等待按下任意键退出程序
    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}
