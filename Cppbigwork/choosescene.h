#ifndef CHOOSESCENE_H
#define CHOOSESCENE_H

#include <QWidget>
#include"syw.h"
#include"syw1.h"

//选择关卡的场景
namespace Ui {
class chooseScene;
}

class chooseScene : public QWidget
{
    Q_OBJECT

public:
    explicit chooseScene(QWidget *parent = nullptr);
    ~chooseScene();

    SYW *syw=NULL;
    syw1 *sywb=NULL;

private slots:
    void on_jueyuan_btn_clicked();//按钮1，绝缘之旗印

    void on_bing_btn_clicked();//按钮2，风雪迷途的勇士

private:
    Ui::chooseScene *ui;
};

#endif // CHOOSESCENE_H
