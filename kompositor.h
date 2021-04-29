#ifndef KOMPOSITOR_H
#define KOMPOSITOR_H

#include <QMainWindow>

namespace Ui {
class Kompositor;
}

class Kompositor : public QMainWindow
{
    Q_OBJECT

public:
    explicit Kompositor(QWidget *parent = nullptr);
    int pixelToHeight(int ypixel);
    ~Kompositor();

private slots:
    void on_play_button_clicked();

    void on_half_Button_toggled(bool checked);

    void on_quarter_button_toggled(bool checked);

    void on_eight_button_clicked();

    void on_quarter_rest_button_clicked();

    void on_eight_rest_button_clicked();


private:
    Ui::Kompositor *ui;
};

#endif // KOMPOSITOR_H
