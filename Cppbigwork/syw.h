#ifndef SYW_H
#define SYW_H

#include <QWidget>
//绝缘套的强化界面

namespace Ui {
class SYW;
}

class SYW : public QWidget
{
    Q_OBJECT

public:
    explicit SYW(QWidget *parent = nullptr);
    ~SYW();

    int kind=0;//代表圣遗物种类，一共有五个，花，羽，杯，沙，和冠
    int sha,guan,bei;//表示杯子，沙和头的主词条
    int isExist;//判断第四个副词条是否存在
    int level;//等级
    int a,b,c,d;
    SYW *syw=NULL;

    double sumatt[10];//记录副词条各个属性的数值
    int countatt[40];//副词条库，初始化圣遗物和强化时从中抽取词条，一共10种词条，每种有4个可能值
    int mainrand[3];

    int checkKind(int a);//抽取词条时，用于判断抽取的词条种类

    void showAttribute1(int a1);//将副词条1展示在窗口中
    void showAttribute2(int a2);//将副词条2展示在窗口中
    void showAttribute3(int a3);//将副词条3展示在窗口中
    void showAttribute4(int a4);//将副词条4展示在窗口中，若不存在则不显示

    void printatt();//将主词条展示在窗口中
    void showname();//将圣遗物名字展示在窗口中

    void showmainatt();//展示全部副词条

    void calsumatt(int *arr);//计算副词条的数值

private slots:
    void on_againBtn_clicked();//再抽取按钮

    void on_fourBtn_clicked();//强化按钮，4级

    void on_twentyBtn_clicked();//强化按钮，20级

    void on_viewRatingBtn_clicked();//查看评分按钮

    void on_backbtn_clicked();//返回按钮


private:
    Ui::SYW *ui;
};

#endif // SYW_H
